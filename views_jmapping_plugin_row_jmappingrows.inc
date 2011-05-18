<?php
/**
 * @file
 * Contains the base row style plugin.
 */

/**
 * The basic 'fields' row plugin
 *
 * This displays fields one after another, giving options for inline
 * or not.
 *
 * @ingroup views_row_plugins
 */
class views_jmapping_plugin_row_jmappingrows extends views_plugin_row {
  function option_definition() {
    $options = parent::option_definition();
    $options['title_field'] = array('default' => '');
    $options['nid_field'] = array('default' => '');
    $options['lat_field'] = array('default' => '');
    $options['lng_field'] = array('default' => '');
    $options['address_field'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build all of our option lists for the dials and switches that follow.
    $fields = array('' => t('<none>'));
    
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      $fields[$field] = $handler->ui_name();
    }
    
    $form['title_field'] = array(
      '#type' => 'select',
      '#title' => t('Title field'),
      '#options' => $fields,
      '#default_value' => $this->options['title_field'],
      '#description' => t('Select the field that will be used as the title field.'),
    );
    $form['nid_field'] = array(
      '#type' => 'select',
      '#title' => t('NID field'),
      '#options' => $fields,
      '#default_value' => $this->options['slide_field'],
      '#description' => t('Select the field that will be used as the NID field.'),
    );
    $form['lat_field'] = array(
      '#type' => 'select',
      '#title' => t('Latitude field'),
      '#options' => $fields,
      '#default_value' => $this->options['thumbnail_field'],
      '#description' => t('Select the field that will be used as the latitude field.'),
    );

    $form['lng_field'] = array(
      '#type' => 'select',
      '#title' => t('Longitude field'),
      '#options' => $fields,
      '#default_value' => $this->options['description_field'],
      '#description' => t('Select the field that will be used as the longitude field.'),
    );

    $form['address_field'] = array(
      '#type' => 'select',
      '#title' => t('Address field'),
      '#options' => $fields,
      '#default_value' => $this->options['description_field'],
      '#description' => t('Select the field that will be used as the address field.'),
    );

  }
}
