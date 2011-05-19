<?php
/**
 * @file
 *  jMapping theme wrapper.
 *
 * @ingroup views_templates
 */

$path = drupal_get_path('module', 'jmapping');
drupal_add_js('http://maps.google.com/maps/api/js?v=3.3&sensor=false');
drupal_add_js($path . '/js/markermanager.js');
drupal_add_js($path . '/js/jquery.jmapping.js');
drupal_add_js($path . '/js/jmapping.js');
drupal_add_css($path . '/css/jmapping.css', $options = array('type' => 'file'));
?>
<div id="map"></div>
  <div id="map-side-bar">
    <?php foreach ($rows as $row): ?>
      <?php print $row?>
    <?php endforeach; ?>
</div>