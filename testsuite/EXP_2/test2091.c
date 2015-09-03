#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
int16_t x3 = 1443;
static volatile int8_t x4 = INT8_MAX;
static int32_t x14 = 1;
volatile uint8_t x30 = 6U;
volatile int8_t x31 = INT8_MIN;
static uint8_t x35 = 23U;
uint8_t x36 = 26U;
uint64_t t9 = 2663014112572653300LLU;
uint64_t t11 = 74395904341991715LLU;
volatile uint16_t x54 = 7973U;
int16_t x55 = -6;
int16_t x56 = -7751;
uint32_t x69 = 4550293U;
int16_t x73 = 0;
int32_t x75 = INT32_MIN;
int16_t x78 = INT16_MAX;
int16_t x81 = 6;
int64_t x83 = INT64_MAX;
int16_t x86 = -1;
uint32_t x91 = 738U;
volatile int64_t x99 = 5551LL;
volatile uint32_t x100 = 21U;
volatile int64_t t22 = 2802221040LL;
static uint64_t x101 = 1129328LLU;
static uint16_t x102 = 291U;
volatile int32_t x103 = -1;
uint64_t x111 = UINT64_MAX;
int64_t x116 = INT64_MIN;
int64_t t27 = -3994218793165228LL;
static uint16_t x122 = 82U;
int8_t x124 = 4;
uint16_t x127 = 1654U;
uint8_t x128 = 1U;
int8_t x139 = INT8_MIN;
int64_t x140 = 4066LL;
static uint32_t x143 = 96555U;
int8_t x144 = INT8_MAX;
int16_t x149 = -7;
int64_t x151 = INT64_MAX;
static int32_t x152 = INT32_MIN;
uint32_t x153 = 143977854U;
volatile int32_t x154 = INT32_MIN;
int64_t t36 = -2LL;
int64_t t37 = -2870362363578671445LL;
volatile uint64_t t38 = 728710LLU;
uint16_t x168 = 847U;
uint32_t x170 = 6533U;
int16_t x171 = INT16_MIN;
int64_t x175 = INT64_MIN;
static volatile int64_t x181 = INT64_MAX;
int8_t x186 = 23;
int64_t x191 = -1LL;
int32_t x192 = INT32_MAX;
static int64_t t46 = INT64_MIN;
volatile uint64_t t47 = 6278846632732376042LLU;
volatile int32_t x213 = -22;
int64_t x216 = INT64_MIN;
int16_t x218 = INT16_MIN;
uint64_t x220 = 121257567184684LLU;
int8_t x221 = -1;
int16_t x224 = -1;
volatile int64_t t52 = 556722080957LL;
static int8_t x225 = 17;
volatile uint64_t x234 = 230333660912012LLU;
uint16_t x235 = 18440U;
volatile int32_t x236 = INT32_MAX;
uint64_t t54 = 1LLU;
int32_t x238 = INT32_MAX;
volatile int32_t x245 = INT32_MAX;
int8_t x246 = INT8_MAX;
volatile int32_t t57 = 0;
uint32_t x249 = 2U;
int64_t x251 = -1LL;
volatile int32_t t60 = -480109;
volatile int8_t x262 = INT8_MAX;
uint16_t x270 = 1U;
uint64_t x279 = 73631396092LLU;
static int8_t x284 = -1;
int32_t x299 = INT32_MIN;
volatile uint64_t x311 = 55435LLU;
volatile int8_t x315 = -1;
static int64_t x324 = INT64_MIN;
int8_t x325 = -1;
volatile uint16_t x327 = UINT16_MAX;
int32_t t76 = -236;
int32_t x332 = INT32_MIN;
volatile int8_t x341 = -1;
static int64_t x342 = -1196044543238573139LL;
int16_t x345 = INT16_MIN;
uint8_t x347 = 1U;
int16_t x349 = INT16_MAX;
int8_t x352 = 5;
static int64_t x358 = 13278570763663LL;
int8_t x368 = INT8_MAX;
static volatile int32_t x370 = 11;
volatile int32_t x387 = -51008;
int16_t x388 = INT16_MIN;
uint8_t x389 = 50U;
int64_t x390 = INT64_MAX;
int64_t x391 = -164804230LL;
int8_t x400 = INT8_MIN;
int64_t x401 = INT64_MIN;
int32_t x409 = 33;
uint16_t x416 = UINT16_MAX;
uint8_t x418 = 44U;
uint64_t x419 = 274167188065676LLU;
static uint64_t x420 = 22784874LLU;


