<?php

/**
 * @file
 *  Provide the jMapping plugin definition.
 */

function jmapping_views_plugins() {
  $path = drupal_get_path('module', 'jmapping');
  return array(
    'module' => 'jmapping',
    'style' => array(
      'jmapping' => array(
        'title' => t('jMappping Map'),
        'help' => t('Display a view of a jMapping Map.'),
        'handler' => 'views_plugin_style',
        'theme' => 'views_jmapping_view',
        'theme path' => $path,
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => TRUE,
        'type' => 'normal',
        'parent' => 'default',
      ),
    ),
    'row' => array(
      'jmappingfields' => array(
        'title' => t('jMapping Fields'),
        'help' => t('Choose the fields to display in the jMapping Map.'),
        'handler' => 'views_jmapping_plugin_row_jmappingrows',
        'theme' => 'views_jmapping_view_jmappingrows',
        'theme path' => $path,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}










