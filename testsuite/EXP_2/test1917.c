#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x50 = 2;
uint32_t x186 = 3U;
int32_t x205 = INT32_MAX;
uint32_t x206 = 7U;
volatile int32_t x242 = INT32_MIN;
int16_t x276 = 4;
volatile int64_t t8 = -2623088775191LL;
static int64_t x331 = INT64_MAX;
volatile uint16_t x451 = 524U;
static int64_t x522 = INT64_MIN;
uint64_t x554 = 87LLU;
volatile uint32_t x598 = UINT32_MAX;
int64_t x619 = INT64_MAX;
volatile int64_t t19 = -19847678LL;
static uint16_t x696 = 13U;
static volatile int32_t t22 = 4484717;
int8_t x722 = -1;
uint8_t x743 = 75U;
static int8_t x781 = INT8_MAX;
uint8_t x812 = 22U;
uint64_t x859 = 11989754LLU;
static uint64_t x923 = UINT64_MAX;
static uint8_t x924 = 0U;
uint16_t x938 = 199U;
uint64_t x939 = 1430465LLU;
static volatile uint64_t t30 = 800028834356246LLU;
int64_t x998 = INT64_MIN;
volatile int64_t t31 = 752595LL;
uint64_t t32 = 8LLU;
static int64_t t33 = 208632LL;
int16_t x1027 = INT16_MIN;
uint8_t x1104 = 0U;
volatile uint16_t x1115 = UINT16_MAX;
int8_t x1116 = 1;
volatile int32_t t36 = -40456;
uint8_t x1120 = 3U;
int16_t x1141 = 14719;
int32_t x1143 = INT32_MIN;
uint8_t x1175 = UINT8_MAX;
int16_t x1231 = 1;
uint64_t x1291 = UINT64_MAX;
volatile uint64_t t43 = 59LLU;
uint64_t x1297 = UINT64_MAX;
int32_t x1298 = INT32_MAX;
uint8_t x1299 = UINT8_MAX;
static int16_t x1321 = INT16_MAX;
static int64_t t45 = 19271129672LL;
int64_t t46 = 25678731LL;
volatile uint8_t x1347 = 3U;
uint16_t x1353 = UINT16_MAX;
static int32_t x1357 = INT32_MIN;
static uint8_t x1365 = UINT8_MAX;
volatile int64_t t50 = -6LL;
int32_t x1389 = INT32_MAX;
int8_t x1392 = 5;
uint64_t t51 = 16487585137000812LLU;
volatile int64_t x1433 = INT64_MAX;
volatile uint8_t x1460 = 6U;
static volatile uint64_t t54 = 1732730LLU;
static volatile int8_t x1598 = INT8_MIN;
int32_t x1765 = -1;
volatile uint64_t x1789 = 12169LLU;
int32_t x1792 = 1;
int32_t x1846 = -77;
int32_t x1926 = 224631;
int32_t t65 = -57;
static volatile uint64_t t68 = 14266952670LLU;
volatile uint8_t x2186 = UINT8_MAX;
static volatile uint64_t x2284 = 3LLU;
uint8_t x2312 = 3U;
uint32_t t74 = 2315U;
volatile uint8_t x2437 = UINT8_MAX;
int64_t x2597 = -30050962LL;
static int8_t x2618 = -1;
int8_t x2620 = 5;
uint64_t t80 = 9490817457306LLU;
uint16_t x2675 = UINT16_MAX;
uint64_t t81 = 13233LLU;
uint16_t x2683 = 77U;
int32_t x2694 = -1;
int32_t x2733 = INT32_MAX;
uint8_t x2760 = 0U;
uint8_t x2805 = 2U;
static volatile uint16_t x2828 = 3U;
int8_t x2855 = -1;
static int32_t t91 = 169;
volatile int64_t x2865 = -99525469766LL;
int32_t x2867 = 222959;
int32_t x2925 = INT32_MIN;
int32_t x3025 = -97012043;
volatile int32_t x3027 = INT32_MIN;
uint32_t t98 = 197U;
uint32_t x3189 = 153855058U;


