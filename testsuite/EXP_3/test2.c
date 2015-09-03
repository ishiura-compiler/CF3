#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
static int64_t x22 = 3405414LL;
volatile int64_t t3 = 983LL;
int8_t x25 = -1;
volatile int8_t x27 = 0;
uint64_t x35 = UINT64_MAX;
volatile int16_t x36 = -1;
int8_t x44 = 1;
uint8_t x51 = 3U;
volatile int16_t x52 = -26;
int16_t x55 = INT16_MIN;
static volatile uint8_t x65 = 1U;
static int64_t x68 = -1LL;
volatile uint32_t x93 = 91582U;
uint32_t x94 = 4260357U;
volatile uint64_t t13 = 1340114175195347164LLU;
uint64_t t14 = 81850849756977987LLU;
static int32_t x105 = INT32_MIN;
int16_t x106 = 0;
int32_t x112 = INT32_MIN;
int16_t x114 = INT16_MAX;
uint16_t x131 = UINT16_MAX;
uint64_t x132 = 7896578452219531LLU;
uint64_t t21 = 8145805009459950554LLU;
int64_t t22 = -3431971LL;
int16_t x147 = -24;
volatile int16_t x148 = 2;
static uint64_t x149 = UINT64_MAX;
static int8_t x150 = INT8_MAX;
int64_t x151 = -2377366054969LL;
static uint64_t t24 = 7737LLU;
int64_t x155 = INT64_MIN;
uint64_t t26 = 7932995727271LLU;
int16_t x166 = INT16_MAX;
static int8_t x167 = -1;
volatile int32_t t28 = -9482;
uint64_t t31 = 115533513LLU;
uint16_t x188 = 66U;
volatile int8_t x201 = INT8_MIN;
volatile uint64_t x209 = 0LLU;
static uint64_t t37 = 2494717LLU;
uint32_t x222 = UINT32_MAX;
int32_t x223 = 85817;
uint16_t x238 = 0U;
volatile uint32_t t40 = 2964227U;
int8_t x242 = -1;
int32_t t42 = 4462;
int16_t x249 = INT16_MAX;
int8_t x252 = 3;
static int8_t x254 = INT8_MIN;
int32_t x258 = 212956;
int32_t t45 = 966022;
int8_t x275 = -1;
static volatile int64_t x276 = 0LL;
static volatile int64_t t49 = 3545989739952457LL;
uint64_t t52 = 78970075320015387LLU;
int64_t x303 = INT64_MIN;
uint8_t x310 = 20U;
volatile uint32_t x313 = 486437U;
int64_t x319 = 2119666100629LL;
uint64_t x324 = 343350942886LLU;
uint16_t x330 = 228U;
static int32_t x346 = INT32_MIN;
static int8_t x347 = -1;
static volatile uint32_t t62 = 15U;
uint8_t x354 = 0U;
int64_t x355 = -332149719756LL;
uint64_t t65 = 360164101751025LLU;
int64_t x376 = -1LL;
volatile int64_t t67 = 0LL;
static uint64_t x383 = UINT64_MAX;
static uint8_t x393 = 15U;
uint8_t x398 = 4U;
int32_t x409 = -1;
volatile int64_t x410 = -1LL;
static volatile uint64_t t75 = 16860321980925LLU;
static int64_t x429 = 44312677LL;
int64_t t77 = 4037LL;
static int64_t x435 = -1LL;
static int16_t x436 = -1;
uint64_t t78 = 265674076949LLU;
static volatile uint64_t t79 = 6906179326916649LLU;
uint8_t x446 = UINT8_MAX;
int64_t x448 = -1LL;
uint8_t x450 = 1U;
int32_t x465 = 135224;
int64_t t85 = -61938297742LL;
int64_t x471 = INT64_MIN;
static int32_t t87 = -374;
static uint32_t x483 = UINT32_MAX;
volatile int32_t x485 = 2;
int8_t x493 = INT8_MIN;
volatile int8_t x496 = -20;
uint64_t t90 = 1289453460970759831LLU;
static volatile int8_t x503 = -1;
static int16_t x504 = INT16_MIN;
int32_t x509 = INT32_MIN;
static volatile uint64_t t93 = 4450951803469478LLU;
static uint8_t x514 = UINT8_MAX;
int8_t x515 = 1;
static int16_t x525 = INT16_MIN;
int32_t x527 = -1;
static int64_t x529 = INT64_MAX;
volatile uint32_t x531 = UINT32_MAX;
uint8_t x532 = UINT8_MAX;
volatile int64_t t99 = -706510LL;


