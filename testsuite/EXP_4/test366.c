#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 27516619842961LLU;
volatile int8_t x41 = -12;
int64_t x44 = 130662LL;
volatile int32_t x53 = -1;
uint64_t t2 = 33021001097000LLU;
int16_t x61 = INT16_MAX;
uint64_t x75 = 25733550LLU;
int16_t x84 = INT16_MIN;
uint32_t x92 = UINT32_MAX;
int64_t t8 = -397637706991LL;
int8_t x111 = INT8_MAX;
uint32_t t14 = UINT32_MAX;
uint32_t t15 = 242078U;
uint64_t x173 = 27396625365LLU;
int64_t x181 = -1LL;
uint16_t x182 = 14119U;
static volatile int64_t x193 = -1LL;
int8_t x194 = -1;
uint64_t t22 = 5246707518719LLU;
static volatile int32_t x210 = -18;
static uint64_t x211 = 65048617533426925LLU;
static uint8_t x217 = UINT8_MAX;
volatile uint32_t x218 = 280U;
static uint8_t x220 = 37U;
static uint32_t x234 = 6594132U;
volatile uint64_t t26 = 4821163367575114083LLU;
int8_t x243 = -1;
static uint8_t x253 = UINT8_MAX;
static int8_t x256 = INT8_MIN;
int16_t x265 = -1;
int32_t t30 = -865;
int16_t x272 = INT16_MIN;
static uint64_t t31 = 3242LLU;
int16_t x281 = INT16_MIN;
int32_t x282 = -305;
int16_t x285 = -1;
int64_t x302 = INT64_MIN;
static volatile int16_t x317 = -26;
volatile int32_t x319 = -1;
static uint64_t x320 = 8233916274503444484LLU;
uint64_t t38 = 4214769951LLU;
uint8_t x321 = 0U;
int8_t x324 = INT8_MAX;
int64_t x325 = INT64_MIN;
uint8_t x326 = 81U;
uint8_t x333 = 0U;
static uint16_t x335 = 1U;
uint16_t x336 = 216U;
int16_t x344 = 6;
static uint64_t t45 = 13053LLU;
uint32_t x355 = 5371U;
uint8_t x356 = 0U;
static int16_t x360 = -1;
static uint64_t x372 = 11780234LLU;
static int8_t x382 = -50;
uint8_t x383 = UINT8_MAX;
static int16_t x391 = INT16_MAX;
int16_t x397 = -115;
int64_t x409 = INT64_MAX;
uint64_t x429 = 299143111059LLU;
uint64_t x431 = 2146797551873LLU;
static int8_t x435 = -1;
volatile int8_t x443 = 1;
int16_t x445 = INT16_MAX;
uint32_t x491 = 285801U;
int8_t x504 = -1;
static int8_t x510 = INT8_MIN;
uint32_t x515 = 1U;
volatile int8_t x516 = INT8_MIN;
int64_t x520 = 717547607617806LL;
static volatile int64_t t70 = 6LL;
volatile uint32_t x525 = 2U;
int8_t x526 = INT8_MIN;
static uint64_t t75 = 5366LLU;
int16_t x561 = -2;
int64_t x562 = 3705143836LL;
static int64_t x566 = -1LL;
int64_t x571 = 118500388LL;
static uint32_t x572 = UINT32_MAX;
int16_t x573 = -849;
int16_t x587 = INT16_MAX;
uint64_t t85 = 580LLU;
int16_t x592 = INT16_MAX;
static volatile int64_t t86 = INT64_MAX;
int32_t x598 = -12871396;
int16_t x600 = INT16_MIN;
volatile int64_t x613 = 3LL;
volatile uint16_t x622 = 2361U;
volatile int64_t t94 = 345592126084503362LL;
static int8_t x653 = -1;
volatile uint16_t x655 = 1369U;
uint64_t x680 = UINT64_MAX;
uint8_t x685 = UINT8_MAX;
static uint32_t t99 = 24632U;


