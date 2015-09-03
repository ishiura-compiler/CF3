#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
static uint32_t x2 = 4135239U;
int8_t x13 = INT8_MAX;
volatile uint32_t x15 = UINT32_MAX;
volatile uint32_t t2 = 888130326U;
static volatile int64_t x21 = -252293157LL;
int8_t x24 = INT8_MAX;
int16_t x37 = INT16_MAX;
int16_t x38 = -16;
uint32_t x39 = UINT32_MAX;
static uint32_t t6 = 474U;
volatile int64_t t7 = 146999525427046LL;
int16_t x52 = -1;
uint64_t x57 = 936564671205082LLU;
volatile uint8_t x59 = UINT8_MAX;
volatile int8_t x81 = INT8_MIN;
int64_t x83 = INT64_MIN;
static int64_t x85 = -246503456119969128LL;
volatile uint64_t x86 = 1LLU;
uint16_t x94 = UINT16_MAX;
int8_t x109 = 27;
volatile uint8_t x111 = UINT8_MAX;
int8_t x122 = INT8_MIN;
static int8_t x124 = INT8_MAX;
int64_t x135 = -11384566146LL;
uint16_t x136 = 1389U;
int64_t x162 = -32522912299503747LL;
uint32_t x178 = UINT32_MAX;
int8_t x189 = 1;
int8_t x192 = INT8_MIN;
uint16_t x206 = 13733U;
static int8_t x209 = INT8_MAX;
uint64_t t28 = 23LLU;
int64_t x259 = -750839526128LL;
volatile uint32_t x260 = UINT32_MAX;
uint8_t x270 = UINT8_MAX;
volatile uint16_t x272 = 61U;
static uint32_t x273 = UINT32_MAX;
int16_t x275 = INT16_MIN;
int64_t x283 = -413LL;
uint8_t x306 = UINT8_MAX;
int16_t x318 = -57;
uint64_t t41 = 825554LLU;
volatile uint32_t t42 = 1933926449U;
uint16_t x334 = 846U;
uint8_t x342 = 20U;
int64_t t46 = 1702415844265428620LL;
static uint64_t t47 = 143313776LLU;
volatile int32_t x369 = INT32_MIN;
volatile int64_t x380 = INT64_MAX;
volatile uint64_t t50 = 946LLU;
volatile int64_t x381 = -1LL;
static volatile int32_t x382 = INT32_MIN;
int64_t x383 = 84988LL;
int64_t x392 = -1LL;
static uint64_t x398 = 4910847LLU;
int64_t x399 = -25476969537312LL;
static uint8_t x406 = UINT8_MAX;
int8_t x426 = -1;
int64_t x427 = INT64_MIN;
static volatile int16_t x433 = INT16_MIN;
static int32_t x447 = INT32_MIN;
uint64_t x453 = 4105370427LLU;
int32_t x454 = INT32_MIN;
uint64_t x461 = 34948730002LLU;
volatile int16_t x462 = INT16_MAX;
volatile uint64_t x463 = 24926761128051LLU;
uint8_t x468 = 15U;
uint32_t x490 = 0U;
uint32_t t65 = 959U;
volatile uint16_t x515 = 2424U;
uint64_t t69 = 695450235612704LLU;
int64_t t72 = -582320012LL;
uint64_t x558 = UINT64_MAX;
volatile uint64_t t73 = 21984301LLU;
uint8_t x581 = 28U;
int8_t x584 = INT8_MAX;
int32_t x597 = INT32_MIN;
uint64_t t77 = 149826245186025LLU;
uint8_t x602 = UINT8_MAX;
int32_t x604 = -118;
static uint64_t x608 = 8216582055LLU;
uint64_t t79 = 26832731531LLU;
int8_t x619 = -1;
int64_t x623 = INT64_MAX;
static volatile int8_t x634 = 19;
volatile int64_t t82 = 31918834206441LL;
static volatile int64_t x679 = INT64_MIN;
int64_t t83 = 17458230268207LL;
volatile uint64_t t84 = 1571280LLU;
int64_t x707 = INT64_MIN;
static uint8_t x708 = 1U;
volatile int64_t t85 = -8LL;
volatile int8_t x712 = -10;
int64_t x715 = INT64_MAX;
int64_t t87 = -194805147LL;
volatile int8_t x720 = INT8_MIN;
int8_t x747 = -58;
volatile uint16_t x761 = 135U;
static int16_t x764 = INT16_MIN;
uint64_t t91 = 264878057LLU;
int32_t x782 = INT32_MAX;
uint64_t x801 = UINT64_MAX;
uint64_t x804 = 59091144616LLU;
uint64_t t94 = 26135LLU;
static volatile int64_t x825 = 0LL;
int64_t x843 = INT64_MIN;
int16_t x853 = 0;
int64_t t99 = 0LL;


