<?php
/**
 * @file
 * Debate node implementation
 *
 * Do not show the following elements:
 * - submitted
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */


?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php /* if ($display_submitted): ?> */
  /*   <div class="submitted"> */
  /*     <?php print $submitted; ?> */
  /*   </div> */
  /* <?php endif; */ ?>


  <section class="information">
    <?php
      // We hide the comments and links now so that we can render them later.
    foreach(array('image', 'status', 'date', 'facilitators') as $fn) {
        hide($content['field_'.$fn]);
        print render($content['field_'.$fn]);
    }
    ?>
  </section>

  <section class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </section>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