void f0(void) {
	static volatile int16_t x1 = -27;
	int32_t x3 = -780321495;
	int8_t x4 = -1;
	volatile uint64_t t0 = 5299508724LLU;

	t0 = (x1-(x2*(x3*x4)));

	if (t0 != 200168591925334302LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x42 = 1966LLU;
	int32_t x43 = INT32_MIN;
	uint64_t t1 = 474884LLU;

	t1 = (x41-(x42*(x43*x44)));

	if (t1 != 551648803543842804LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x54 = UINT64_MAX;
	volatile int8_t x55 = INT8_MAX;
	uint32_t x56 = 12543782U;

	t2 = (x53-(x54*(x55*x56)));

	if (t2 != 1593060313LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x62 = 436728752260832846LLU;
	static uint8_t x63 = 16U;
	volatile uint32_t x64 = UINT32_MAX;
	uint64_t t3 = 104585514599025LLU;

	t3 = (x61-(x62*(x63*x64)));

	if (t3 != 16376294932745184479LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x65 = 4;
	uint8_t x66 = 7U;
	uint64_t x67 = 30460638100014LLU;
	volatile int16_t x68 = INT16_MAX;
	uint64_t t4 = 473194LLU;

	t4 = (x65-(x66*(x67*x68)));

	if (t4 != 11460017973347440454LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x69 = 2U;
	int16_t x70 = INT16_MAX;
	int64_t x71 = -3315506080420116362LL;
	uint64_t x72 = 5612045162752LLU;
	volatile uint64_t t5 = 30698333108576733LLU;

	t5 = (x69-(x70*(x71*x72)));

	if (t5 != 5591832318472816130LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x73 = 31U;
	static int64_t x74 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	uint64_t t6 = 1586LLU;

	t6 = (x73-(x74*(x75*x76)));

	if (t6 != 31LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x81 = UINT32_MAX;
	uint32_t x82 = 1717027146U;
	int32_t x83 = -1;
	volatile uint32_t t7 = 715U;

	t7 = (x81-(x82*(x83*x84)));

	if (t7 != 526057471U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	static int8_t x91 = INT8_MAX;

	t8 = (x89-(x90*(x91*x92)));

	if (t8 != 4294967041LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x109 = -3LL;
	int8_t x110 = INT8_MAX;
	uint64_t x112 = 13713468548741916LLU;
	uint64_t t9 = 204628268LLU;

	t9 = (x109-(x110*(x111*x112)));

	if (t9 != 176394661856256225LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x117 = -5;
	uint8_t x118 = 0U;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = 1;
	int32_t t10 = -12005990;

	t10 = (x117-(x118*(x119*x120)));

	if (t10 != -5) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int8_t x123 = -1;
	int8_t x124 = -8;
	static volatile int32_t t11 = -1;

	t11 = (x121-(x122*(x123*x124)));

	if (t11 != -2147221504) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x129 = INT32_MIN;
	volatile uint32_t x130 = 226U;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1934;
	volatile uint32_t t12 = 774U;

	t12 = (x129-(x130*(x131*x132)));

	if (t12 != 710017024U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x133 = 546U;
	uint8_t x134 = 3U;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MAX;
	uint64_t t13 = 206012811108241LLU;

	t13 = (x133-(x134*(x135*x136)));

	if (t13 != 9223372036854776351LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile int16_t x154 = INT16_MIN;
	static int16_t x155 = -1;
	uint16_t x156 = 0U;

	t14 = (x153-(x154*(x155*x156)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x157 = 32U;
	int32_t x158 = INT32_MIN;
	volatile int8_t x159 = INT8_MIN;
	uint32_t x160 = 18502U;

	t15 = (x157-(x158*(x159*x160)));

	if (t15 != 32U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x162 = -1;
	uint32_t x163 = 56472U;
	volatile int8_t x164 = INT8_MIN;
	volatile uint32_t t16 = 49853U;

	t16 = (x161-(x162*(x163*x164)));

	if (t16 != 4287738752U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x174 = 2601U;
	volatile uint32_t x175 = UINT32_MAX;
	int16_t x176 = -9377;
	static volatile uint64_t t17 = 3385983154096LLU;

	t17 = (x173-(x174*(x175*x176)));

	if (t17 != 27372235788LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x177 = INT32_MAX;
	int8_t x178 = INT8_MAX;
	int16_t x179 = 15;
	uint8_t x180 = 2U;
	static volatile int32_t t18 = -38429075;

	t18 = (x177-(x178*(x179*x180)));

	if (t18 != 2147479837) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x183 = 608000;
	static uint64_t x184 = UINT64_MAX;
	uint64_t t19 = 423278LLU;

	t19 = (x181-(x182*(x183*x184)));

	if (t19 != 8584351999LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x189 = 1438073U;
	volatile uint64_t x190 = 33983LLU;
	int8_t x191 = INT8_MAX;
	int8_t x192 = 46;
	uint64_t t20 = 20005892370328LLU;

	t20 = (x189-(x190*(x191*x192)));

	if (t20 != 18446744073512461003LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x195 = -1918915LL;
	int8_t x196 = INT8_MIN;
	int64_t t21 = 73LL;

	t21 = (x193-(x194*(x195*x196)));

	if (t21 != 245621119LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x197 = 11U;
	int16_t x198 = 1360;
	uint64_t x199 = 2002158909083890533LLU;
	int64_t x200 = INT64_MIN;

	t22 = (x197-(x198*(x199*x200)));

	if (t22 != 11LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x205 = 8429773160176322325LLU;
	volatile int8_t x206 = INT8_MAX;
	int32_t x207 = 2753;
	static int8_t x208 = INT8_MAX;
	static volatile uint64_t t23 = 93639613LLU;

	t23 = (x205-(x206*(x207*x208)));

	if (t23 != 8429773160131919188LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x209 = INT64_MIN;
	uint16_t x212 = 8028U;
	uint64_t t24 = 85993863817434LLU;

	t24 = (x209-(x210*(x211*x212)));

	if (t24 != 1169322495307821848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x219 = -6078740536LL;
	int64_t t25 = 745513442988054035LL;

	t25 = (x217-(x218*(x219*x220)));

	if (t25 != 62975751953215LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x233 = 0;
	int8_t x235 = -1;
	uint64_t x236 = UINT64_MAX;

	t26 = (x233-(x234*(x235*x236)));

	if (t26 != 18446744073702957484LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	int32_t x244 = 9;
	static int32_t t27 = 244832;

	t27 = (x241-(x242*(x243*x244)));

	if (t27 != -897) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x254 = 23;
	int16_t x255 = -60;
	static volatile int32_t t28 = 1288;

	t28 = (x253-(x254*(x255*x256)));

	if (t28 != -176385) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x261 = INT64_MIN;
	volatile uint64_t x262 = 775584383377047768LLU;
	static uint64_t x263 = 38505LLU;
	static uint64_t x264 = 34852080617023883LLU;
	static volatile uint64_t t29 = 52LLU;

	t29 = (x261-(x262*(x263*x264)));

	if (t29 != 14911704544583540088LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x266 = 2U;
	int32_t x267 = -1;
	static volatile int8_t x268 = -1;

	t30 = (x265-(x266*(x267*x268)));

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x269 = INT64_MIN;
	uint64_t x270 = 8146143295LLU;
	static uint32_t x271 = 3163U;

	t31 = (x269-(x270*(x271*x272)));

	if (t31 != 11973749664419840000LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x273 = INT32_MIN;
	static int8_t x274 = INT8_MAX;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 0U;
	volatile uint32_t t32 = 1U;

	t32 = (x273-(x274*(x275*x276)));

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x283 = UINT64_MAX;
	volatile int64_t x284 = INT64_MIN;
	uint64_t t33 = 62629319LLU;

	t33 = (x281-(x282*(x283*x284)));

	if (t33 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	volatile uint64_t x288 = 793904335136071LLU;
	volatile uint64_t t34 = 47389952144361454LLU;

	t34 = (x285-(x286*(x287*x288)));

	if (t34 != 10857686120381022207LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x297 = 2449U;
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MAX;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t35 = 105U;

	t35 = (x297-(x298*(x299*x300)));

	if (t35 != 3221260689U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x301 = INT8_MIN;
	static volatile uint64_t x303 = UINT64_MAX;
	static volatile int64_t x304 = INT64_MIN;
	uint64_t t36 = 1981LLU;

	t36 = (x301-(x302*(x303*x304)));

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x313 = -13878;
	int16_t x314 = INT16_MAX;
	int64_t x315 = -1561285109LL;
	uint8_t x316 = 57U;
	volatile int64_t t37 = -14LL;

	t37 = (x313-(x314*(x315*x316)));

	if (t37 != 2916041862482493LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x318 = INT16_MIN;

	t38 = (x317-(x318*(x319*x320)));

	if (t38 != 11557083220742635494LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x322 = 75U;
	uint64_t x323 = 109275010303732LLU;
	volatile uint64_t t39 = 11298LLU;

	t39 = (x321-(x322*(x323*x324)));

	if (t39 != 17405899600566504316LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x327 = 2U;
	int64_t x328 = -1LL;
	volatile int64_t t40 = 61160364669LL;

	t40 = (x325-(x326*(x327*x328)));

	if (t40 != -9223372036854775646LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x329 = INT8_MAX;
	static volatile uint16_t x330 = 13U;
	int16_t x331 = INT16_MIN;
	volatile uint32_t x332 = 744976220U;
	volatile uint32_t t41 = 105U;

	t41 = (x329-(x330*(x331*x332)));

	if (t41 != 1406533759U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x334 = -9;
	volatile int32_t t42 = -6798737;

	t42 = (x333-(x334*(x335*x336)));

	if (t42 != 1944) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x337 = 30860378LLU;
	int64_t x338 = -1LL;
	volatile int8_t x339 = INT8_MIN;
	static int16_t x340 = -1;
	volatile uint64_t t43 = 1514954894277537217LLU;

	t43 = (x337-(x338*(x339*x340)));

	if (t43 != 30860506LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x341 = 1;
	volatile uint32_t x342 = 966742U;
	uint8_t x343 = 12U;
	volatile uint32_t t44 = 590503U;

	t44 = (x341-(x342*(x343*x344)));

	if (t44 != 4225361873U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x349 = 246450U;
	uint64_t x350 = 10285910347LLU;
	volatile int16_t x351 = INT16_MIN;
	static int16_t x352 = INT16_MIN;

	t45 = (x349-(x350*(x351*x352)));

	if (t45 != 7402331936221545138LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x353 = 27984U;
	volatile int8_t x354 = -3;
	uint32_t t46 = 1823966U;

	t46 = (x353-(x354*(x355*x356)));

	if (t46 != 27984U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	int16_t x359 = -1;
	static uint64_t t47 = 274540475819051LLU;

	t47 = (x357-(x358*(x359*x360)));

	if (t47 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x361 = 210588;
	uint32_t x362 = 0U;
	int32_t x363 = -1;
	static uint32_t x364 = 29U;
	volatile uint32_t t48 = 235251U;

	t48 = (x361-(x362*(x363*x364)));

	if (t48 != 210588U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = 3;
	int64_t x371 = -1LL;
	static uint64_t t49 = 42623705095782699LLU;

	t49 = (x369-(x370*(x371*x372)));

	if (t49 != 35340957LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x377 = 1LL;
	int32_t x378 = 49268796;
	uint8_t x379 = 11U;
	uint32_t x380 = 14U;
	int64_t t50 = 86831199112138831LL;

	t50 = (x377-(x378*(x379*x380)));

	if (t50 != -3292427287LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x381 = 30U;
	int8_t x384 = -1;
	volatile int32_t t51 = 3;

	t51 = (x381-(x382*(x383*x384)));

	if (t51 != -12720) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	int16_t x392 = -5974;
	static uint32_t t52 = 446167U;

	t52 = (x389-(x390*(x391*x392)));

	if (t52 != 4099217110U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x398 = UINT64_MAX;
	static volatile uint16_t x399 = 1232U;
	static int16_t x400 = INT16_MIN;
	volatile uint64_t t53 = 21180041LLU;

	t53 = (x397-(x398*(x399*x400)));

	if (t53 != 18446744073669181325LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = -458;
	int64_t x407 = 3429485605314LL;
	uint64_t x408 = 53939LLU;
	uint64_t t54 = 2797888034684411096LLU;

	t54 = (x405-(x406*(x407*x408)));

	if (t54 != 1711876690091603196LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MAX;
	int8_t x412 = INT8_MAX;
	volatile int64_t t55 = 544486499385580LL;

	t55 = (x409-(x410*(x411*x412)));

	if (t55 != 9223372032559824640LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = INT8_MAX;
	static int32_t x427 = -1;
	int16_t x428 = -2408;
	int32_t t56 = -4891394;

	t56 = (x425-(x426*(x427*x428)));

	if (t56 != -305944) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x430 = -1;
	int8_t x432 = INT8_MIN;
	uint64_t t57 = 1LLU;

	t57 = (x429-(x430*(x431*x432)));

	if (t57 != 18446469582766022931LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x433 = 1U;
	int64_t x434 = INT64_MAX;
	uint64_t x436 = 27527LLU;
	uint64_t t58 = 92911LLU;

	t58 = (x433-(x434*(x435*x436)));

	if (t58 != 9223372036854748282LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x437 = 13529;
	int32_t x438 = -1;
	int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t59 = 1957;

	t59 = (x437-(x438*(x439*x440)));

	if (t59 != -2727) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x441 = INT16_MIN;
	int16_t x442 = INT16_MIN;
	uint16_t x444 = 1335U;
	int32_t t60 = -2;

	t60 = (x441-(x442*(x443*x444)));

	if (t60 != 43712512) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x446 = UINT16_MAX;
	volatile uint64_t x447 = 277912LLU;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t61 = 1217597209504452LLU;

	t61 = (x445-(x446*(x447*x448)));

	if (t61 != 2218551904911261695LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x461 = -3735LL;
	static int16_t x462 = INT16_MAX;
	int32_t x463 = 1404;
	int64_t x464 = -2213026LL;
	int64_t t62 = -189708635779LL;

	t62 = (x461-(x462*(x463*x464)));

	if (t62 != 101809969006833LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x469 = 7963758LL;
	int16_t x470 = INT16_MIN;
	static volatile int8_t x471 = -1;
	int64_t x472 = -182LL;
	int64_t t63 = -22502LL;

	t63 = (x469-(x470*(x471*x472)));

	if (t63 != 13927534LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x489 = INT16_MIN;
	volatile uint8_t x490 = 1U;
	uint8_t x492 = 74U;
	static volatile uint32_t t64 = 202402011U;

	t64 = (x489-(x490*(x491*x492)));

	if (t64 != 4273785254U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x497 = UINT64_MAX;
	int16_t x498 = INT16_MIN;
	static uint16_t x499 = 506U;
	static int8_t x500 = INT8_MIN;
	static uint64_t t65 = 1773291980377869LLU;

	t65 = (x497-(x498*(x499*x500)));

	if (t65 != 18446744071587233791LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x501 = INT8_MIN;
	uint64_t x502 = UINT64_MAX;
	int8_t x503 = INT8_MIN;
	volatile uint64_t t66 = 112083204976686LLU;

	t66 = (x501-(x502*(x503*x504)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x505 = INT32_MIN;
	int16_t x506 = 5471;
	int16_t x507 = -2;
	static uint32_t x508 = 3U;
	uint32_t t67 = 998U;

	t67 = (x505-(x506*(x507*x508)));

	if (t67 != 2147516474U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x509 = 12237062612LLU;
	uint16_t x511 = 60U;
	volatile uint64_t x512 = 1557LLU;
	volatile uint64_t t68 = 567LLU;

	t68 = (x509-(x510*(x511*x512)));

	if (t68 != 12249020372LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x513 = 1U;
	int64_t x514 = -9LL;
	int64_t t69 = 26113078047904696LL;

	t69 = (x513-(x514*(x515*x516)));

	if (t69 != 38654704513LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x517 = -276396046LL;
	uint16_t x518 = 40U;
	static int8_t x519 = -41;

	t70 = (x517-(x518*(x519*x520)));

	if (t70 != 1176778076216805794LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x521 = INT8_MIN;
	int32_t x522 = -2;
	int16_t x523 = -1;
	volatile uint16_t x524 = 3U;
	int32_t t71 = -7260025;

	t71 = (x521-(x522*(x523*x524)));

	if (t71 != -134) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x527 = 1U;
	int8_t x528 = INT8_MAX;
	volatile uint32_t t72 = 15U;

	t72 = (x525-(x526*(x527*x528)));

	if (t72 != 16258U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x529 = INT8_MIN;
	int64_t x530 = INT64_MAX;
	uint64_t x531 = 14524892663649LLU;
	volatile uint64_t x532 = 0LLU;
	volatile uint64_t t73 = 61599LLU;

	t73 = (x529-(x530*(x531*x532)));

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x533 = UINT64_MAX;
	static volatile int16_t x534 = INT16_MIN;
	int64_t x535 = 2993333376986LL;
	static int32_t x536 = -1;
	static uint64_t t74 = 1497688877LLU;

	t74 = (x533-(x534*(x535*x536)));

	if (t74 != 18348658525612474367LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x541 = 53794621LLU;
	int8_t x542 = INT8_MIN;
	int32_t x543 = -1;
	int8_t x544 = 6;

	t75 = (x541-(x542*(x543*x544)));

	if (t75 != 53793853LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x545 = -1;
	static int8_t x546 = INT8_MIN;
	int16_t x547 = -28;
	int8_t x548 = INT8_MIN;
	volatile int32_t t76 = -797194;

	t76 = (x545-(x546*(x547*x548)));

	if (t76 != 458751) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x549 = UINT32_MAX;
	int8_t x550 = INT8_MIN;
	uint16_t x551 = UINT16_MAX;
	int8_t x552 = INT8_MAX;
	volatile uint32_t t77 = 350419U;

	t77 = (x549-(x550*(x551*x552)));

	if (t77 != 1065336959U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x557 = 8577U;
	int8_t x558 = 54;
	volatile int32_t x559 = 239407;
	static volatile uint64_t x560 = 14993651499LLU;
	uint64_t t78 = 390968LLU;

	t78 = (x557-(x558*(x559*x560)));

	if (t78 != 18252906476990821171LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x563 = INT16_MAX;
	uint64_t x564 = 191363879LLU;
	volatile uint64_t t79 = 13724LLU;

	t79 = (x561-(x562*(x563*x564)));

	if (t79 != 10088693780746847810LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x565 = INT32_MAX;
	int8_t x567 = -1;
	static int16_t x568 = 3;
	volatile int64_t t80 = 67282463442134289LL;

	t80 = (x565-(x566*(x567*x568)));

	if (t80 != 2147483644LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x569 = INT64_MIN;
	static volatile uint64_t x570 = 42335650263LLU;
	uint64_t t81 = 29LLU;

	t81 = (x569-(x570*(x571*x572)));

	if (t81 != 4857979464207054396LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x574 = INT32_MIN;
	volatile uint64_t x575 = 32397609LLU;
	int16_t x576 = INT16_MAX;
	static volatile uint64_t t82 = 885831318179338LLU;

	t82 = (x573-(x574*(x575*x576)));

	if (t82 != 10759965287148158127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x577 = -1LL;
	uint32_t x578 = UINT32_MAX;
	uint64_t x579 = 511LLU;
	uint8_t x580 = 77U;
	uint64_t t83 = 664295LLU;

	t83 = (x577-(x578*(x579*x580)));

	if (t83 != 18446575079631395250LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x581 = 74954002743855614LLU;
	static int64_t x582 = -1LL;
	int32_t x583 = -1;
	uint8_t x584 = 0U;
	uint64_t t84 = 100606120376745002LLU;

	t84 = (x581-(x582*(x583*x584)));

	if (t84 != 74954002743855614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x585 = -1LL;
	static volatile int16_t x586 = -1;
	uint64_t x588 = 1882LLU;

	t85 = (x585-(x586*(x587*x588)));

	if (t85 != 61667493LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x589 = INT64_MAX;
	int64_t x590 = INT64_MAX;
	static uint16_t x591 = 0U;

	t86 = (x589-(x590*(x591*x592)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x597 = -1;
	volatile uint32_t x599 = 5U;
	volatile uint32_t t87 = 110771U;

	t87 = (x597-(x598*(x599*x600)));

	if (t87 != 4274388991U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x601 = UINT64_MAX;
	uint64_t x602 = 11308215183247894LLU;
	int16_t x603 = INT16_MIN;
	static int8_t x604 = -1;
	volatile uint64_t t88 = 169144509862342LLU;

	t88 = (x601-(x602*(x603*x604)));

	if (t88 != 16834030423233593343LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x609 = UINT32_MAX;
	int16_t x610 = -49;
	uint64_t x611 = 999627591823936971LLU;
	int16_t x612 = -9;
	volatile uint64_t t89 = 257553380LLU;

	t89 = (x609-(x610*(x611*x612)));

	if (t89 != 1886089778968001868LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x614 = 1U;
	static int8_t x615 = -1;
	static volatile int16_t x616 = INT16_MAX;
	int64_t t90 = -26001095011382LL;

	t90 = (x613-(x614*(x615*x616)));

	if (t90 != 32770LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x621 = INT16_MIN;
	int8_t x623 = 57;
	int8_t x624 = INT8_MAX;
	static volatile int32_t t91 = 10;

	t91 = (x621-(x622*(x623*x624)));

	if (t91 != -17124047) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x637 = 843LLU;
	volatile int8_t x638 = INT8_MAX;
	static int16_t x639 = 14;
	int8_t x640 = 2;
	volatile uint64_t t92 = 16LLU;

	t92 = (x637-(x638*(x639*x640)));

	if (t92 != 18446744073709548903LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x645 = 1;
	int64_t x646 = 255172LL;
	int64_t x647 = -1874LL;
	int8_t x648 = -14;
	static int64_t t93 = 1003640448140LL;

	t93 = (x645-(x646*(x647*x648)));

	if (t93 != -6694692591LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x649 = -1LL;
	int32_t x650 = INT32_MAX;
	uint32_t x651 = UINT32_MAX;
	volatile int32_t x652 = 30701455;

	t94 = (x649-(x650*(x651*x652)));

	if (t94 != -2178185104LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x654 = INT64_MIN;
	uint64_t x656 = 2729615592940285025LLU;
	uint64_t t95 = 83LLU;

	t95 = (x653-(x654*(x655*x656)));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x661 = 195743610U;
	int8_t x662 = INT8_MIN;
	int64_t x663 = -509367LL;
	uint32_t x664 = 1618706002U;
	int64_t t96 = 7937LL;

	t96 = (x661-(x662*(x663*x664)));

	if (t96 != -105537973579710342LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x665 = 0;
	uint32_t x666 = 19076U;
	int64_t x667 = 544715858LL;
	int8_t x668 = INT8_MAX;
	volatile int64_t t97 = 2446890187603259LL;

	t97 = (x665-(x666*(x667*x668)));

	if (t97 != -1319656962815416LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x677 = -1;
	int32_t x678 = INT32_MAX;
	static uint16_t x679 = 0U;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x677-(x678*(x679*x680)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x686 = 210U;
	uint8_t x687 = 15U;
	volatile int32_t x688 = 14;

	t99 = (x685-(x686*(x687*x688)));

	if (t99 != 4294923451U) { NG(); } else { ; }
	
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

