<?php
/**
 * @file field--field-facilitators.tpl.php
 * Display facilitator field for debates
 *
 * If the facilitator (aka user) doesn't have a proper first or lastname
 * filled in, the login will be printed instead.
 *
 * @see field.tpl.php
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><span><?php print $label ?></span></div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
<?php
?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php
// Get uid and usr hash
list($uid, $usr) = each($item['user']);
if (!isset($usr['field_firstname']) || !isset($usr['field_firstname'])) {
  print '<div class="field">' . ucfirst($usr['#account']->name) . '</div>';
}
print render($item); ?></div>
    <?php endforeach; ?>
  </div>
</div>
