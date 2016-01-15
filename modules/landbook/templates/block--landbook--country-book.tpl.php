<?php
/**
 * @file
 * (New, sort of...) landbook block template for country
 *
 * Author: Jules Clement <jules@ker.bz>
 */

//dpm($content);
?>

<!-- this is left so that WESO JS can still works... -->
<input type="hidden" id="entity-id" value="<?php echo $content['iso3']; ?>" />
<input type="hidden" id="path" value="<?php echo drupal_get_path('module', 'landbook'); ?>" />
<input type="hidden" id="continent-id" value="<?php echo $content['data']['info']['region']['un_code']; ?>" />
<input type="hidden" id="continent-name" value="<?php echo $content['data']['info']['region']['name']; ?>" />
<input type="hidden" id="country-name" value="<?php echo $content['data']['info']['name']; ?>" />
<input type="hidden" id="un-code" value="<?php echo $content['data']['info']['iso3']; ?>" />
<input type="hidden" id="starred-indicators" value=""/>
<span class="sr-only indicator-name"></span>

<?php
/******************************************
 *      Comparison graph
 */
?>
<div id="comparison-graph" class="clearfix">
  <h2 class="section section-name"><span>Country comparison chart</span></h2>
  <form class="form-inline" id="comparison-form">
    <div class="form-group">
      <label for="source-select"><?php echo t('Choose a Dataset'); ?></label>
      <select id="source-select" class="form-control">
        <?php foreach ($content['data']['selectors']['data-sources'] as $d): ?>
        <option <?php echo (!$d['with_data'] ? ' disabled="disabled"': ''); ?> title="<?php echo $d['name']; ?>"><?php echo $d['name']; ?></option>
        <?php endforeach; ?>
      </select>
    </div>
    <div class="form-group">
      <label for="indicator-select"><?php echo t('Select an Indicator'); ?></label>
      <?php foreach ($content['data']['selectors']['data-sources'] as $d): ?>
      <select data-source="<?php echo $d['name']; ?>" class="topic-indicator-select hidden">
        <?php foreach ($d['indicators'] as $i): ?>
        <option <?php echo (!$i['with_data'] ? ' disabled="disabled"': ''); ?> value="<?php echo $i['id']; ?>" title="<?php echo $i['name']; ?>"><?php echo $i['name']; ?></option>
        <?php endforeach; ?>
      </select>
      <?php endforeach; ?>
      <select id="indicator-select" class="form-control"></select>
    </div>
    <div class="form-group">
      <!-- <label for="country-select">Country to compare</label> -->
      <select id="country-select" class="hidden">
        <option disabled="disabled" selected="true"><?php echo t('Select a country'); ?></option>
        <?php foreach ($content['data']['selectors']['countries'] as $i): ?>
        <option value="<?php echo $i['iso3']; ?>"><?php echo $i['name']; ?></option>
        <?php endforeach; ?>
      </select>
      <label for="country-comparing-select"><?php echo t('Compare with'); ?></label>
      <select id="country-comparing-select" class="form-control">
        <?php foreach ($content['data']['selectors']['countries'] as $c): ?>
        <option value="<?php echo $c['iso3']; ?>" data-region="<?php echo $c['region']; ?>"
                <?php if (!$c['data']) { echo ' disabled="disabled"'; } ?>><?php echo $c['name']; ?></option>
        <?php endforeach; /* selectors/countries */ ?>
      </select>
    </div>
  </form>

  <div id="chart-timeline-comparison" class="graph">
    <?php if (isset($content['data']['charts']['employment-timeline'])): ?>
    <div class="source-graph chart-content"><?php echo landbook_table_render($content['data']['charts']['employment-timeline']); ?></div>
    <?php endif; ?>
  </div>

  <div class="compare-legend">
    <ul class="list-inline" id="comparison-legend"><li>
	<div id="compare-legend-circle-1" class="circle"></div><span id="compare-legend-text-1"></span>
      </li><li>
	<div id="compare-legend-circle-2" class="circle"></div><span id="compare-legend-text-2"></span>
    </li></ul>
  </div>
</div>

<?php
/******************************************
 *      End of Comparison graph
 *
 *      Country central map
 */
?>
    <div id="mapDiv" class="map-medium indicator-map"></div>

<?php
/******************************************
 *      Diverse graph and display for indicators
 */
?>
    <div class="row" id="indicators-display">
      <!-- TRAFFIC LIGHTS -->
      <article class="col-sm-6">
        <h2 class="section"><span><?php echo t('Gender issues'); ?></span></h2>
        <table class="traffic">
          <?php foreach ($content['data']['charts']['trafficLights'] as $c): ?>
          <tr class="<?php echo ($c['light'] ? 'text-muted' : ''); ?>">
            <td class="issue"><?php echo $c['indicator']; ?></td>
            <td><div class="circle"><div class="<?php echo $c['light']; ?>"></div></div></td>
          </tr>
          <?php endforeach; /* charts/trafficLights */ ?>
        </table>
        <div class="row traffic-legend">
          <div class="col-xs-6">
            <div class="circle"><div class="none"></div></div>
            <span><?php echo t('No data'); ?></span>
          </div>
          <div class="col-xs-6">
            <div class="circle"><div class="bad"></div></div>
            <span><?php echo t('High inequality'); ?></span>
          </div>
          <div class="col-xs-6">
            <div class="circle"><div class="same"></div></div>
            <span><?php echo t('Mid inequality'); ?></span>
          </div>
          <div class="col-xs-6">
            <div class="circle"><div class="good"></div></div>
            <span><?php echo t('Low inequality'); ?></span>
          </div>
        </div>
      </article>

      <!-- SPIDER -->
      <article class="col-sm-6">
        <h2 class="section"><span><?php echo t('Main Index rankings'); ?></span></h2>
        <div id="main-index-rankings" class="graph">
<?php if ($content['data']['charts']['spider']): ?>
          <div class="source-graph chart-content"><?php echo landbook_table_render($content['data']['charts']['spider']); ?></div>
<?php else: ?>
          <div class="text-center text-muted"><?php echo t('No data available'); ?></div>
<?php endif; /* charts */ ?>
        </div>
        <footer>
          <ul class="spider-legend">
<?php foreach ($content['data']['charts']['spider']['observations'] as $o): ?>
            <li><span class="spider-legen-id"><?php echo $o['indicator']['id']; ?></span>: <?php echo $o['indicator']['name']; ?></li>
<?php endforeach; /* charts/spider/observations */ ?>
          </ul>
        </footer>
      </article>
    </div>