void f0(void) {
	volatile uint8_t x49 = 17U;
	int32_t x51 = -1;
	uint8_t x52 = 16U;
	static int32_t t0 = -31221;

	t0 = ((x49%(x50|x51))<<x52);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x57 = INT32_MIN;
	volatile int16_t x58 = INT16_MIN;
	static volatile uint8_t x59 = 0U;
	uint16_t x60 = 1U;
	static int32_t t1 = -3;

	t1 = ((x57%(x58|x59))<<x60);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x109 = 74U;
	uint8_t x110 = 0U;
	volatile uint16_t x111 = UINT16_MAX;
	static uint8_t x112 = 7U;
	static int32_t t2 = -7247;

	t2 = ((x109%(x110|x111))<<x112);

	if (t2 != 9472) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 0U;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = 35LL;
	volatile uint64_t t3 = 85LLU;

	t3 = ((x113%(x114|x115))<<x116);

	if (t3 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x185 = 9U;
	volatile uint8_t x187 = 10U;
	static uint8_t x188 = 2U;
	uint32_t t4 = 1294415774U;

	t4 = ((x185%(x186|x187))<<x188);

	if (t4 != 36U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x207 = UINT64_MAX;
	uint8_t x208 = 0U;
	volatile uint64_t t5 = 1LLU;

	t5 = ((x205%(x206|x207))<<x208);

	if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x237 = 3U;
	int64_t x238 = INT64_MAX;
	int32_t x239 = -1;
	uint32_t x240 = 1U;
	int64_t t6 = -14759615LL;

	t6 = ((x237%(x238|x239))<<x240);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x241 = 59175027LLU;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = 25U;
	uint64_t t7 = 331556916176LLU;

	t7 = ((x241%(x242|x243))<<x244);

	if (t7 != 1985584419569664LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x273 = INT64_MAX;
	int32_t x274 = 3929;
	int32_t x275 = INT32_MAX;

	t8 = ((x273%(x274|x275))<<x276);

	if (t8 != 16LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x321 = 0U;
	uint8_t x322 = 54U;
	volatile uint64_t x323 = 2981886734945367498LLU;
	static uint8_t x324 = 2U;
	uint64_t t9 = 18634271LLU;

	t9 = ((x321%(x322|x323))<<x324);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x329 = 3U;
	int32_t x330 = -1;
	uint8_t x332 = 7U;
	static int64_t t10 = 468856638405828677LL;

	t10 = ((x329%(x330|x331))<<x332);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x333 = 0U;
	uint16_t x334 = 109U;
	int8_t x335 = INT8_MAX;
	volatile uint16_t x336 = 16U;
	int32_t t11 = 536834423;

	t11 = ((x333%(x334|x335))<<x336);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = -1581;
	volatile int16_t x392 = 5;
	volatile uint32_t t12 = 24179150U;

	t12 = ((x389%(x390|x391))<<x392);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x409 = 105339995LL;
	int16_t x410 = 12;
	int32_t x411 = -92;
	volatile int16_t x412 = 3;
	volatile int64_t t13 = 12591047627LL;

	t13 = ((x409%(x410|x411))<<x412);

	if (t13 != 376LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x449 = INT8_MAX;
	int64_t x450 = -1LL;
	uint32_t x452 = 31U;
	static volatile int64_t t14 = -76436471400975LL;

	t14 = ((x449%(x450|x451))<<x452);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x521 = INT64_MIN;
	uint64_t x523 = UINT64_MAX;
	uint16_t x524 = 0U;
	volatile uint64_t t15 = 74LLU;

	t15 = ((x521%(x522|x523))<<x524);

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x553 = INT32_MIN;
	int64_t x555 = INT64_MAX;
	int8_t x556 = 40;
	static uint64_t t16 = 3334053995440712782LLU;

	t16 = ((x553%(x554|x555))<<x556);

	if (t16 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x597 = INT64_MAX;
	static int16_t x599 = -1;
	int8_t x600 = 3;
	volatile int64_t t17 = 268LL;

	t17 = ((x597%(x598|x599))<<x600);

	if (t17 != 17179869176LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x601 = -1;
	static int16_t x602 = INT16_MIN;
	uint64_t x603 = 13LLU;
	volatile uint64_t x604 = 7LLU;
	uint64_t t18 = 1733330LLU;

	t18 = ((x601%(x602|x603))<<x604);

	if (t18 != 4192512LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x617 = INT32_MIN;
	int16_t x618 = INT16_MIN;
	uint8_t x620 = 1U;

	t19 = ((x617%(x618|x619))<<x620);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x625 = 107U;
	volatile int8_t x626 = 1;
	static int64_t x627 = -398230710382LL;
	uint64_t x628 = 20LLU;
	static int64_t t20 = -40LL;

	t20 = ((x625%(x626|x627))<<x628);

	if (t20 != 112197632LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x681 = INT64_MAX;
	int16_t x682 = 1854;
	static uint8_t x683 = 3U;
	int16_t x684 = 7;
	volatile int64_t t21 = 3439582188176964LL;

	t21 = ((x681%(x682|x683))<<x684);

	if (t21 != 126336LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x693 = INT8_MIN;
	int8_t x694 = -1;
	int16_t x695 = -1;

	t22 = ((x693%(x694|x695))<<x696);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x721 = 307597970249LLU;
	volatile int8_t x723 = INT8_MAX;
	static uint8_t x724 = 0U;
	uint64_t t23 = 110037696588372954LLU;

	t23 = ((x721%(x722|x723))<<x724);

	if (t23 != 307597970249LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x741 = 327167LLU;
	int16_t x742 = -647;
	uint16_t x744 = 3U;
	volatile uint64_t t24 = 2085672725LLU;

	t24 = ((x741%(x742|x743))<<x744);

	if (t24 != 2617336LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x782 = -1LL;
	int64_t x783 = INT64_MIN;
	int8_t x784 = 0;
	volatile int64_t t25 = -15029422LL;

	t25 = ((x781%(x782|x783))<<x784);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x809 = 1;
	static int32_t x810 = 1611;
	static uint16_t x811 = 1098U;
	volatile int32_t t26 = 1597392;

	t26 = ((x809%(x810|x811))<<x812);

	if (t26 != 4194304) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x821 = -71;
	int64_t x822 = 77777LL;
	int8_t x823 = -1;
	volatile int16_t x824 = 49;
	static int64_t t27 = -32LL;

	t27 = ((x821%(x822|x823))<<x824);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x857 = 103796011449LL;
	int8_t x858 = INT8_MIN;
	uint16_t x860 = 23U;
	static uint64_t t28 = 229010925808440358LLU;

	t28 = ((x857%(x858|x859))<<x860);

	if (t28 != 870704052009172992LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x921 = 3LLU;
	int8_t x922 = INT8_MIN;
	uint64_t t29 = 255994080LLU;

	t29 = ((x921%(x922|x923))<<x924);

	if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x937 = UINT64_MAX;
	volatile uint16_t x940 = 6U;

	t30 = ((x937%(x938|x939))<<x940);

	if (t30 != 88342080LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x997 = 2U;
	int16_t x999 = INT16_MAX;
	int16_t x1000 = 1;

	t31 = ((x997%(x998|x999))<<x1000);

	if (t31 != 4LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1005 = UINT64_MAX;
	uint32_t x1006 = UINT32_MAX;
	static int64_t x1007 = -1LL;
	uint32_t x1008 = 0U;

	t32 = ((x1005%(x1006|x1007))<<x1008);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1021 = INT32_MAX;
	int16_t x1022 = INT16_MAX;
	volatile int64_t x1023 = INT64_MAX;
	volatile uint8_t x1024 = 3U;

	t33 = ((x1021%(x1022|x1023))<<x1024);

	if (t33 != 17179869176LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1025 = 1U;
	static uint64_t x1026 = UINT64_MAX;
	int64_t x1028 = 13LL;
	uint64_t t34 = 24779LLU;

	t34 = ((x1025%(x1026|x1027))<<x1028);

	if (t34 != 8192LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1101 = INT32_MIN;
	int64_t x1102 = -123LL;
	int16_t x1103 = -1;
	volatile int64_t t35 = 123675568637758149LL;

	t35 = ((x1101%(x1102|x1103))<<x1104);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1113 = INT16_MAX;
	int8_t x1114 = INT8_MIN;

	t36 = ((x1113%(x1114|x1115))<<x1116);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1117 = 35;
	int64_t x1118 = -102754863608941551LL;
	volatile int16_t x1119 = INT16_MIN;
	int64_t t37 = -4148729630434LL;

	t37 = ((x1117%(x1118|x1119))<<x1120);

	if (t37 != 280LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1142 = 172U;
	volatile uint8_t x1144 = 3U;
	int32_t t38 = 0;

	t38 = ((x1141%(x1142|x1143))<<x1144);

	if (t38 != 117752) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1173 = INT8_MIN;
	static uint64_t x1174 = 10LLU;
	static uint32_t x1176 = 11U;
	static uint64_t t39 = 2057069040123LLU;

	t39 = ((x1173%(x1174|x1175))<<x1176);

	if (t39 != 262144LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1177 = 5090U;
	int32_t x1178 = 513329222;
	volatile int32_t x1179 = INT32_MIN;
	int8_t x1180 = 0;
	int32_t t40 = -60183;

	t40 = ((x1177%(x1178|x1179))<<x1180);

	if (t40 != 5090) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1229 = INT32_MIN;
	int64_t x1230 = 0LL;
	uint8_t x1232 = 2U;
	int64_t t41 = -1821LL;

	t41 = ((x1229%(x1230|x1231))<<x1232);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1233 = 3U;
	int16_t x1234 = INT16_MIN;
	int8_t x1235 = INT8_MAX;
	uint64_t x1236 = 25LLU;
	static volatile int32_t t42 = 47533;

	t42 = ((x1233%(x1234|x1235))<<x1236);

	if (t42 != 100663296) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1289 = 3379;
	static int64_t x1290 = -1684698937630370LL;
	uint32_t x1292 = 57U;

	t43 = ((x1289%(x1290|x1291))<<x1292);

	if (t43 != 7349874591868649472LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1300 = 7LL;
	volatile uint64_t t44 = 17964685LLU;

	t44 = ((x1297%(x1298|x1299))<<x1300);

	if (t44 != 384LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x1322 = INT64_MAX;
	int32_t x1323 = INT32_MIN;
	static int32_t x1324 = 1;

	t45 = ((x1321%(x1322|x1323))<<x1324);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1341 = INT64_MIN;
	volatile uint8_t x1342 = 1U;
	uint16_t x1343 = 0U;
	volatile int32_t x1344 = 2;

	t46 = ((x1341%(x1342|x1343))<<x1344);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1345 = INT64_MAX;
	static volatile int8_t x1346 = -1;
	uint8_t x1348 = 20U;
	static volatile int64_t t47 = -10LL;

	t47 = ((x1345%(x1346|x1347))<<x1348);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1354 = 152;
	volatile int16_t x1355 = INT16_MIN;
	static uint32_t x1356 = 5U;
	volatile int32_t t48 = 5;

	t48 = ((x1353%(x1354|x1355))<<x1356);

	if (t48 != 9696) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1358 = UINT64_MAX;
	volatile int64_t x1359 = INT64_MIN;
	uint8_t x1360 = 24U;
	static uint64_t t49 = 66084521605007LLU;

	t49 = ((x1357%(x1358|x1359))<<x1360);

	if (t49 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1366 = UINT8_MAX;
	static volatile int64_t x1367 = -1LL;
	int8_t x1368 = 43;

	t50 = ((x1365%(x1366|x1367))<<x1368);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1390 = 4LLU;
	int32_t x1391 = INT32_MAX;

	t51 = ((x1389%(x1390|x1391))<<x1392);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1401 = UINT64_MAX;
	uint8_t x1402 = UINT8_MAX;
	uint64_t x1403 = UINT64_MAX;
	static uint16_t x1404 = 1U;
	static volatile uint64_t t52 = 2LLU;

	t52 = ((x1401%(x1402|x1403))<<x1404);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1434 = -6974;
	int16_t x1435 = -1;
	uint8_t x1436 = 12U;
	volatile int64_t t53 = 1750LL;

	t53 = ((x1433%(x1434|x1435))<<x1436);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1457 = 5156502039804445LLU;
	int16_t x1458 = INT16_MAX;
	uint16_t x1459 = 14961U;

	t54 = ((x1457%(x1458|x1459))<<x1460);

	if (t54 != 1616448LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1513 = 21U;
	uint64_t x1514 = UINT64_MAX;
	uint64_t x1515 = 3159487550LLU;
	static uint16_t x1516 = 35U;
	static volatile uint64_t t55 = 67259514384827LLU;

	t55 = ((x1513%(x1514|x1515))<<x1516);

	if (t55 != 721554505728LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1537 = INT8_MAX;
	uint64_t x1538 = 52418LLU;
	static int64_t x1539 = INT64_MIN;
	uint8_t x1540 = 0U;
	uint64_t t56 = 48402LLU;

	t56 = ((x1537%(x1538|x1539))<<x1540);

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1597 = INT32_MIN;
	static uint8_t x1599 = 126U;
	static uint32_t x1600 = 3U;
	volatile int32_t t57 = -246015;

	t57 = ((x1597%(x1598|x1599))<<x1600);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1609 = INT16_MIN;
	static uint16_t x1610 = UINT16_MAX;
	int16_t x1611 = INT16_MIN;
	volatile uint16_t x1612 = 4U;
	volatile int32_t t58 = 264219635;

	t58 = ((x1609%(x1610|x1611))<<x1612);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1613 = 1882;
	static volatile uint32_t x1614 = 13728U;
	uint8_t x1615 = UINT8_MAX;
	int32_t x1616 = 1;
	volatile uint32_t t59 = 18704U;

	t59 = ((x1613%(x1614|x1615))<<x1616);

	if (t59 != 3764U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1766 = INT64_MAX;
	static int16_t x1767 = -1;
	static uint16_t x1768 = 0U;
	int64_t t60 = -22612151885201LL;

	t60 = ((x1765%(x1766|x1767))<<x1768);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1790 = INT16_MAX;
	int32_t x1791 = 56;
	volatile uint64_t t61 = 576LLU;

	t61 = ((x1789%(x1790|x1791))<<x1792);

	if (t61 != 24338LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1801 = -18448LL;
	uint8_t x1802 = 7U;
	int8_t x1803 = -1;
	volatile uint8_t x1804 = 0U;
	static volatile int64_t t62 = -1165896676LL;

	t62 = ((x1801%(x1802|x1803))<<x1804);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1845 = 0U;
	int16_t x1847 = -1;
	int16_t x1848 = 3;
	volatile int32_t t63 = -2;

	t63 = ((x1845%(x1846|x1847))<<x1848);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1913 = 2LLU;
	static int8_t x1914 = INT8_MAX;
	int16_t x1915 = INT16_MIN;
	volatile int8_t x1916 = 14;
	uint64_t t64 = 58LLU;

	t64 = ((x1913%(x1914|x1915))<<x1916);

	if (t64 != 32768LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x1925 = UINT8_MAX;
	int8_t x1927 = 0;
	int32_t x1928 = 8;

	t65 = ((x1925%(x1926|x1927))<<x1928);

	if (t65 != 65280) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2053 = 24254U;
	uint64_t x2054 = UINT64_MAX;
	int32_t x2055 = INT32_MIN;
	static uint32_t x2056 = 2U;
	volatile uint64_t t66 = 479535164923380313LLU;

	t66 = ((x2053%(x2054|x2055))<<x2056);

	if (t66 != 97016LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2089 = 30144U;
	int64_t x2090 = INT64_MIN;
	int64_t x2091 = -242768340363096LL;
	volatile int8_t x2092 = 1;
	int64_t t67 = 130630LL;

	t67 = ((x2089%(x2090|x2091))<<x2092);

	if (t67 != 60288LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2133 = INT64_MIN;
	volatile int16_t x2134 = INT16_MIN;
	uint64_t x2135 = 66157LLU;
	static uint16_t x2136 = 58U;

	t68 = ((x2133%(x2134|x2135))<<x2136);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2137 = 111;
	static int8_t x2138 = 7;
	static int64_t x2139 = -1LL;
	static uint16_t x2140 = 6U;
	volatile int64_t t69 = -400091216191637346LL;

	t69 = ((x2137%(x2138|x2139))<<x2140);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2165 = INT8_MIN;
	int8_t x2166 = -1;
	int64_t x2167 = INT64_MIN;
	static uint16_t x2168 = 27U;
	int64_t t70 = 921LL;

	t70 = ((x2165%(x2166|x2167))<<x2168);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2185 = 8945;
	static int32_t x2187 = -1;
	int8_t x2188 = 7;
	volatile int32_t t71 = 21143406;

	t71 = ((x2185%(x2186|x2187))<<x2188);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x2281 = INT8_MAX;
	int64_t x2282 = 988LL;
	static int16_t x2283 = INT16_MIN;
	volatile int64_t t72 = -106LL;

	t72 = ((x2281%(x2282|x2283))<<x2284);

	if (t72 != 1016LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2309 = 4717LLU;
	volatile uint8_t x2310 = UINT8_MAX;
	int64_t x2311 = INT64_MIN;
	uint64_t t73 = 1LLU;

	t73 = ((x2309%(x2310|x2311))<<x2312);

	if (t73 != 37736LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2321 = 3683605U;
	int32_t x2322 = INT32_MAX;
	volatile int16_t x2323 = -1;
	uint64_t x2324 = 2LLU;

	t74 = ((x2321%(x2322|x2323))<<x2324);

	if (t74 != 14734420U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2373 = 1;
	uint32_t x2374 = 276104447U;
	int64_t x2375 = INT64_MAX;
	int32_t x2376 = 2;
	volatile int64_t t75 = 167816364192153953LL;

	t75 = ((x2373%(x2374|x2375))<<x2376);

	if (t75 != 4LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2413 = 1;
	static uint16_t x2414 = UINT16_MAX;
	volatile int16_t x2415 = 848;
	uint8_t x2416 = 2U;
	int32_t t76 = 15;

	t76 = ((x2413%(x2414|x2415))<<x2416);

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2438 = INT32_MAX;
	static int8_t x2439 = 11;
	int32_t x2440 = 20;
	volatile int32_t t77 = -1;

	t77 = ((x2437%(x2438|x2439))<<x2440);

	if (t77 != 267386880) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2497 = -1;
	static uint16_t x2498 = 23537U;
	uint64_t x2499 = UINT64_MAX;
	static uint8_t x2500 = 2U;
	volatile uint64_t t78 = 18639LLU;

	t78 = ((x2497%(x2498|x2499))<<x2500);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x2598 = -1;
	int64_t x2599 = 351578LL;
	volatile int8_t x2600 = 9;
	int64_t t79 = -28779494650091LL;

	t79 = ((x2597%(x2598|x2599))<<x2600);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2617 = 277142262280LLU;
	volatile int32_t x2619 = INT32_MIN;

	t80 = ((x2617%(x2618|x2619))<<x2620);

	if (t80 != 8868552392960LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2673 = INT16_MIN;
	static uint64_t x2674 = 741084307837LLU;
	int16_t x2676 = 0;

	t81 = ((x2673%(x2674|x2675))<<x2676);

	if (t81 != 365506416805LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2681 = -244933256054LL;
	uint64_t x2682 = 130771049115999623LLU;
	static volatile uint8_t x2684 = 58U;
	uint64_t t82 = 42074853LLU;

	t82 = ((x2681%(x2682|x2683))<<x2684);

	if (t82 != 2017612633061982208LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x2685 = UINT32_MAX;
	volatile uint16_t x2686 = 1U;
	static volatile int64_t x2687 = INT64_MIN;
	uint8_t x2688 = 11U;
	int64_t t83 = 3375LL;

	t83 = ((x2685%(x2686|x2687))<<x2688);

	if (t83 != 8796093020160LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x2693 = -1;
	uint16_t x2695 = 5364U;
	static volatile uint8_t x2696 = 22U;
	volatile int32_t t84 = 19924301;

	t84 = ((x2693%(x2694|x2695))<<x2696);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2734 = 147U;
	int32_t x2735 = INT32_MIN;
	uint32_t x2736 = 1U;
	static int32_t t85 = -43333;

	t85 = ((x2733%(x2734|x2735))<<x2736);

	if (t85 != 292) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2745 = INT64_MIN;
	int32_t x2746 = INT32_MIN;
	static int8_t x2747 = INT8_MIN;
	volatile int32_t x2748 = 3;
	volatile int64_t t86 = 587507327110LL;

	t86 = ((x2745%(x2746|x2747))<<x2748);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2757 = INT32_MIN;
	volatile uint64_t x2758 = 35392496590324802LLU;
	int64_t x2759 = INT64_MAX;
	uint64_t t87 = 295135071197596LLU;

	t87 = ((x2757%(x2758|x2759))<<x2760);

	if (t87 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2806 = INT64_MIN;
	static int64_t x2807 = 59566LL;
	int32_t x2808 = 10;
	volatile int64_t t88 = -2520084499306369LL;

	t88 = ((x2805%(x2806|x2807))<<x2808);

	if (t88 != 2048LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2825 = 85U;
	int64_t x2826 = INT64_MAX;
	int16_t x2827 = INT16_MIN;
	int64_t t89 = -3746LL;

	t89 = ((x2825%(x2826|x2827))<<x2828);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2837 = INT8_MIN;
	int8_t x2838 = INT8_MIN;
	static int32_t x2839 = INT32_MIN;
	int64_t x2840 = 1LL;
	volatile int32_t t90 = -458;

	t90 = ((x2837%(x2838|x2839))<<x2840);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2853 = -135788;
	uint8_t x2854 = UINT8_MAX;
	int8_t x2856 = 16;

	t91 = ((x2853%(x2854|x2855))<<x2856);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x2866 = -20;
	static volatile uint8_t x2868 = 14U;
	int64_t t92 = -1025001188LL;

	t92 = ((x2865%(x2866|x2867))<<x2868);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x2873 = 7296U;
	volatile int32_t x2874 = INT32_MIN;
	uint16_t x2875 = 24U;
	int16_t x2876 = 4;
	uint32_t t93 = 229556U;

	t93 = ((x2873%(x2874|x2875))<<x2876);

	if (t93 != 116736U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2881 = -2556196;
	uint8_t x2882 = UINT8_MAX;
	int32_t x2883 = -1;
	int64_t x2884 = 1LL;
	int32_t t94 = -10;

	t94 = ((x2881%(x2882|x2883))<<x2884);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x2926 = UINT64_MAX;
	uint32_t x2927 = 33893U;
	int32_t x2928 = 0;
	uint64_t t95 = 1LLU;

	t95 = ((x2925%(x2926|x2927))<<x2928);

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3026 = UINT64_MAX;
	uint16_t x3028 = 0U;
	volatile uint64_t t96 = 28007748LLU;

	t96 = ((x3025%(x3026|x3027))<<x3028);

	if (t96 != 18446744073612539573LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3093 = INT64_MAX;
	int16_t x3094 = -1;
	uint16_t x3095 = UINT16_MAX;
	static int8_t x3096 = 1;
	volatile int64_t t97 = -24886778LL;

	t97 = ((x3093%(x3094|x3095))<<x3096);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x3177 = UINT32_MAX;
	int16_t x3178 = -43;
	int32_t x3179 = 19;
	volatile uint32_t x3180 = 29U;

	t98 = ((x3177%(x3178|x3179))<<x3180);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3190 = UINT16_MAX;
	volatile int64_t x3191 = 845889782661277LL;
	volatile uint8_t x3192 = 3U;
	volatile int64_t t99 = 124LL;

	t99 = ((x3189%(x3190|x3191))<<x3192);

	if (t99 != 1230840464LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