void f0(void) {
	uint64_t x2 = 501822939619913157LLU;
	volatile uint64_t t0 = 0LLU;

	t0 = ((x1%(x2^x3))&x4);

	if (t0 != 40LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 3U;
	volatile int8_t x10 = -1;
	volatile uint32_t x11 = 973173U;
	int32_t x12 = -1;
	volatile uint32_t t1 = 157U;

	t1 = ((x9%(x10^x11))&x12);

	if (t1 != 3U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -750;
	int16_t x15 = INT16_MIN;
	int16_t x16 = 798;
	volatile int32_t t2 = -179;

	t2 = ((x13%(x14^x15))&x16);

	if (t2 != 274) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 1036926238LLU;
	int64_t x18 = 1927958991LL;
	int32_t x19 = INT32_MIN;
	static uint32_t x20 = 1U;
	volatile uint64_t t3 = 113545060633LLU;

	t3 = ((x17%(x18^x19))&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	static uint32_t x22 = UINT32_MAX;
	static int16_t x23 = 1303;
	int32_t x24 = INT32_MAX;
	int64_t t4 = 833729LL;

	t4 = ((x21%(x22^x23))&x24);

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MAX;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = 83;
	int64_t x28 = INT64_MAX;
	uint64_t t5 = 1059656LLU;

	t5 = ((x25%(x26^x27))&x28);

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	uint64_t x32 = 55LLU;
	uint64_t t6 = 32937016426LLU;

	t6 = ((x29%(x30^x31))&x32);

	if (t6 != 55LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x33 = -7186;
	int8_t x34 = INT8_MIN;
	int32_t t7 = -12199948;

	t7 = ((x33%(x34^x35))&x36);

	if (t7 != 18) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	volatile int32_t x38 = -1;
	uint32_t x39 = 66942U;
	volatile int32_t x40 = INT32_MIN;
	volatile uint32_t t8 = 636539929U;

	t8 = ((x37%(x38^x39))&x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 14817U;
	uint64_t x42 = UINT64_MAX;
	uint16_t x43 = UINT16_MAX;
	volatile int8_t x44 = INT8_MAX;

	t9 = ((x41%(x42^x43))&x44);

	if (t9 != 97LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = 2;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = -43;
	int16_t x48 = 12;
	volatile int32_t t10 = -8625170;

	t10 = ((x45%(x46^x47))&x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = UINT64_MAX;
	uint64_t x51 = 2LLU;
	volatile int16_t x52 = INT16_MIN;

	t11 = ((x49%(x50^x51))&x52);

	if (t11 != 2147450880LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 2U;
	uint32_t t12 = 4261963U;

	t12 = ((x53%(x54^x55))&x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	int32_t x58 = INT32_MIN;
	static uint32_t x59 = 2U;
	int8_t x60 = INT8_MAX;
	volatile uint32_t t13 = 57966U;

	t13 = ((x57%(x58^x59))&x60);

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = -1;
	uint16_t x62 = 23U;
	static int32_t x63 = INT32_MIN;
	uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x61%(x62^x63))&x64);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 502;
	int16_t x66 = INT16_MAX;
	volatile int16_t x67 = INT16_MIN;
	static uint64_t x68 = 12934764LLU;
	volatile uint64_t t15 = 2287170LLU;

	t15 = ((x65%(x66^x67))&x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = -1;
	static volatile int8_t x71 = INT8_MAX;
	static volatile int32_t x72 = INT32_MIN;
	volatile uint32_t t16 = 502U;

	t16 = ((x69%(x70^x71))&x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x74 = UINT64_MAX;
	int32_t x76 = 1474278;
	uint64_t t17 = 2309942526010252842LLU;

	t17 = ((x73%(x74^x75))&x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = -1;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = INT64_MAX;
	volatile int64_t t18 = 541586LL;

	t18 = ((x77%(x78^x79))&x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = 42691LL;
	uint8_t x84 = 35U;
	static int64_t t19 = -382523215594272013LL;

	t19 = ((x81%(x82^x83))&x84);

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	static uint8_t x87 = UINT8_MAX;
	int64_t x88 = -572076LL;
	static int64_t t20 = -214387007LL;

	t20 = ((x85%(x86^x87))&x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	static uint8_t x90 = 13U;
	int32_t x92 = 3;
	volatile uint64_t t21 = 310915LLU;

	t21 = ((x89%(x90^x91))&x92);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 5097U;
	static volatile uint8_t x98 = UINT8_MAX;

	t22 = ((x97%(x98^x99))&x100);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x104 = 22U;
	uint64_t t23 = 1LLU;

	t23 = ((x101%(x102^x103))&x104);

	if (t23 != 16LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -1;
	static uint64_t x106 = 7441643452LLU;
	volatile int8_t x107 = INT8_MAX;
	uint32_t x108 = 22930303U;
	volatile uint64_t t24 = 469423443500852204LLU;

	t24 = ((x105%(x106^x107))&x108);

	if (t24 != 17949269LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int8_t x110 = 2;
	static int32_t x112 = -1;
	volatile uint64_t t25 = 681950219417LLU;

	t25 = ((x109%(x110^x111))&x112);

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 2020U;
	uint64_t x114 = 1260636075LLU;
	static uint16_t x115 = UINT16_MAX;
	volatile uint64_t t26 = 16107361LLU;

	t26 = ((x113%(x114^x115))&x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	int32_t x120 = 0;

	t27 = ((x117%(x118^x119))&x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x121 = 194U;
	volatile uint8_t x123 = 13U;
	static volatile int32_t t28 = -99;

	t28 = ((x121%(x122^x123))&x124);

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 2;
	volatile int8_t x126 = INT8_MIN;
	int32_t t29 = 30;

	t29 = ((x125%(x126^x127))&x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = INT8_MAX;
	static uint32_t x130 = UINT32_MAX;
	uint16_t x131 = 1332U;
	volatile int16_t x132 = -6018;
	uint32_t t30 = 272375U;

	t30 = ((x129%(x130^x131))&x132);

	if (t30 != 126U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 1;
	uint32_t x134 = 55U;
	uint64_t x135 = 21076LLU;
	uint64_t x136 = 604104654005829156LLU;
	uint64_t t31 = 290327804960LLU;

	t31 = ((x133%(x134^x135))&x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -14;
	uint8_t x138 = 24U;
	int64_t t32 = -4404LL;

	t32 = ((x137%(x138^x139))&x140);

	if (t32 != 4066LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MAX;
	uint64_t x142 = 16364740182398LLU;
	volatile uint64_t t33 = 11320LLU;

	t33 = ((x141%(x142^x143))&x144);

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = -1;
	static int64_t x146 = INT64_MIN;
	int32_t x147 = 23886156;
	int64_t x148 = -20256127LL;
	volatile int64_t t34 = -159782758516012948LL;

	t34 = ((x145%(x146^x147))&x148);

	if (t34 != -20256127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = INT32_MIN;
	int64_t t35 = -19LL;

	t35 = ((x149%(x150^x151))&x152);

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x155 = -2626202682998LL;
	static volatile uint32_t x156 = UINT32_MAX;

	t36 = ((x153%(x154^x155))&x156);

	if (t36 != 143977854LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MAX;
	static int64_t x159 = INT64_MIN;
	uint8_t x160 = 33U;

	t37 = ((x157%(x158^x159))&x160);

	if (t37 != 33LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MIN;
	static int16_t x162 = 1;
	uint64_t x163 = 3882206724920LLU;
	uint16_t x164 = UINT16_MAX;

	t38 = ((x161%(x162^x163))&x164);

	if (t38 != 10738LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 62U;
	volatile int16_t x166 = -1;
	int16_t x167 = -3;
	volatile int32_t t39 = -457;

	t39 = ((x165%(x166^x167))&x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -57;
	int32_t x172 = -10;
	uint32_t t40 = 503615U;

	t40 = ((x169%(x170^x171))&x172);

	if (t40 != 26178U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 694068U;
	int64_t x176 = 178LL;
	int64_t t41 = 0LL;

	t41 = ((x173%(x174^x175))&x176);

	if (t41 != 128LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x177 = 256875887867796LLU;
	static uint64_t x178 = 2LLU;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 4395;
	volatile uint64_t t42 = 13385562931LLU;

	t42 = ((x177%(x178^x179))&x180);

	if (t42 != 4352LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x182 = UINT16_MAX;
	int32_t x183 = 7970512;
	int64_t x184 = -262104881916LL;
	int64_t t43 = 1LL;

	t43 = ((x181%(x182^x183))&x184);

	if (t43 != 5275904LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	static volatile int64_t t44 = INT64_MIN;

	t44 = ((x185%(x186^x187))&x188);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1;
	int64_t x190 = -22469630185055LL;
	volatile int64_t t45 = -21710320LL;

	t45 = ((x189%(x190^x191))&x192);

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	int64_t x194 = INT64_MAX;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MIN;

	t46 = ((x193%(x194^x195))&x196);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 498723681082LLU;
	int64_t x198 = INT64_MIN;
	static int64_t x199 = INT64_MAX;
	static int8_t x200 = INT8_MAX;

	t47 = ((x197%(x198^x199))&x200);

	if (t47 != 58LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int64_t x203 = 50661LL;
	int32_t x204 = -90076;
	volatile int64_t t48 = -1585960715LL;

	t48 = ((x201%(x202^x203))&x204);

	if (t48 != -98304LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = 4216255470829LLU;
	volatile uint16_t x210 = 1U;
	int16_t x211 = INT16_MIN;
	static int8_t x212 = INT8_MIN;
	static uint64_t t49 = 1567155630891525LLU;

	t49 = ((x209%(x210^x211))&x212);

	if (t49 != 4216255470720LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x214 = INT32_MIN;
	int32_t x215 = -1;
	int64_t t50 = INT64_MIN;

	t50 = ((x213%(x214^x215))&x216);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -11;
	int8_t x219 = INT8_MIN;
	uint64_t t51 = 824229282814733LLU;

	t51 = ((x217%(x218^x219))&x220);

	if (t51 != 121257567184676LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x222 = -180058LL;
	int8_t x223 = 31;

	t52 = ((x221%(x222^x223))&x224);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x226 = INT16_MAX;
	uint32_t x227 = 6623053U;
	int8_t x228 = 2;
	volatile uint32_t t53 = 2280292U;

	t53 = ((x225%(x226^x227))&x228);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x233 = UINT32_MAX;

	t54 = ((x233%(x234^x235))&x236);

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -6035577309LL;
	static int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MAX;
	static int64_t t55 = -334LL;

	t55 = ((x237%(x238^x239))&x240);

	if (t55 != 35LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 24U;
	static volatile int8_t x242 = 60;
	uint32_t x243 = 3U;
	static uint16_t x244 = 476U;
	volatile uint32_t t56 = 1811574313U;

	t56 = ((x241%(x242^x243))&x244);

	if (t56 != 24U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x247 = INT16_MAX;
	int32_t x248 = 16243723;

	t57 = ((x245%(x246^x247))&x248);

	if (t57 != 11) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x250 = 5;
	int64_t x252 = INT64_MAX;
	int64_t t58 = 178981LL;

	t58 = ((x249%(x250^x251))&x252);

	if (t58 != 2LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = 995532770;
	static uint32_t x254 = 330727U;
	static volatile uint32_t x255 = 6618338U;
	volatile uint16_t x256 = UINT16_MAX;
	uint32_t t59 = 9U;

	t59 = ((x253%(x254^x255))&x256);

	if (t59 != 4059U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = 0;
	int32_t x258 = -229648;
	int32_t x259 = INT32_MAX;
	uint16_t x260 = UINT16_MAX;

	t60 = ((x257%(x258^x259))&x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	volatile uint64_t x264 = 18899130079724LLU;
	uint64_t t61 = 224345748710LLU;

	t61 = ((x261%(x262^x263))&x264);

	if (t61 != 18899130079616LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = 3U;
	int16_t x267 = -1;
	int16_t x268 = INT16_MAX;
	volatile int32_t t62 = -62025242;

	t62 = ((x265%(x266^x267))&x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x269 = INT64_MIN;
	static int64_t x271 = -3701150070219380LL;
	volatile int8_t x272 = -1;
	int64_t t63 = 106LL;

	t63 = ((x269%(x270^x271))&x272);

	if (t63 != -106061868083340LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 572;
	uint8_t x274 = 68U;
	int64_t x275 = 0LL;
	uint8_t x276 = UINT8_MAX;
	volatile int64_t t64 = 80008374117862LL;

	t64 = ((x273%(x274^x275))&x276);

	if (t64 != 28LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = INT32_MAX;
	volatile uint16_t x278 = 13064U;
	uint16_t x280 = UINT16_MAX;
	uint64_t t65 = 28LLU;

	t65 = ((x277%(x278^x279))&x280);

	if (t65 != 65535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 246847643412308LLU;
	uint64_t t66 = 2LLU;

	t66 = ((x281%(x282^x283))&x284);

	if (t66 != 156687925355012LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x285 = 276U;
	int16_t x286 = INT16_MAX;
	static int32_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile int32_t t67 = 28;

	t67 = ((x285%(x286^x287))&x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x289 = 2558243604491LL;
	int16_t x290 = -5360;
	static uint64_t x291 = 129603443359668902LLU;
	uint32_t x292 = 0U;
	uint64_t t68 = 5278420619352879401LLU;

	t68 = ((x289%(x290^x291))&x292);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = INT16_MIN;
	int32_t x295 = 433458;
	int16_t x296 = -1;
	volatile int32_t t69 = 6214326;

	t69 = ((x293%(x294^x295))&x296);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x297 = 49U;
	int8_t x298 = -1;
	uint16_t x300 = UINT16_MAX;
	int32_t t70 = -2310539;

	t70 = ((x297%(x298^x299))&x300);

	if (t70 != 49) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x305 = 0U;
	int8_t x306 = -25;
	static int32_t x307 = 31474;
	int64_t x308 = -26564370LL;
	volatile int64_t t71 = 276811361014LL;

	t71 = ((x305%(x306^x307))&x308);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 44;
	volatile int32_t x310 = 371117800;
	uint8_t x312 = 8U;
	static volatile uint64_t t72 = 148951LLU;

	t72 = ((x309%(x310^x311))&x312);

	if (t72 != 8LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = UINT16_MAX;
	static volatile uint64_t x314 = 10199838355208208LLU;
	static uint16_t x316 = UINT16_MAX;
	volatile uint64_t t73 = 3LLU;

	t73 = ((x313%(x314^x315))&x316);

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x317 = 10U;
	int32_t x318 = -14866557;
	int8_t x319 = 17;
	static int64_t x320 = -37324LL;
	int64_t t74 = -461LL;

	t74 = ((x317%(x318^x319))&x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	int16_t x323 = -1;
	volatile int64_t t75 = INT64_MIN;

	t75 = ((x321%(x322^x323))&x324);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x326 = INT16_MIN;
	uint8_t x328 = 13U;

	t76 = ((x325%(x326^x327))&x328);

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MAX;
	volatile uint16_t x330 = 63U;
	int32_t x331 = -2605;
	int32_t t77 = 177;

	t77 = ((x329%(x330^x331))&x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x333 = UINT32_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	uint32_t x335 = 24788U;
	uint32_t x336 = UINT32_MAX;
	uint32_t t78 = 26872460U;

	t78 = ((x333%(x334^x335))&x336);

	if (t78 != 29760U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = 18;
	int8_t x339 = INT8_MIN;
	int64_t x340 = -507197210137159115LL;
	int64_t t79 = 8LL;

	t79 = ((x337%(x338^x339))&x340);

	if (t79 != -507197210137159148LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x343 = 6392;
	uint8_t x344 = UINT8_MAX;
	volatile int64_t t80 = 15611095093538LL;

	t80 = ((x341%(x342^x343))&x344);

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x346 = INT8_MAX;
	volatile int64_t x348 = -10298019LL;
	int64_t t81 = -9LL;

	t81 = ((x345%(x346^x347))&x348);

	if (t81 != -10298024LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x350 = -1;
	int16_t x351 = INT16_MAX;
	static int32_t t82 = 5982;

	t82 = ((x349%(x350^x351))&x352);

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MAX;
	int64_t x355 = 771LL;
	static int32_t x356 = -7271;
	int64_t t83 = -2046646LL;

	t83 = ((x353%(x354^x355))&x356);

	if (t83 != 153LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x357 = INT64_MIN;
	static int8_t x359 = INT8_MAX;
	static uint64_t x360 = 388LLU;
	uint64_t t84 = 2727LLU;

	t84 = ((x357%(x358^x359))&x360);

	if (t84 != 256LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x361 = 1436LLU;
	int16_t x362 = -1;
	volatile int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	uint64_t t85 = 7749018373293093LLU;

	t85 = ((x361%(x362^x363))&x364);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x365 = UINT16_MAX;
	int32_t x366 = 76014990;
	uint16_t x367 = UINT16_MAX;
	volatile int32_t t86 = -326;

	t86 = ((x365%(x366^x367))&x368);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x371 = 17U;
	uint64_t x372 = 23252LLU;
	volatile uint64_t t87 = 506412060154LLU;

	t87 = ((x369%(x370^x371))&x372);

	if (t87 != 23232LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = INT32_MIN;
	volatile uint32_t x374 = 155438U;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	volatile uint32_t t88 = 140678943U;

	t88 = ((x373%(x374^x375))&x376);

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x377 = -1LL;
	volatile int64_t x378 = -1LL;
	volatile int64_t x379 = INT64_MIN;
	static uint16_t x380 = 31273U;
	volatile int64_t t89 = 2LL;

	t89 = ((x377%(x378^x379))&x380);

	if (t89 != 31273LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -12131;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -17LL;
	int32_t x384 = 2544146;
	int64_t t90 = -760LL;

	t90 = ((x381%(x382^x383))&x384);

	if (t90 != 2543632LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = -1;
	static int16_t x386 = -1989;
	int32_t t91 = -600;

	t91 = ((x385%(x386^x387))&x388);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x392 = UINT16_MAX;
	int64_t t92 = 14557433922LL;

	t92 = ((x389%(x390^x391))&x392);

	if (t92 != 50LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x394 = 58196;
	int8_t x395 = INT8_MIN;
	volatile int32_t x396 = -786661720;
	int32_t t93 = -15302;

	t93 = ((x393%(x394^x395))&x396);

	if (t93 != 7296) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x398 = -2914902;
	volatile int16_t x399 = INT16_MIN;
	uint64_t t94 = 205LLU;

	t94 = ((x397%(x398^x399))&x400);

	if (t94 != 712576LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x402 = 96U;
	static uint64_t x403 = 5640674231783914LLU;
	static volatile int32_t x404 = -1;
	uint64_t t95 = 1LLU;

	t95 = ((x401%(x402^x403))&x404);

	if (t95 != 869667888233378LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x405 = -1LL;
	static int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile int16_t x408 = -111;
	int64_t t96 = -1395732750321274LL;

	t96 = ((x405%(x406^x407))&x408);

	if (t96 != -111LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x410 = -840567836594403650LL;
	static int64_t x411 = 272715LL;
	int64_t x412 = INT64_MAX;
	static volatile int64_t t97 = -12577341783565641LL;

	t97 = ((x409%(x410^x411))&x412);

	if (t97 != 33LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = INT64_MIN;
	volatile int64_t x414 = INT64_MAX;
	int8_t x415 = -1;
	volatile int64_t t98 = 28880908741845976LL;

	t98 = ((x413%(x414^x415))&x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 8148U;
	volatile uint64_t t99 = 16041990681482590LLU;

	t99 = ((x417%(x418^x419))&x420);

	if (t99 != 2880LLU) { NG(); } else { ; }
	
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

