#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MAX;
uint64_t x10 = 129556046063895241LLU;
uint8_t x15 = UINT8_MAX;
int16_t x17 = 8199;
static int8_t x18 = INT8_MIN;
uint16_t x20 = 3125U;
int16_t x29 = INT16_MAX;
int16_t x31 = -5;
static uint16_t x38 = UINT16_MAX;
int16_t x40 = INT16_MIN;
volatile int8_t x44 = INT8_MAX;
uint64_t t9 = 131124215981LLU;
int64_t x45 = 6601LL;
int32_t x51 = -1;
volatile int8_t x53 = -1;
static int16_t x57 = INT16_MIN;
uint32_t x60 = 32419476U;
int64_t x69 = INT64_MAX;
int8_t x71 = INT8_MIN;
volatile int64_t x72 = -136898277LL;
static int64_t t14 = 125135LL;
int8_t x82 = -35;
int32_t t16 = 6789925;
int64_t x96 = -1LL;
int64_t x97 = -1LL;
int8_t x100 = 2;
volatile uint64_t t20 = 119LLU;
int8_t x110 = INT8_MIN;
uint16_t x112 = 2U;
int16_t x117 = -1;
static volatile int64_t x121 = INT64_MIN;
int16_t x128 = 61;
int64_t t25 = 597115LL;
uint16_t x152 = 98U;
static int32_t x153 = INT32_MIN;
int16_t x156 = INT16_MAX;
int32_t x166 = 60477;
uint16_t x171 = 27U;
int64_t x173 = -15371821LL;
static uint32_t x180 = UINT32_MAX;
volatile uint8_t x181 = 17U;
int32_t t38 = 229;
volatile int8_t x213 = INT8_MIN;
int8_t x216 = INT8_MIN;
static uint64_t x218 = UINT64_MAX;
uint32_t x223 = 16U;
volatile int64_t x235 = 89275100436670LL;
int16_t x242 = 666;
static int16_t x252 = INT16_MAX;
volatile int32_t x273 = INT32_MIN;
uint32_t x284 = UINT32_MAX;
int64_t t52 = -594LL;
int8_t x287 = INT8_MIN;
uint64_t t54 = 98238347181749843LLU;
uint32_t x297 = UINT32_MAX;
uint64_t x298 = UINT64_MAX;
volatile uint64_t t56 = 83119970567LLU;
int32_t x316 = 81098;
volatile int16_t x317 = INT16_MIN;
static int8_t x318 = INT8_MIN;
uint16_t x320 = UINT16_MAX;
int64_t x329 = 151202257573277831LL;
uint64_t x334 = 7870820551238080707LLU;
static volatile uint64_t t63 = 29197LLU;
int8_t x343 = -1;
uint16_t x345 = 114U;
volatile int32_t x349 = -853717614;
int64_t x355 = INT64_MIN;
static int64_t x356 = INT64_MAX;
int64_t t68 = INT64_MIN;
uint32_t x371 = 484U;
int32_t x391 = INT32_MIN;
uint64_t x399 = UINT64_MAX;
volatile uint64_t x410 = 33131865092LLU;
uint32_t x422 = UINT32_MAX;
uint16_t x424 = UINT16_MAX;
volatile uint64_t t79 = 2008684LLU;
int16_t x430 = INT16_MIN;
int64_t x431 = INT64_MAX;
volatile uint32_t x432 = 7617142U;
volatile int32_t x439 = INT32_MIN;
uint32_t t83 = 1401873U;
int32_t x455 = 832;
volatile int64_t t84 = -5997583551057LL;
int16_t x457 = INT16_MIN;
int64_t t85 = 677552879841LL;
uint32_t x471 = UINT32_MAX;
static int32_t x490 = -1;
uint32_t t90 = 6U;
static int64_t x496 = 767425593256059LL;
uint32_t x498 = UINT32_MAX;
static uint8_t x499 = UINT8_MAX;
uint64_t x516 = UINT64_MAX;
uint8_t x527 = 11U;
volatile int16_t x529 = INT16_MIN;
int16_t x537 = -1;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = -855;
	uint16_t x3 = 296U;
	static int32_t x4 = INT32_MIN;

	t0 = ((x1%(x2&x3))^x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	volatile int8_t x8 = INT8_MIN;
	uint32_t t1 = 10274919U;

	t1 = ((x5%(x6&x7))^x8);

	if (t1 != 4294967169U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 1868U;
	volatile uint32_t x11 = 510647145U;
	uint32_t x12 = 117U;
	uint64_t t2 = 1357747599075895720LLU;

	t2 = ((x9%(x10&x11))^x12);

	if (t2 != 1849LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 260735LL;
	static uint16_t x14 = 3U;
	uint8_t x16 = UINT8_MAX;
	static int64_t t3 = 71678591153206645LL;

	t3 = ((x13%(x14&x15))^x16);

	if (t3 != 253LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = -1;
	volatile int32_t t4 = 12138862;

	t4 = ((x17%(x18&x19))^x20);

	if (t4 != 3122) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = -1;
	static uint64_t x23 = 599LLU;
	uint64_t x24 = 466LLU;
	uint64_t t5 = 14217037417938LLU;

	t5 = ((x21%(x22&x23))^x24);

	if (t5 != 242LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MIN;
	volatile int16_t x27 = INT16_MIN;
	volatile int16_t x28 = 0;
	volatile int32_t t6 = 28726831;

	t6 = ((x25%(x26&x27))^x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 5U;
	static volatile int8_t x32 = -1;
	static uint32_t t7 = UINT32_MAX;

	t7 = ((x29%(x30&x31))^x32);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	uint16_t x39 = 75U;
	static volatile int32_t t8 = -1;

	t8 = ((x37%(x38&x39))^x40);

	if (t8 != -32746) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 0U;
	uint64_t x42 = 60374921386243095LLU;
	int32_t x43 = INT32_MIN;

	t9 = ((x41%(x42&x43))^x44);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = 8072;
	uint8_t x47 = UINT8_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	volatile int64_t t10 = 5817839661677LL;

	t10 = ((x45%(x46&x47))^x48);

	if (t10 != 65462LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x52 = INT32_MAX;
	volatile int64_t t11 = 7154125859LL;

	t11 = ((x49%(x50&x51))^x52);

	if (t11 != -2147450881LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x54 = 381638U;
	int16_t x55 = 13594;
	static int64_t x56 = -1LL;
	volatile int64_t t12 = -39246183256LL;

	t12 = ((x53%(x54&x55))^x56);

	if (t12 != -1024LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x58 = 3U;
	volatile int16_t x59 = -1;
	static volatile uint32_t t13 = 5U;

	t13 = ((x57%(x58&x59))^x60);

	if (t13 != 4262547818U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x70 = INT64_MAX;

	t14 = ((x69%(x70&x71))^x72);

	if (t14 != -136898204LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = -2;
	volatile uint32_t x74 = 25048815U;
	volatile int32_t x75 = INT32_MAX;
	volatile uint64_t x76 = 4208375868LLU;
	uint64_t t15 = 992505653182LLU;

	t15 = ((x73%(x74&x75))^x76);

	if (t15 != 4201117285LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x81 = -1;
	volatile int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = 30U;

	t16 = ((x81%(x82&x83))^x84);

	if (t16 != -31) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 214975973U;
	uint8_t x90 = 1U;
	volatile uint64_t x91 = UINT64_MAX;
	int64_t x92 = 509937LL;
	volatile uint64_t t17 = 14820735LLU;

	t17 = ((x89%(x90&x91))^x92);

	if (t17 != 509937LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x93 = 55;
	int32_t x94 = -467;
	uint32_t x95 = UINT32_MAX;
	volatile int64_t t18 = -443127657838901990LL;

	t18 = ((x93%(x94&x95))^x96);

	if (t18 != -56LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x98 = 7;
	volatile int32_t x99 = -1;
	static int64_t t19 = 31689659LL;

	t19 = ((x97%(x98&x99))^x100);

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 1054715LLU;
	int16_t x102 = -1;
	int16_t x103 = -1;
	uint16_t x104 = 3459U;

	t20 = ((x101%(x102&x103))^x104);

	if (t20 != 1055352LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = -40LL;
	int16_t x111 = -1;
	int64_t t21 = -27821393933019LL;

	t21 = ((x109%(x110&x111))^x112);

	if (t21 != -38LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = -2;
	static volatile int32_t x114 = INT32_MIN;
	static volatile uint64_t x115 = UINT64_MAX;
	int8_t x116 = -2;
	uint64_t t22 = 25599640872093465LLU;

	t22 = ((x113%(x114&x115))^x116);

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x118 = -1;
	uint16_t x119 = 39U;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t23 = INT32_MIN;

	t23 = ((x117%(x118&x119))^x120);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x122 = -3033;
	uint32_t x123 = 3756U;
	int8_t x124 = 0;
	int64_t t24 = -11114078292LL;

	t24 = ((x121%(x122&x123))^x124);

	if (t24 != -988LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = 54511287;
	volatile int64_t x127 = -1LL;

	t25 = ((x125%(x126&x127))^x128);

	if (t25 != 34942716LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x133 = INT16_MIN;
	static uint64_t x134 = 11689901116843LLU;
	static int16_t x135 = INT16_MAX;
	int32_t x136 = -1;
	volatile uint64_t t26 = 2713336781093933LLU;

	t26 = ((x133%(x134&x135))^x136);

	if (t26 != 18446744073709531809LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x145 = 126U;
	int8_t x146 = INT8_MAX;
	uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 332U;
	volatile uint32_t t27 = 2104405369U;

	t27 = ((x145%(x146&x147))^x148);

	if (t27 != 306U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = -1;
	uint8_t x151 = 1U;
	int32_t t28 = 3958586;

	t28 = ((x149%(x150&x151))^x152);

	if (t28 != 98) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x154 = -50323295470546176LL;
	uint32_t x155 = 4890U;
	volatile int64_t t29 = 8427LL;

	t29 = ((x153%(x154&x155))^x156);

	if (t29 != -29441LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = 7;
	static volatile int16_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 19269U;
	volatile uint64_t t30 = 2016766882LLU;

	t30 = ((x157%(x158&x159))^x160);

	if (t30 != 19266LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x161 = 5U;
	volatile uint16_t x162 = UINT16_MAX;
	volatile int8_t x163 = -43;
	volatile int8_t x164 = -8;
	int32_t t31 = -37;

	t31 = ((x161%(x162&x163))^x164);

	if (t31 != -3) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MIN;
	volatile int16_t x167 = -11990;
	static int8_t x168 = INT8_MIN;
	int32_t t32 = -16;

	t32 = ((x165%(x166&x167))^x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x169 = 3;
	int8_t x170 = INT8_MAX;
	volatile int64_t x172 = INT64_MIN;
	static int64_t t33 = 192507527234955509LL;

	t33 = ((x169%(x170&x171))^x172);

	if (t33 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MIN;
	int64_t t34 = -413181853147586725LL;

	t34 = ((x173%(x174&x175))^x176);

	if (t34 != 2147447017LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x177 = 8743477LL;
	int8_t x178 = INT8_MAX;
	int64_t x179 = -1LL;
	volatile int64_t t35 = 232478522561LL;

	t35 = ((x177%(x178&x179))^x180);

	if (t35 != 4294967260LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 15734U;
	int32_t t36 = -4094;

	t36 = ((x181%(x182&x183))^x184);

	if (t36 != 15719) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x185 = -30;
	int8_t x186 = -22;
	static volatile uint16_t x187 = 3154U;
	int64_t x188 = -1LL;
	volatile int64_t t37 = -2845210619243647388LL;

	t37 = ((x185%(x186&x187))^x188);

	if (t37 != 29LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = -1;
	int16_t x200 = INT16_MIN;

	t38 = ((x197%(x198&x199))^x200);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x205 = UINT32_MAX;
	uint8_t x206 = 4U;
	int64_t x207 = -52695722314LL;
	int32_t x208 = INT32_MAX;
	int64_t t39 = -31325LL;

	t39 = ((x205%(x206&x207))^x208);

	if (t39 != 2147483644LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x209 = UINT8_MAX;
	uint64_t x210 = 168877473565661260LLU;
	int16_t x211 = INT16_MAX;
	volatile uint8_t x212 = 0U;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x209%(x210&x211))^x212);

	if (t40 != 255LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x214 = 211;
	static volatile int8_t x215 = INT8_MIN;
	int32_t t41 = 9;

	t41 = ((x213%(x214&x215))^x216);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = INT8_MIN;
	volatile int8_t x219 = 1;
	int64_t x220 = INT64_MIN;
	uint64_t t42 = 0LLU;

	t42 = ((x217%(x218&x219))^x220);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x221 = UINT32_MAX;
	uint64_t x222 = UINT64_MAX;
	int32_t x224 = INT32_MIN;
	static uint64_t t43 = 24104860LLU;

	t43 = ((x221%(x222&x223))^x224);

	if (t43 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x233 = 223U;
	uint64_t x234 = 722208226LLU;
	int64_t x236 = 61LL;
	uint64_t t44 = 257220794553LLU;

	t44 = ((x233%(x234&x235))^x236);

	if (t44 != 226LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = INT64_MIN;
	volatile int64_t t45 = -6LL;

	t45 = ((x237%(x238&x239))^x240);

	if (t45 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x241 = UINT8_MAX;
	uint32_t x243 = 12U;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t46 = 715434U;

	t46 = ((x241%(x242&x243))^x244);

	if (t46 != 2147483655U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = -1;
	volatile int32_t x251 = -1;
	int64_t t47 = 1095154LL;

	t47 = ((x249%(x250&x251))^x252);

	if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	static int32_t x256 = 0;
	volatile int32_t t48 = -64953669;

	t48 = ((x253%(x254&x255))^x256);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x257 = 100U;
	uint32_t x258 = 226U;
	volatile uint32_t x259 = UINT32_MAX;
	uint8_t x260 = 3U;
	volatile uint32_t t49 = 4034U;

	t49 = ((x257%(x258&x259))^x260);

	if (t49 != 103U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = -1LL;
	volatile int32_t x266 = -290999;
	static int64_t x267 = 4037809834LL;
	int64_t x268 = 120852651736LL;
	int64_t t50 = 20235645041955431LL;

	t50 = ((x265%(x266&x267))^x268);

	if (t50 != -120852651737LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x274 = -1;
	int16_t x275 = INT16_MAX;
	int64_t x276 = 1866164LL;
	volatile int64_t t51 = -1140LL;

	t51 = ((x273%(x274&x275))^x276);

	if (t51 != -1866166LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x281 = 1U;
	int64_t x282 = INT64_MAX;
	static uint8_t x283 = 40U;

	t52 = ((x281%(x282&x283))^x284);

	if (t52 != 4294967294LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x285 = 1U;
	uint64_t x286 = UINT64_MAX;
	uint16_t x288 = 20901U;
	uint64_t t53 = 9306872710LLU;

	t53 = ((x285%(x286&x287))^x288);

	if (t53 != 20900LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x289 = 2692U;
	static volatile uint64_t x290 = 5375200933881LLU;
	static int32_t x291 = -1;
	uint32_t x292 = 3459132U;

	t54 = ((x289%(x290&x291))^x292);

	if (t54 != 3457720LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = -1LL;
	volatile int16_t x294 = -2;
	int8_t x295 = -1;
	int16_t x296 = INT16_MIN;
	int64_t t55 = -30079405LL;

	t55 = ((x293%(x294&x295))^x296);

	if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;

	t56 = ((x297%(x298&x299))^x300);

	if (t56 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x305 = -3090069005771604LL;
	int32_t x306 = 28;
	int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MIN;
	volatile int64_t t57 = 319621225784111171LL;

	t57 = ((x305%(x306&x307))^x308);

	if (t57 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x313 = INT64_MIN;
	static int64_t x314 = -6LL;
	static uint32_t x315 = UINT32_MAX;
	static int64_t t58 = 0LL;

	t58 = ((x313%(x314&x315))^x316);

	if (t58 != -81116LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x319 = INT32_MIN;
	int32_t t59 = 24272841;

	t59 = ((x317%(x318&x319))^x320);

	if (t59 != -32769) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x321 = -1LL;
	static int8_t x322 = -1;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int64_t t60 = 1LL;

	t60 = ((x321%(x322&x323))^x324);

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x325 = -1;
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MAX;
	volatile uint8_t x328 = 1U;
	volatile int32_t t61 = 187302867;

	t61 = ((x325%(x326&x327))^x328);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x330 = UINT8_MAX;
	static volatile uint16_t x331 = UINT16_MAX;
	volatile int8_t x332 = INT8_MAX;
	static int64_t t62 = -31598LL;

	t62 = ((x329%(x330&x331))^x332);

	if (t62 != 192LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x333 = UINT64_MAX;
	static volatile uint16_t x335 = 7316U;
	static volatile int32_t x336 = -1073661;

	t63 = ((x333%(x334&x335))^x336);

	if (t63 != 18446744073708474364LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = INT8_MAX;
	int16_t x339 = -6025;
	int8_t x340 = -1;
	static volatile uint32_t t64 = 376340084U;

	t64 = ((x337%(x338&x339))^x340);

	if (t64 != 4294967278U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x341 = INT64_MAX;
	static uint8_t x342 = 80U;
	uint16_t x344 = 2258U;
	int64_t t65 = 36435393LL;

	t65 = ((x341%(x342&x343))^x344);

	if (t65 != 2301LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x346 = -1;
	volatile int64_t x347 = INT64_MIN;
	int32_t x348 = INT32_MAX;
	static volatile int64_t t66 = 3997LL;

	t66 = ((x345%(x346&x347))^x348);

	if (t66 != 2147483533LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x350 = UINT8_MAX;
	static volatile uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	uint64_t t67 = 195407LLU;

	t67 = ((x349%(x350&x351))^x352);

	if (t67 != 18446744073709519050LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = -1;
	volatile int64_t x354 = -1LL;

	t68 = ((x353%(x354&x355))^x356);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x369 = 48U;
	static uint64_t x370 = 22LLU;
	volatile uint32_t x372 = 484676564U;
	uint64_t t69 = 64LLU;

	t69 = ((x369%(x370&x371))^x372);

	if (t69 != 484676564LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x373 = 1068U;
	uint32_t x374 = 76U;
	int64_t x375 = INT64_MAX;
	static uint32_t x376 = UINT32_MAX;
	volatile int64_t t70 = -242LL;

	t70 = ((x373%(x374&x375))^x376);

	if (t70 != 4294967291LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	uint8_t x383 = UINT8_MAX;
	volatile int32_t x384 = -1;
	volatile int32_t t71 = 47518778;

	t71 = ((x381%(x382&x383))^x384);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x385 = 16U;
	volatile int64_t x386 = -189226703697625LL;
	int16_t x387 = INT16_MAX;
	int8_t x388 = 55;
	volatile int64_t t72 = -1148853597310LL;

	t72 = ((x385%(x386&x387))^x388);

	if (t72 != 39LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x389 = 205U;
	static int16_t x390 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t73 = 839048;

	t73 = ((x389%(x390&x391))^x392);

	if (t73 != -32563) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = 57576917003199243LLU;
	int16_t x395 = -1;
	int32_t x396 = -1;
	uint64_t t74 = 58086910204LLU;

	t74 = ((x393%(x394&x395))^x396);

	if (t74 != 18424613441023757887LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x397 = 129U;
	int32_t x398 = 3;
	int32_t x400 = INT32_MIN;
	static uint64_t t75 = 8176472595320653LLU;

	t75 = ((x397%(x398&x399))^x400);

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x401 = INT8_MIN;
	int16_t x402 = 141;
	static uint64_t x403 = UINT64_MAX;
	volatile int8_t x404 = INT8_MIN;
	uint64_t t76 = 92LLU;

	t76 = ((x401%(x402&x403))^x404);

	if (t76 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x405 = 48439580;
	int64_t x406 = -190089026LL;
	volatile uint8_t x407 = 91U;
	static int8_t x408 = 2;
	static volatile int64_t t77 = 366875671LL;

	t77 = ((x405%(x406&x407))^x408);

	if (t77 != 22LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x409 = UINT16_MAX;
	int64_t x411 = INT64_MAX;
	uint8_t x412 = UINT8_MAX;
	static uint64_t t78 = 407907735782676LLU;

	t78 = ((x409%(x410&x411))^x412);

	if (t78 != 65280LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x421 = 31286LLU;
	uint32_t x423 = 912166254U;

	t79 = ((x421%(x422&x423))^x424);

	if (t79 != 34249LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x425 = INT32_MAX;
	static int16_t x426 = INT16_MAX;
	int8_t x427 = -9;
	int8_t x428 = -1;
	int32_t t80 = 3;

	t80 = ((x425%(x426&x427))^x428);

	if (t80 != -162) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x429 = 205747558746127LL;
	volatile int64_t t81 = 0LL;

	t81 = ((x429%(x430&x431))^x432);

	if (t81 != 205747561640569LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x437 = 7U;
	int8_t x438 = -1;
	int32_t x440 = INT32_MIN;
	volatile int32_t t82 = 2;

	t82 = ((x437%(x438&x439))^x440);

	if (t82 != -2147483641) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = 996;
	static uint32_t x450 = UINT32_MAX;
	volatile int8_t x451 = INT8_MAX;
	int32_t x452 = -34658;

	t83 = ((x449%(x450&x451))^x452);

	if (t83 != 4294932725U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = INT32_MAX;
	int64_t x454 = -1LL;
	static int16_t x456 = -42;

	t84 = ((x453%(x454&x455))^x456);

	if (t84 != -87LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x458 = INT64_MIN;
	static volatile int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;

	t85 = ((x457%(x458&x459))^x460);

	if (t85 != 2147450880LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x461 = 1;
	uint64_t x462 = 8888941118686LLU;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = UINT8_MAX;
	volatile uint64_t t86 = 626801229014397348LLU;

	t86 = ((x461%(x462&x463))^x464);

	if (t86 != 254LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x469 = -1;
	uint32_t x470 = 9U;
	uint32_t x472 = 59834646U;
	static volatile uint32_t t87 = 34U;

	t87 = ((x469%(x470&x471))^x472);

	if (t87 != 59834645U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x477 = INT64_MIN;
	volatile uint8_t x478 = UINT8_MAX;
	uint32_t x479 = UINT32_MAX;
	static int64_t x480 = -1LL;
	volatile int64_t t88 = -16715382238857LL;

	t88 = ((x477%(x478&x479))^x480);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x485 = -1;
	volatile int16_t x486 = INT16_MIN;
	int8_t x487 = -1;
	int8_t x488 = INT8_MIN;
	int32_t t89 = -1055910458;

	t89 = ((x485%(x486&x487))^x488);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x489 = UINT8_MAX;
	uint16_t x491 = 324U;
	uint32_t x492 = 49931563U;

	t90 = ((x489%(x490&x491))^x492);

	if (t90 != 49931732U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = 1U;
	int8_t x494 = -20;
	static volatile int64_t x495 = INT64_MAX;
	volatile int64_t t91 = -42847142LL;

	t91 = ((x493%(x494&x495))^x496);

	if (t91 != 767425593256058LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x497 = 460U;
	int32_t x500 = -2659;
	static uint32_t t92 = 34U;

	t92 = ((x497%(x498&x499))^x500);

	if (t92 != 4294964560U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x509 = INT64_MIN;
	uint16_t x510 = UINT16_MAX;
	static uint16_t x511 = 1231U;
	volatile uint64_t x512 = 288092294199985LLU;
	static uint64_t t93 = 29049LLU;

	t93 = ((x509%(x510&x511))^x512);

	if (t93 != 18446455981415351551LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x513 = -1;
	uint32_t x514 = 7406771U;
	uint32_t x515 = 18532U;
	uint64_t t94 = 19243051742500884LLU;

	t94 = ((x513%(x514&x515))^x516);

	if (t94 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x525 = INT32_MAX;
	static int16_t x526 = INT16_MAX;
	int16_t x528 = -12;
	int32_t t95 = -317037;

	t95 = ((x525%(x526&x527))^x528);

	if (t95 != -11) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x530 = 1U;
	int64_t x531 = INT64_MAX;
	int16_t x532 = INT16_MAX;
	volatile int64_t t96 = -59501429013512LL;

	t96 = ((x529%(x530&x531))^x532);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x533 = INT32_MIN;
	int8_t x534 = -15;
	static int32_t x535 = -1;
	uint64_t x536 = 4648579376LLU;
	uint64_t t97 = 6565184778LLU;

	t97 = ((x533%(x534&x535))^x536);

	if (t97 != 18446744069060972232LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x538 = 55U;
	static int32_t x539 = -1;
	volatile int64_t x540 = -1862LL;
	volatile int64_t t98 = 4028652431425LL;

	t98 = ((x537%(x538&x539))^x540);

	if (t98 != 1861LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x541 = INT32_MIN;
	uint64_t x542 = 1666058765798030LLU;
	int8_t x543 = INT8_MIN;
	uint16_t x544 = UINT16_MAX;
	volatile uint64_t t99 = 129185515LLU;

	t99 = ((x541%(x542&x543))^x544);

	if (t99 != 141416646385663LLU) { NG(); } else { ; }
	
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

