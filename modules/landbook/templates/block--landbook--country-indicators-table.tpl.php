<?php
//dpm($block, 'block');
//dpm($content, 'block-content');
//dpm($content['indicators'], 'prefered indicators');
?>
<article class="indicators-table">
  <h2 class="section section-name"><span>Country level data</span></h2>
  <table class="table table-striped table-hover">
    <thead>
      <tr>
        <th class="indicatorCode"><?php print t('Indicator code'); ?></th>
        <th class="indicatorName"><?php print t('Indicator name'); ?></th>
        <th class="value"><?php print t('Value'); ?></th>
        <th class="time"><?php print t('Year'); ?></th>
      </tr>
    </thead>
    <tbody>
<?php foreach ($content['data']['charts']['tableIndicators']['observations'] as $o) { ?>
      <tr>
        <td class="indicatorCode"><?php print $o['indicator']['id']; ?></td>
        <td class="indicatorName"><?php print $o['indicator']['name']; ?></td>
        <td class="value"><?php print $o['value']['value']; ?></td>
        <td class="time"><?php print $o['ref_time']['value']; ?></td>
      </tr>
<?php } ?>
    </tbody>
  </table>
<?php //print render($content); ?>
  <footer></footer>
</article>
