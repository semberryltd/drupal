<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * @see node.tpl.php
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <section class="information">
    <?php print render($content['field_image']); ?>
    <?php print render($content['field_date']); ?>
    <?php print render($content['field_geographical_focus']); ?>
    <?php print render($content['field_related_topics']); ?>
  </section>

  <section class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>

  <?php if ($display_submitted): ?>
  <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
  </section>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>
