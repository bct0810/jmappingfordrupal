<?php
/**
 * @file
 * template for views jMappting row
 */
?>
<?php
    $var = 1;
?>
<?php if ($fields['metadata']->content): ?>
    <div id="map-side-bar">
      <div class="map-location" data-jmapping='<?php print $fields['metadata']->content ?>'>
        <a href="#" class="map-link"><?php print $fields['title_field']->stripped ?></a>
        <div class="info-box">
          <p><?php print $fields['title_field']->content ?></p>
          <p><?php print $fields['address_field']->content ?></p>
        </div>
      </div>
    </div>
<?php endif; ?>

