<?php
/**
 * @file
 *  Provide the views gallariffic plugin object with default options and form.
 */

/**
  * Implementation of views_plugin_style().
  */
class views_plugin_style_jmapping extends views_plugin_style {

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

}