void f0(void) {
	volatile int32_t x1 = 894;
	static uint8_t x2 = UINT8_MAX;
	uint64_t x3 = 129126180770796161LLU;
	uint8_t x4 = 4U;
	static volatile uint64_t t0 = 126353LLU;

	t0 = ((x1+x2)-(x3+x4));

	if (t0 != 18317617892938756600LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MAX;
	int16_t x7 = -829;
	static int8_t x8 = 30;
	int32_t t1 = 631953496;

	t1 = ((x5+x6)-(x7+x8));

	if (t1 != 33693) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	static uint64_t x10 = 7259257540108293890LLU;
	static int32_t x11 = INT32_MIN;
	int8_t x12 = 12;
	volatile uint64_t t2 = 1338LLU;

	t2 = ((x9+x10)-(x11+x12));

	if (t2 != 7259257542255777398LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int32_t x23 = INT32_MIN;
	volatile uint16_t x24 = 908U;

	t3 = ((x21+x22)-(x23+x24));

	if (t3 != 2150888409LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x26 = 117U;
	int32_t x28 = INT32_MAX;
	int32_t t4 = -1;

	t4 = ((x25+x26)-(x27+x28));

	if (t4 != -2147483531) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 916817456LL;
	int64_t x34 = 369119781264600LL;
	uint64_t t5 = 767974LLU;

	t5 = ((x33+x34)-(x35+x36));

	if (t5 != 369120698082058LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = -330;
	int16_t x42 = INT16_MIN;
	static int16_t x43 = INT16_MAX;
	static volatile int32_t t6 = 168399868;

	t6 = ((x41+x42)-(x43+x44));

	if (t6 != -65866) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -1;
	int16_t x46 = -29;
	int8_t x47 = -1;
	int64_t x48 = -13377574595361500LL;
	int64_t t7 = 93499722863LL;

	t7 = ((x45+x46)-(x47+x48));

	if (t7 != 13377574595361471LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x49 = -1LL;
	uint16_t x50 = 744U;
	volatile int64_t t8 = 37941158169351LL;

	t8 = ((x49+x50)-(x51+x52));

	if (t8 != 766LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -977578933872523069LL;
	volatile uint64_t x54 = 4019566703LLU;
	uint32_t x56 = 106U;
	uint64_t t9 = 642650590985722LLU;

	t9 = ((x53+x54)-(x55+x56));

	if (t9 != 17469165139561660616LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x61 = 0;
	int64_t x62 = -11394987LL;
	static uint8_t x63 = 1U;
	static uint8_t x64 = UINT8_MAX;
	int64_t t10 = 442436127458535LL;

	t10 = ((x61+x62)-(x63+x64));

	if (t10 != -11395243LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	volatile uint64_t t11 = 2156640420290461267LLU;

	t11 = ((x65+x66)-(x67+x68));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = INT16_MAX;
	static int16_t x90 = -1;
	int64_t x91 = 254587LL;
	uint8_t x92 = 1U;
	int64_t t12 = -1LL;

	t12 = ((x89+x90)-(x91+x92));

	if (t12 != -221822LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x95 = 0;
	static uint64_t x96 = 15LLU;

	t13 = ((x93+x94)-(x95+x96));

	if (t13 != 4351924LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = -1;
	volatile uint64_t x98 = 10424LLU;
	int64_t x99 = -1LL;
	int32_t x100 = -186873642;

	t14 = ((x97+x98)-(x99+x100));

	if (t14 != 186884066LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x101 = INT32_MAX;
	static int32_t x102 = INT32_MIN;
	int64_t x103 = 3845444089174591LL;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t15 = -10312765404LL;

	t15 = ((x101+x102)-(x103+x104));

	if (t15 != -3845441941690944LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MIN;
	uint32_t t16 = 247261U;

	t16 = ((x105+x106)-(x107+x108));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x109 = INT8_MIN;
	static volatile int8_t x110 = -3;
	uint32_t x111 = UINT32_MAX;
	volatile uint32_t t17 = 5U;

	t17 = ((x109+x110)-(x111+x112));

	if (t17 != 2147483518U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	static volatile int8_t x116 = INT8_MAX;
	int32_t t18 = 14616;

	t18 = ((x113+x114)-(x115+x116));

	if (t18 != 32640) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = -1;
	int32_t x118 = INT32_MAX;
	int16_t x119 = INT16_MIN;
	static uint16_t x120 = UINT16_MAX;
	int32_t t19 = 237;

	t19 = ((x117+x118)-(x119+x120));

	if (t19 != 2147450879) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x125 = 6599197U;
	volatile uint16_t x126 = 216U;
	volatile uint64_t x127 = 9142172387837LLU;
	volatile int16_t x128 = INT16_MIN;
	uint64_t t20 = 1381400470731682LLU;

	t20 = ((x125+x126)-(x127+x128));

	if (t20 != 18446734931543795960LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x129 = 62008148LLU;
	uint16_t x130 = UINT16_MAX;

	t21 = ((x129+x130)-(x131+x132));

	if (t21 != 18438847495319340233LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x137 = -1;
	static volatile int64_t x138 = -106950LL;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;

	t22 = ((x137+x138)-(x139+x140));

	if (t22 != 2147376442LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x145 = -2615986;
	uint64_t x146 = 1070552LLU;
	uint64_t t23 = 2238805410721032313LLU;

	t23 = ((x145+x146)-(x147+x148));

	if (t23 != 18446744073708006204LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x152 = UINT32_MAX;

	t24 = ((x149+x150)-(x151+x152));

	if (t24 != 2373071087800LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x153 = 109U;
	volatile int16_t x154 = INT16_MIN;
	int16_t x156 = 10;
	volatile int64_t t25 = -30804120646LL;

	t25 = ((x153+x154)-(x155+x156));

	if (t25 != 9223372036854743139LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x157 = -166;
	uint32_t x158 = 354158717U;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = 1LLU;

	t26 = ((x157+x158)-(x159+x160));

	if (t26 != 354191318LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x161 = -1;
	int32_t x162 = 1;
	int32_t x163 = -185;
	uint32_t x164 = 4789235U;
	uint32_t t27 = 425649U;

	t27 = ((x161+x162)-(x163+x164));

	if (t27 != 4290178246U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x165 = -36;
	static int8_t x168 = -16;

	t28 = ((x165+x166)-(x167+x168));

	if (t28 != 32748) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int8_t x170 = 2;
	volatile int32_t x171 = -27995875;
	int16_t x172 = -13;
	static volatile int32_t t29 = 50105505;

	t29 = ((x169+x170)-(x171+x172));

	if (t29 != 27996145) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = 57612549;
	int16_t x175 = 3806;
	volatile uint16_t x176 = UINT16_MAX;
	static volatile uint64_t t30 = 69754637573712LLU;

	t30 = ((x173+x174)-(x175+x176));

	if (t30 != 57543207LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x177 = 1458665LLU;
	int32_t x178 = INT32_MAX;
	volatile int8_t x179 = 33;
	int16_t x180 = INT16_MIN;

	t31 = ((x177+x178)-(x179+x180));

	if (t31 != 2148975047LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x181 = UINT8_MAX;
	uint16_t x182 = 3U;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = 0;
	volatile int32_t t32 = 0;

	t32 = ((x181+x182)-(x183+x184));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MAX;
	volatile int16_t x186 = INT16_MAX;
	static int8_t x187 = INT8_MAX;
	int32_t t33 = 122663;

	t33 = ((x185+x186)-(x187+x188));

	if (t33 != 65341) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = 16596331U;
	int16_t x194 = INT16_MAX;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 1547LLU;
	uint64_t t34 = 8163678626414LLU;

	t34 = ((x193+x194)-(x195+x196));

	if (t34 != 16627679LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = -1;
	int64_t x198 = -12LL;
	int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MIN;
	int64_t t35 = -66162LL;

	t35 = ((x197+x198)-(x199+x200));

	if (t35 != 9223372034707292148LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x202 = -65;
	int32_t x203 = INT32_MAX;
	int64_t x204 = -1LL;
	static int64_t t36 = 500497637577709LL;

	t36 = ((x201+x202)-(x203+x204));

	if (t36 != -2147483839LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x210 = -1LL;
	uint32_t x211 = 2588314U;
	int32_t x212 = -13425035;

	t37 = ((x209+x210)-(x211+x212));

	if (t37 != 18446744069425421040LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x221 = -15;
	static int64_t x224 = -1LL;
	volatile int64_t t38 = -55587779723LL;

	t38 = ((x221+x222)-(x223+x224));

	if (t38 != 4294881464LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x233 = 211U;
	int32_t x234 = 13865120;
	int16_t x235 = 1;
	volatile int64_t x236 = -1LL;
	static volatile int64_t t39 = 0LL;

	t39 = ((x233+x234)-(x235+x236));

	if (t39 != 13865331LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x237 = 2U;
	volatile int8_t x239 = -1;
	volatile uint16_t x240 = UINT16_MAX;

	t40 = ((x237+x238)-(x239+x240));

	if (t40 != 4294901764U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x243 = UINT16_MAX;
	static volatile int32_t x244 = INT32_MIN;
	volatile int32_t t41 = -6498353;

	t41 = ((x241+x242)-(x243+x244));

	if (t41 != 2147418239) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x245 = 273U;
	int8_t x246 = INT8_MIN;
	volatile int16_t x247 = INT16_MAX;
	volatile int32_t x248 = 6;

	t42 = ((x245+x246)-(x247+x248));

	if (t42 != -32628) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x250 = 7U;
	static uint64_t x251 = 1992624412518200LLU;
	volatile uint64_t t43 = 553400518729353678LLU;

	t43 = ((x249+x250)-(x251+x252));

	if (t43 != 18444751449297066187LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x253 = UINT64_MAX;
	uint8_t x255 = 5U;
	int16_t x256 = -3;
	static uint64_t t44 = 0LLU;

	t44 = ((x253+x254)-(x255+x256));

	if (t44 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x259 = INT16_MAX;
	int32_t x260 = -4;

	t45 = ((x257+x258)-(x259+x260));

	if (t45 != 180065) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x261 = 14661U;
	volatile uint32_t x262 = UINT32_MAX;
	int8_t x263 = -1;
	static volatile int16_t x264 = -650;
	uint32_t t46 = 2037435084U;

	t46 = ((x261+x262)-(x263+x264));

	if (t46 != 15311U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x265 = INT8_MIN;
	volatile uint16_t x266 = 2640U;
	int64_t x267 = INT64_MAX;
	volatile uint64_t x268 = 5649708LLU;
	volatile uint64_t t47 = 271LLU;

	t47 = ((x265+x266)-(x267+x268));

	if (t47 != 9223372036849128613LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = 1U;
	int32_t x274 = -1;
	volatile int64_t t48 = 65835429066768904LL;

	t48 = ((x273+x274)-(x275+x276));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x277 = 16184LL;
	int64_t x278 = -7834386813LL;
	int8_t x279 = INT8_MIN;
	int16_t x280 = -321;

	t49 = ((x277+x278)-(x279+x280));

	if (t49 != -7834370180LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x285 = 106408LLU;
	int8_t x286 = INT8_MAX;
	int32_t x287 = 3;
	volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t50 = 111347444LLU;

	t50 = ((x285+x286)-(x287+x288));

	if (t50 != 106660LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x289 = UINT16_MAX;
	int16_t x290 = INT16_MIN;
	static int64_t x291 = -1LL;
	int8_t x292 = INT8_MIN;
	int64_t t51 = 1061661645LL;

	t51 = ((x289+x290)-(x291+x292));

	if (t51 != 32896LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x293 = UINT8_MAX;
	static volatile int8_t x294 = INT8_MIN;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t x296 = 1633062;

	t52 = ((x293+x294)-(x295+x296));

	if (t52 != 18446744073707918682LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x297 = 190821LLU;
	int16_t x298 = -1;
	static uint64_t x299 = UINT64_MAX;
	volatile int64_t x300 = INT64_MIN;
	uint64_t t53 = 261919299147LLU;

	t53 = ((x297+x298)-(x299+x300));

	if (t53 != 9223372036854966629LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x301 = 11582639LLU;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x304 = 8U;
	uint64_t t54 = 8591LLU;

	t54 = ((x301+x302)-(x303+x304));

	if (t54 != 9223372036866325671LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int64_t x306 = -225LL;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = 14U;
	uint64_t t55 = 5879620LLU;

	t55 = ((x305+x306)-(x307+x308));

	if (t55 != 18446744073709518609LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x309 = -1;
	uint64_t x311 = 10793914611LLU;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t56 = 184LLU;

	t56 = ((x309+x310)-(x311+x312));

	if (t56 != 18446744065063120672LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x314 = -1;
	static int16_t x315 = INT16_MIN;
	volatile int64_t x316 = 11738LL;
	static int64_t t57 = -2690556619016676585LL;

	t57 = ((x313+x314)-(x315+x316));

	if (t57 != 507466LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x317 = 124U;
	int64_t x318 = -1LL;
	int8_t x320 = INT8_MIN;
	int64_t t58 = 0LL;

	t58 = ((x317+x318)-(x319+x320));

	if (t58 != -2119666100378LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x321 = INT16_MAX;
	static int16_t x322 = 9;
	volatile int8_t x323 = -5;
	volatile uint64_t t59 = 30927456506956LLU;

	t59 = ((x321+x322)-(x323+x324));

	if (t59 != 18446743730358641511LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = -1;
	volatile uint32_t x331 = 33680U;
	uint32_t x332 = 0U;
	static volatile uint32_t t60 = 2458539U;

	t60 = ((x329+x330)-(x331+x332));

	if (t60 != 4294933843U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x341 = 7453U;
	static int8_t x342 = -27;
	static int32_t x343 = 172567;
	uint8_t x344 = UINT8_MAX;
	volatile uint32_t t61 = 15885355U;

	t61 = ((x341+x342)-(x343+x344));

	if (t61 != 4294801900U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x345 = UINT32_MAX;
	volatile uint8_t x348 = UINT8_MAX;

	t62 = ((x345+x346)-(x347+x348));

	if (t62 != 2147483393U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int8_t x356 = INT8_MAX;
	uint64_t t63 = 16063805LLU;

	t63 = ((x353+x354)-(x355+x356));

	if (t63 != 332149719628LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x357 = INT8_MAX;
	static int8_t x358 = INT8_MIN;
	volatile int16_t x359 = INT16_MAX;
	int8_t x360 = -1;
	volatile int32_t t64 = 71581363;

	t64 = ((x357+x358)-(x359+x360));

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x365 = INT32_MAX;
	uint64_t x366 = UINT64_MAX;
	static uint16_t x367 = UINT16_MAX;
	int8_t x368 = INT8_MIN;

	t65 = ((x365+x366)-(x367+x368));

	if (t65 != 2147418239LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x369 = -1LL;
	uint8_t x370 = 0U;
	static int8_t x371 = -1;
	static volatile int64_t x372 = -1LL;
	volatile int64_t t66 = 1LL;

	t66 = ((x369+x370)-(x371+x372));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int32_t x374 = INT32_MAX;
	int16_t x375 = INT16_MAX;

	t67 = ((x373+x374)-(x375+x376));

	if (t67 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x377 = 121660348110LL;
	uint16_t x378 = 396U;
	int64_t x379 = -1LL;
	int64_t x380 = 1LL;
	int64_t t68 = -1783722LL;

	t68 = ((x377+x378)-(x379+x380));

	if (t68 != 121660348506LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = 301;
	static volatile uint8_t x382 = 88U;
	uint8_t x384 = UINT8_MAX;
	static uint64_t t69 = 1LLU;

	t69 = ((x381+x382)-(x383+x384));

	if (t69 != 135LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x385 = UINT32_MAX;
	static int32_t x386 = 979729;
	uint64_t x387 = 9087466527032757436LLU;
	static uint64_t x388 = 156487LLU;
	uint64_t t70 = 1220406LLU;

	t70 = ((x385+x386)-(x387+x388));

	if (t70 != 9359277546677617421LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x389 = 111092275074LLU;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -32310647970866238LL;
	int16_t x392 = INT16_MAX;
	static uint64_t t71 = 5621534755310LLU;

	t71 = ((x389+x390)-(x391+x392));

	if (t71 != 32310759063075777LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x394 = INT16_MIN;
	volatile uint16_t x395 = 399U;
	volatile int8_t x396 = -1;
	static volatile int32_t t72 = 333455303;

	t72 = ((x393+x394)-(x395+x396));

	if (t72 != -33151) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = INT32_MIN;
	static int64_t x399 = INT64_MIN;
	int32_t x400 = 949762;
	int64_t t73 = 44250455943169071LL;

	t73 = ((x397+x398)-(x399+x400));

	if (t73 != 9223372034706342402LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x411 = -1;
	int32_t x412 = -7451508;
	volatile int64_t t74 = -147273LL;

	t74 = ((x409+x410)-(x411+x412));

	if (t74 != 7451507LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int32_t x414 = -1;
	volatile int32_t x415 = -71337;
	static uint16_t x416 = UINT16_MAX;

	t75 = ((x413+x414)-(x415+x416));

	if (t75 != 5800LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x421 = INT64_MAX;
	int8_t x422 = -1;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = 1514U;
	int64_t t76 = -3710LL;

	t76 = ((x421+x422)-(x423+x424));

	if (t76 != 9223372034707290644LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x430 = INT64_MIN;
	int32_t x431 = -1;
	int16_t x432 = INT16_MAX;

	t77 = ((x429+x430)-(x431+x432));

	if (t77 != -9223372036810495897LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x433 = INT8_MIN;
	uint64_t x434 = 310962063582LLU;

	t78 = ((x433+x434)-(x435+x436));

	if (t78 != 310962063456LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x441 = 0LLU;
	static int32_t x442 = -12;
	static int16_t x443 = -1;
	volatile uint32_t x444 = 46518748U;

	t79 = ((x441+x442)-(x443+x444));

	if (t79 != 18446744073663032857LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = 6109;
	int32_t x447 = INT32_MIN;
	int64_t t80 = 0LL;

	t80 = ((x445+x446)-(x447+x448));

	if (t80 != 2147490013LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x449 = INT32_MIN;
	uint64_t x451 = 5740688LLU;
	static int8_t x452 = -1;
	uint64_t t81 = 3850336541026LLU;

	t81 = ((x449+x450)-(x451+x452));

	if (t81 != 18446744071556327282LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x453 = UINT8_MAX;
	static uint32_t x454 = 0U;
	int8_t x455 = 1;
	uint16_t x456 = 4511U;
	uint32_t t82 = 22917U;

	t82 = ((x453+x454)-(x455+x456));

	if (t82 != 4294963039U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x457 = 97248510750LLU;
	int32_t x458 = 876991;
	volatile int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	volatile uint64_t t83 = 18817070098669846LLU;

	t83 = ((x457+x458)-(x459+x460));

	if (t83 != 97249420637LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x461 = INT8_MIN;
	uint16_t x462 = UINT16_MAX;
	int8_t x463 = 14;
	uint64_t x464 = 6816LLU;
	volatile uint64_t t84 = 12762728852LLU;

	t84 = ((x461+x462)-(x463+x464));

	if (t84 != 58577LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x466 = INT16_MIN;
	int64_t x467 = 20536LL;
	int16_t x468 = 518;

	t85 = ((x465+x466)-(x467+x468));

	if (t85 != 81402LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x469 = INT16_MIN;
	int32_t x470 = -682897;
	uint64_t x472 = 298354LLU;
	uint64_t t86 = 117312982300403006LLU;

	t86 = ((x469+x470)-(x471+x472));

	if (t86 != 9223372036853761789LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x473 = -1;
	volatile int16_t x474 = INT16_MIN;
	static int32_t x475 = INT32_MIN;
	static uint16_t x476 = 8553U;

	t87 = ((x473+x474)-(x475+x476));

	if (t87 != 2147442326) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = -1;
	int32_t x482 = -242638604;
	int16_t x484 = INT16_MIN;
	static volatile uint32_t t88 = 22053231U;

	t88 = ((x481+x482)-(x483+x484));

	if (t88 != 4052361460U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x486 = INT16_MIN;
	uint16_t x487 = 3553U;
	int16_t x488 = INT16_MIN;
	static int32_t t89 = -205550;

	t89 = ((x485+x486)-(x487+x488));

	if (t89 != -3551) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x494 = 5488819989LL;
	uint64_t x495 = 373319457552763LLU;

	t90 = ((x493+x494)-(x495+x496));

	if (t90 != 18446370759740818734LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x501 = INT16_MAX;
	int8_t x502 = INT8_MIN;
	int32_t t91 = 1;

	t91 = ((x501+x502)-(x503+x504));

	if (t91 != 65408) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x505 = UINT64_MAX;
	static volatile uint8_t x506 = UINT8_MAX;
	int16_t x507 = INT16_MIN;
	volatile int16_t x508 = INT16_MIN;
	uint64_t t92 = 5587614LLU;

	t92 = ((x505+x506)-(x507+x508));

	if (t92 != 65790LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x510 = INT32_MAX;
	uint32_t x511 = 3U;
	uint64_t x512 = UINT64_MAX;

	t93 = ((x509+x510)-(x511+x512));

	if (t93 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x513 = INT32_MIN;
	int16_t x516 = 1;
	volatile int32_t t94 = 1;

	t94 = ((x513+x514)-(x515+x516));

	if (t94 != -2147483395) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x517 = 12U;
	uint16_t x518 = 1U;
	uint64_t x519 = UINT64_MAX;
	volatile int16_t x520 = INT16_MIN;
	volatile uint64_t t95 = 58LLU;

	t95 = ((x517+x518)-(x519+x520));

	if (t95 != 32782LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x521 = 1;
	int16_t x522 = -124;
	static uint16_t x523 = 22U;
	int32_t x524 = -4;
	volatile int32_t t96 = 242;

	t96 = ((x521+x522)-(x523+x524));

	if (t96 != -141) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x526 = 2;
	uint32_t x528 = UINT32_MAX;
	uint32_t t97 = 1U;

	t97 = ((x525+x526)-(x527+x528));

	if (t97 != 4294934532U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x530 = -58;
	int64_t t98 = 342371LL;

	t98 = ((x529+x530)-(x531+x532));

	if (t98 != 9223372036854775495LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x533 = 626980LL;
	int64_t x534 = INT64_MIN;
	static volatile int64_t x535 = -1LL;
	int16_t x536 = INT16_MIN;

	t99 = ((x533+x534)-(x535+x536));

	if (t99 != -9223372036854116059LL) { NG(); } else { ; }
	
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