void f0(void) {
	int16_t x3 = INT16_MIN;
	volatile int8_t x4 = -1;
	volatile uint32_t t0 = 939436U;

	t0 = ((x1*x2)%(x3/x4));

	if (t0 != 26297U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 28U;
	int16_t x10 = INT16_MIN;
	int64_t x11 = -3888853LL;
	int8_t x12 = INT8_MIN;
	int64_t t1 = -3293273494LL;

	t1 = ((x9*x10)%(x11/x12));

	if (t1 != -6074LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = 10U;
	int8_t x16 = INT8_MIN;

	t2 = ((x13*x14)%(x15/x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 2U;
	int16_t x18 = -1;
	int64_t x19 = 33920LL;
	uint16_t x20 = 226U;
	volatile int64_t t3 = -1913850590045LL;

	t3 = ((x17*x18)%(x19/x20));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = -1;
	volatile int64_t x23 = -13532538755LL;
	static volatile int64_t t4 = -8680933710LL;

	t4 = ((x21*x22)%(x23/x24));

	if (t4 != 39182311LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	static int16_t x30 = -1;
	volatile int16_t x31 = INT16_MIN;
	uint64_t x32 = 39703666LLU;
	uint64_t t5 = 26985LLU;

	t5 = ((x29*x30)%(x31/x32));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x40 = 1;

	t6 = ((x37*x38)%(x39/x40));

	if (t6 != 4294443024U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	uint32_t x42 = 3U;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = 1488U;

	t7 = ((x41*x42)%(x43/x44));

	if (t7 != -3LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	static uint8_t x51 = 10U;
	static int32_t t8 = 281404746;

	t8 = ((x49*x50)%(x51/x52));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 1864967896U;
	int16_t x54 = INT16_MIN;
	int32_t x55 = -1;
	static volatile uint64_t x56 = 473245762866LLU;
	uint64_t t9 = 60320101957LLU;

	t9 = ((x53*x54)%(x55/x56));

	if (t9 != 28595226LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x58 = 287890540;
	int8_t x60 = -1;
	uint64_t t10 = 2172265393911111LLU;

	t10 = ((x57*x58)%(x59/x60));

	if (t10 != 10497556814701304824LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = 64175406U;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 143U;
	volatile int8_t x80 = INT8_MIN;
	volatile uint32_t t11 = 126U;

	t11 = ((x77*x78)%(x79/x80));

	if (t11 != 375482624U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x82 = -4;
	static int32_t x84 = INT32_MIN;
	int64_t t12 = -14722810568517644LL;

	t12 = ((x81*x82)%(x83/x84));

	if (t12 != 512LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x87 = 1364U;
	int64_t x88 = -1LL;
	uint64_t t13 = 92LLU;

	t13 = ((x85*x86)%(x87/x88));

	if (t13 != 18200240617589582488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = -1LL;
	static int64_t x95 = INT64_MAX;
	int64_t x96 = -161251746096306LL;
	int64_t t14 = 84012962LL;

	t14 = ((x93*x94)%(x95/x96));

	if (t14 != -8337LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x110 = -452;
	static int8_t x112 = 32;
	static volatile int32_t t15 = 53387120;

	t15 = ((x109*x110)%(x111/x112));

	if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x123 = INT8_MIN;
	int32_t t16 = -1891382;

	t16 = ((x121*x122)%(x123/x124));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x129 = 2631176574498LL;
	uint32_t x130 = 1211040U;
	uint64_t x131 = 7826314519LLU;
	volatile uint16_t x132 = 323U;
	uint64_t t17 = 13630239870LLU;

	t17 = ((x129*x130)%(x131/x132));

	if (t17 != 23296545LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = 28;
	volatile int64_t t18 = 1LL;

	t18 = ((x133*x134)%(x135/x136));

	if (t18 != -3584LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	static int32_t x152 = 3915880;
	uint64_t t19 = 851531101302614020LLU;

	t19 = ((x149*x150)%(x151/x152));

	if (t19 != 3730361LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 3490U;
	uint16_t x155 = UINT16_MAX;
	static uint8_t x156 = 5U;
	static int32_t t20 = -174;

	t20 = ((x153*x154)%(x155/x156));

	if (t20 != 11781) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x161 = 107U;
	int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MAX;
	int64_t t21 = 52479886486937814LL;

	t21 = ((x161*x162)%(x163/x164));

	if (t21 != -61083LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x177 = 6743U;
	static int16_t x179 = INT16_MAX;
	int16_t x180 = -1;
	volatile uint32_t t22 = 21U;

	t22 = ((x177*x178)%(x179/x180));

	if (t22 != 26024U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x181 = 6U;
	int64_t x182 = -1LL;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = 259698294767853175LLU;
	volatile uint64_t t23 = 2172237458668230643LLU;

	t23 = ((x181*x182)%(x183/x184));

	if (t23 != 4LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x185 = 1;
	int16_t x186 = 99;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = -2;
	static uint32_t t24 = 5U;

	t24 = ((x185*x186)%(x187/x188));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x190 = 510098548U;
	static uint64_t x191 = UINT64_MAX;
	uint64_t t25 = 19330492741561LLU;

	t25 = ((x189*x190)%(x191/x192));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x205 = 18117111468898LLU;
	static uint8_t x207 = 11U;
	static uint32_t x208 = 3U;
	static uint64_t t26 = 85321LLU;

	t26 = ((x205*x206)%(x207/x208));

	if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	static int32_t x212 = 4;
	volatile int32_t t27 = 382;

	t27 = ((x209*x210)%(x211/x212));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x213 = 1602U;
	int32_t x214 = -37;
	int64_t x215 = -1LL;
	uint64_t x216 = 83743LLU;

	t28 = ((x213*x214)%(x215/x216));

	if (t28 != 220278042025252LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x225 = 7U;
	int32_t x226 = -1;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = 925U;
	volatile uint32_t t29 = 145U;

	t29 = ((x225*x226)%(x227/x228));

	if (t29 != 28U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x245 = 3774;
	volatile int16_t x246 = INT16_MIN;
	int64_t x247 = -531046579LL;
	int8_t x248 = INT8_MIN;
	static int64_t t30 = 5804447185LL;

	t30 = ((x245*x246)%(x247/x248));

	if (t30 != -3351203LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile int8_t x258 = -1;
	volatile int64_t t31 = 513570403LL;

	t31 = ((x257*x258)%(x259/x260));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x265 = 82U;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = -906235LL;
	int8_t x268 = -2;
	int64_t t32 = -30739LL;

	t32 = ((x265*x266)%(x267/x268));

	if (t32 != 389583LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x269 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	int32_t t33 = 1274;

	t33 = ((x269*x270)%(x271/x272));

	if (t33 != -420) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x274 = INT16_MIN;
	volatile int8_t x276 = 1;
	uint32_t t34 = 5U;

	t34 = ((x273*x274)%(x275/x276));

	if (t34 != 32768U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -5;
	int64_t x284 = -1LL;
	volatile int64_t t35 = 515858875733183897LL;

	t35 = ((x281*x282)%(x283/x284));

	if (t35 != 292LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x285 = INT8_MIN;
	static volatile uint16_t x286 = 26522U;
	int16_t x287 = -1;
	int32_t x288 = -1;
	volatile int32_t t36 = 1933549;

	t36 = ((x285*x286)%(x287/x288));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = 24;
	volatile int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t37 = -31127786;

	t37 = ((x289*x290)%(x291/x292));

	if (t37 != 3048) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x305 = UINT64_MAX;
	int64_t x307 = INT64_MAX;
	static uint32_t x308 = 306887930U;
	volatile uint64_t t38 = 59LLU;

	t38 = ((x305*x306)%(x307/x308));

	if (t38 != 410196521LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x313 = INT16_MAX;
	static int64_t x314 = -8013LL;
	static int8_t x315 = INT8_MIN;
	uint64_t x316 = 366LLU;
	uint64_t t39 = 355LLU;

	t39 = ((x313*x314)%(x315/x316));

	if (t39 != 50400939829541010LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x317 = 8U;
	uint8_t x319 = 17U;
	int8_t x320 = -1;
	int32_t t40 = -31;

	t40 = ((x317*x318)%(x319/x320));

	if (t40 != -14) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = 795544LLU;
	int32_t x327 = -102191269;
	int8_t x328 = 5;

	t41 = ((x325*x326)%(x327/x328));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x329 = UINT32_MAX;
	uint32_t x330 = 63321U;
	static volatile int16_t x331 = INT16_MIN;
	static volatile int8_t x332 = INT8_MIN;

	t42 = ((x329*x330)%(x331/x332));

	if (t42 != 167U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x333 = 63U;
	static uint64_t x335 = UINT64_MAX;
	volatile int32_t x336 = INT32_MIN;
	static volatile uint64_t t43 = 11845298639LLU;

	t43 = ((x333*x334)%(x335/x336));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x341 = 17;
	volatile uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 216852445547LLU;
	static uint64_t t44 = 9447LLU;

	t44 = ((x341*x342)%(x343/x344));

	if (t44 != 340LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x345 = 33;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = UINT64_MAX;
	uint32_t x348 = 1226613784U;
	volatile uint64_t t45 = 493541448LLU;

	t45 = ((x345*x346)%(x347/x348));

	if (t45 != 771721912LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x357 = INT8_MAX;
	int64_t x358 = 18087LL;
	int64_t x359 = -2452383906515LL;
	static int8_t x360 = INT8_MIN;

	t46 = ((x357*x358)%(x359/x360));

	if (t46 != 2297049LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x361 = -1LL;
	volatile uint16_t x362 = 9555U;
	int32_t x363 = INT32_MIN;
	static uint64_t x364 = 3LLU;

	t47 = ((x361*x362)%(x363/x364));

	if (t47 != 2147474095LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x365 = 5579361478009364LLU;
	static uint16_t x366 = 11825U;
	static int16_t x367 = INT16_MAX;
	int8_t x368 = -1;
	volatile uint64_t t48 = 83348358571LLU;

	t48 = ((x365*x366)%(x367/x368));

	if (t48 != 10635717256332074452LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x370 = -2347392819LL;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;
	volatile int64_t t49 = -6838591613594LL;

	t49 = ((x369*x370)%(x371/x372));

	if (t49 != 52336323985408LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x377 = 6987890518043420649LLU;
	uint8_t x378 = 49U;
	static uint64_t x379 = UINT64_MAX;

	t50 = ((x377*x378)%(x379/x380));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x384 = INT8_MAX;
	volatile int64_t t51 = -763080LL;

	t51 = ((x381*x382)%(x383/x384));

	if (t51 != 338LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	static uint8_t x391 = UINT8_MAX;
	uint64_t t52 = 7595295660398LLU;

	t52 = ((x389*x390)%(x391/x392));

	if (t52 != 2147483648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x397 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile uint64_t t53 = 97730162LLU;

	t53 = ((x397*x398)%(x399/x400));

	if (t53 != 18446744073080963200LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x405 = 2U;
	uint64_t x407 = 31LLU;
	int32_t x408 = 4;
	volatile uint64_t t54 = 61LLU;

	t54 = ((x405*x406)%(x407/x408));

	if (t54 != 6LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x425 = INT16_MIN;
	int64_t x428 = INT64_MAX;
	int64_t t55 = -3LL;

	t55 = ((x425*x426)%(x427/x428));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x434 = 2013289483320768LLU;
	volatile uint16_t x435 = UINT16_MAX;
	volatile int8_t x436 = -52;
	static volatile uint64_t t56 = 433892585173LLU;

	t56 = ((x433*x434)%(x435/x436));

	if (t56 != 7815506505383280640LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x441 = 1733;
	int32_t x442 = -1;
	volatile uint16_t x443 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t57 = -185971;

	t57 = ((x441*x442)%(x443/x444));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x445 = -1LL;
	int8_t x446 = 2;
	int32_t x448 = -10817;
	volatile int64_t t58 = -7099LL;

	t58 = ((x445*x446)%(x447/x448));

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x455 = 40557251LL;
	int16_t x456 = INT16_MIN;
	uint64_t t59 = 911232798334LLU;

	t59 = ((x453*x454)%(x455/x456));

	if (t59 != 9630528212744273920LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x464 = 85U;
	uint64_t t60 = 25634284LLU;

	t60 = ((x461*x462)%(x463/x464));

	if (t60 != 304152279LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x465 = 35U;
	int16_t x466 = INT16_MIN;
	static volatile uint16_t x467 = UINT16_MAX;
	int32_t t61 = -151;

	t61 = ((x465*x466)%(x467/x468));

	if (t61 != -2202) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x469 = INT8_MIN;
	int8_t x470 = -28;
	int16_t x471 = -1;
	int8_t x472 = -1;
	int32_t t62 = -157;

	t62 = ((x469*x470)%(x471/x472));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x473 = -20;
	uint32_t x474 = 30676780U;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;
	uint32_t t63 = 2233378U;

	t63 = ((x473*x474)%(x475/x476));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x481 = -1;
	int16_t x482 = -2;
	static int32_t x483 = INT32_MAX;
	int16_t x484 = INT16_MAX;
	static volatile int32_t t64 = 6264;

	t64 = ((x481*x482)%(x483/x484));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x489 = 5U;
	uint16_t x491 = UINT16_MAX;
	volatile uint32_t x492 = 21564U;

	t65 = ((x489*x490)%(x491/x492));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x497 = 6;
	int32_t x498 = -1;
	int8_t x499 = -1;
	uint8_t x500 = 1U;
	int32_t t66 = -41915;

	t66 = ((x497*x498)%(x499/x500));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x513 = UINT16_MAX;
	int8_t x514 = 17;
	uint8_t x516 = UINT8_MAX;
	static volatile int32_t t67 = -452;

	t67 = ((x513*x514)%(x515/x516));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x529 = INT16_MIN;
	static int8_t x530 = INT8_MAX;
	int16_t x531 = INT16_MIN;
	volatile int8_t x532 = 19;
	static volatile int32_t t68 = 1175153;

	t68 = ((x529*x530)%(x531/x532));

	if (t68 != -1524) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x533 = 2540;
	static uint8_t x534 = 109U;
	int16_t x535 = -5522;
	static uint64_t x536 = 1290145628LLU;

	t69 = ((x533*x534)%(x535/x536));

	if (t69 != 276860LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x541 = UINT64_MAX;
	uint8_t x542 = UINT8_MAX;
	int16_t x543 = INT16_MIN;
	int8_t x544 = -1;
	volatile uint64_t t70 = 21LLU;

	t70 = ((x541*x542)%(x543/x544));

	if (t70 != 32513LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x549 = -290977;
	static uint32_t x550 = UINT32_MAX;
	uint16_t x551 = 16084U;
	int16_t x552 = -37;
	uint32_t t71 = 7U;

	t71 = ((x549*x550)%(x551/x552));

	if (t71 != 290977U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x553 = 19U;
	int64_t x554 = -122918732031LL;
	volatile uint16_t x555 = UINT16_MAX;
	volatile uint16_t x556 = 17233U;

	t72 = ((x553*x554)%(x555/x556));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x557 = 2582871845860780570LLU;
	uint64_t x559 = 110567453LLU;
	uint8_t x560 = 2U;

	t73 = ((x557*x558)%(x559/x560));

	if (t73 != 55281108LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x561 = 7U;
	static volatile int64_t x562 = -1LL;
	int32_t x563 = 81086270;
	static int32_t x564 = -1;
	int64_t t74 = -807862917012287928LL;

	t74 = ((x561*x562)%(x563/x564));

	if (t74 != -7LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x582 = 17U;
	int64_t x583 = INT64_MAX;
	int64_t t75 = 673100305512103877LL;

	t75 = ((x581*x582)%(x583/x584));

	if (t75 != 476LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x585 = INT16_MIN;
	static int16_t x586 = 10;
	int8_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	uint32_t t76 = 11866798U;

	t76 = ((x585*x586)%(x587/x588));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x598 = 3LLU;
	int16_t x599 = INT16_MIN;
	static int8_t x600 = INT8_MIN;

	t77 = ((x597*x598)%(x599/x600));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x601 = 3;
	int8_t x603 = INT8_MIN;
	static int32_t t78 = 30044;

	t78 = ((x601*x602)%(x603/x604));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x605 = -2;
	static int8_t x606 = -1;
	volatile int16_t x607 = INT16_MIN;

	t79 = ((x605*x606)%(x607/x608));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x617 = INT16_MIN;
	volatile int64_t x618 = 1957177885593LL;
	static uint32_t x620 = 43450444U;
	volatile int64_t t80 = 38LL;

	t80 = ((x617*x618)%(x619/x620));

	if (t80 != -70LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x621 = INT32_MIN;
	static uint64_t x622 = UINT64_MAX;
	int32_t x624 = -1;
	static volatile uint64_t t81 = 3751733701369502LLU;

	t81 = ((x621*x622)%(x623/x624));

	if (t81 != 2147483648LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x633 = 175176;
	int64_t x635 = 1617167804004568591LL;
	int16_t x636 = -1;

	t82 = ((x633*x634)%(x635/x636));

	if (t82 != 3328344LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x677 = INT8_MAX;
	int16_t x678 = 329;
	uint16_t x680 = 3U;

	t83 = ((x677*x678)%(x679/x680));

	if (t83 != 41783LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x689 = 1566LLU;
	uint8_t x690 = 14U;
	static int16_t x691 = 65;
	uint32_t x692 = 1U;

	t84 = ((x689*x690)%(x691/x692));

	if (t84 != 19LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x705 = -113733LL;
	uint32_t x706 = 1995821167U;

	t85 = ((x705*x706)%(x707/x708));

	if (t85 != -226990728786411LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x709 = 164U;
	int8_t x710 = -37;
	uint16_t x711 = 10560U;
	volatile int32_t t86 = 18326565;

	t86 = ((x709*x710)%(x711/x712));

	if (t86 != -788) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x713 = INT16_MIN;
	static int64_t x714 = -5599403515841LL;
	static int8_t x716 = 7;

	t87 = ((x713*x714)%(x715/x716));

	if (t87 != 183481254407077888LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x717 = INT8_MAX;
	uint8_t x718 = 35U;
	uint32_t x719 = UINT32_MAX;
	uint32_t t88 = 800U;

	t88 = ((x717*x718)%(x719/x720));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x745 = 168570U;
	volatile int8_t x746 = INT8_MIN;
	uint64_t x748 = 2LLU;
	uint64_t t89 = 406346039LLU;

	t89 = ((x745*x746)%(x747/x748));

	if (t89 != 4273390336LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x757 = -377428435;
	uint64_t x758 = 2LLU;
	int64_t x759 = INT64_MAX;
	int32_t x760 = -1;
	volatile uint64_t t90 = 359644550112965011LLU;

	t90 = ((x757*x758)%(x759/x760));

	if (t90 != 9223372036099918937LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x762 = 1;
	uint64_t x763 = UINT64_MAX;

	t91 = ((x761*x762)%(x763/x764));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x777 = 5U;
	uint8_t x778 = 16U;
	volatile uint64_t x779 = 909173581972496387LLU;
	static int32_t x780 = 1;
	volatile uint64_t t92 = 1036279509297LLU;

	t92 = ((x777*x778)%(x779/x780));

	if (t92 != 80LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x781 = 377682116U;
	int64_t x783 = INT64_MIN;
	int64_t x784 = -7842677225364LL;
	int64_t t93 = -55395912LL;

	t93 = ((x781*x782)%(x783/x784));

	if (t93 != 1045340LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x802 = 339U;
	int32_t x803 = INT32_MIN;

	t94 = ((x801*x802)%(x803/x804));

	if (t94 != 62898245LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x817 = 1010U;
	uint64_t x818 = 12374182LLU;
	uint8_t x819 = 31U;
	int64_t x820 = -1LL;
	uint64_t t95 = 860047LLU;

	t95 = ((x817*x818)%(x819/x820));

	if (t95 != 12497923820LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x826 = -17848159770685173LL;
	int64_t x827 = -5734622284595353LL;
	volatile int16_t x828 = -54;
	volatile int64_t t96 = -187212999477LL;

	t96 = ((x825*x826)%(x827/x828));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x833 = 15U;
	int16_t x834 = -698;
	uint8_t x835 = UINT8_MAX;
	int8_t x836 = -1;
	int32_t t97 = -47875;

	t97 = ((x833*x834)%(x835/x836));

	if (t97 != -15) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x841 = -1LL;
	volatile uint32_t x842 = UINT32_MAX;
	int16_t x844 = 745;
	int64_t t98 = 6LL;

	t98 = ((x841*x842)%(x843/x844));

	if (t98 != -4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x854 = INT8_MAX;
	static volatile int64_t x855 = 72420830258891866LL;
	volatile int16_t x856 = 75;

	t99 = ((x853*x854)%(x855/x856));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

