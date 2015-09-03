#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = 8156402367LLU;
int8_t x5 = 1;
uint64_t x14 = 135962454910811LLU;
uint8_t x15 = 0U;
uint64_t x25 = 28858794012944314LLU;
int16_t x28 = -1;
uint32_t x30 = UINT32_MAX;
volatile uint64_t t7 = 750677491697619LLU;
int16_t x35 = INT16_MAX;
int64_t t11 = 122294049236241272LL;
volatile int64_t t12 = 25796590702938LL;
static int32_t t13 = 1983535;
volatile int32_t x61 = INT32_MIN;
int16_t x72 = -27;
volatile uint32_t t16 = 6U;
uint32_t x73 = 182U;
uint8_t x74 = UINT8_MAX;
int32_t x76 = INT32_MIN;
int64_t x82 = INT64_MIN;
int64_t x88 = INT64_MIN;
static volatile int32_t x90 = INT32_MAX;
volatile uint64_t t23 = 105152114LLU;
uint8_t x102 = 72U;
int64_t x112 = INT64_MAX;
static volatile uint64_t t25 = 1551LLU;
static uint32_t x114 = 3812359U;
int8_t x119 = -1;
int64_t x130 = -8LL;
uint64_t x134 = 2638097961248053856LLU;
int64_t x135 = 711285450951303LL;
uint64_t t31 = 52LLU;
uint16_t x146 = 486U;
int8_t x152 = 1;
int64_t x153 = -213294540374923257LL;
int16_t x156 = INT16_MIN;
uint32_t t37 = 830397U;
int16_t x164 = INT16_MIN;
volatile int32_t x165 = -348724;
uint16_t x166 = UINT16_MAX;
volatile int8_t x170 = INT8_MIN;
int32_t x172 = INT32_MAX;
int32_t t40 = 134016920;
uint64_t x174 = 267846584LLU;
int32_t x180 = -1010;
int64_t x181 = INT64_MAX;
static int32_t x183 = INT32_MAX;
uint8_t x186 = 1U;
int16_t x189 = 28;
static volatile uint64_t t45 = 51401439LLU;
int8_t x193 = INT8_MAX;
uint64_t t48 = 24399028075435898LLU;
static uint8_t x208 = 2U;
uint8_t x218 = UINT8_MAX;
static uint32_t x221 = 111985U;
int16_t x222 = -1;
int64_t x230 = INT64_MIN;
volatile uint64_t x235 = 26600932277462673LLU;
static volatile int64_t t58 = 2001967836495925999LL;
volatile int32_t t60 = 4;
static volatile int32_t x264 = INT32_MAX;
int64_t t65 = -3LL;
uint8_t x278 = UINT8_MAX;
int16_t x285 = INT16_MIN;
uint8_t x303 = UINT8_MAX;
uint64_t t73 = 483166299846904940LLU;
static int16_t x318 = -1144;
static int32_t x322 = INT32_MIN;
int16_t x326 = INT16_MIN;
static int16_t x327 = INT16_MIN;
uint32_t x332 = UINT32_MAX;
static int64_t x335 = INT64_MIN;
volatile uint64_t t78 = 1LLU;
static int16_t x340 = INT16_MIN;
uint64_t x342 = 405352729763092239LLU;
volatile uint64_t x352 = 1513137899884962100LLU;
volatile int8_t x358 = INT8_MIN;
volatile int64_t t84 = 0LL;
uint32_t x361 = 1736578567U;
uint16_t x362 = 13U;
int32_t x368 = INT32_MAX;
int16_t x372 = INT16_MIN;
static uint8_t x385 = 32U;
volatile int32_t x398 = INT32_MIN;
volatile int64_t t94 = 3LL;
int64_t x403 = INT64_MAX;
uint64_t x412 = 2LLU;


void f0(void) {
	int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MAX;
	int32_t x4 = 159912200;
	uint64_t t0 = 166528042LLU;

	t0 = ((x1%x2)+(x3^x4));

	if (t0 != 159944207LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 1401;
	int16_t x7 = 1;
	int32_t x8 = -251;
	int32_t t1 = 1;

	t1 = ((x5%x6)+(x7^x8));

	if (t1 != -251) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = 6242;
	static int64_t x11 = INT64_MIN;
	volatile int32_t x12 = 27138;
	int64_t t2 = -2036496803996169LL;

	t2 = ((x9%x10)+(x11^x12));

	if (t2 != -9223372036854753364LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x16 = -1;
	uint64_t t3 = 104774LLU;

	t3 = ((x13%x14)+(x15^x16));

	if (t3 != 38003685269062LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = -1;
	static int16_t x18 = 3443;
	int16_t x19 = -1;
	static volatile int64_t x20 = INT64_MIN;
	int64_t t4 = 359545999LL;

	t4 = ((x17%x18)+(x19^x20));

	if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile uint16_t x22 = 42U;
	uint8_t x23 = 119U;
	uint8_t x24 = 93U;
	int32_t t5 = -38658513;

	t5 = ((x21%x22)+(x23^x24));

	if (t5 != 40) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = -1;
	static int16_t x27 = -1;
	volatile uint64_t t6 = 1022411889817820434LLU;

	t6 = ((x25%x26)+(x27^x28));

	if (t6 != 28858794012944314LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 3512626U;
	uint16_t x31 = 9U;
	uint64_t x32 = 70986665770440772LLU;

	t7 = ((x29%x30)+(x31^x32));

	if (t7 != 70986665773953407LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int16_t x34 = -1;
	volatile uint32_t x36 = UINT32_MAX;
	uint32_t t8 = 15562412U;

	t8 = ((x33%x34)+(x35^x36));

	if (t8 != 4294934528U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	static volatile int32_t x43 = 22750;
	int16_t x44 = INT16_MIN;
	static volatile int64_t t9 = 14185898096650923LL;

	t9 = ((x41%x42)+(x43^x44));

	if (t9 != -10018LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = -1;
	uint16_t x47 = 288U;
	uint32_t x48 = 12559587U;
	volatile uint32_t t10 = 65U;

	t10 = ((x45%x46)+(x47^x48));

	if (t10 != 12559811U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = -1;
	int64_t x51 = -2LL;
	static int64_t x52 = 351552923048076984LL;

	t11 = ((x49%x50)+(x51^x52));

	if (t11 != -351552923048076986LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -19739147118596050LL;
	volatile uint8_t x54 = 127U;
	volatile int16_t x55 = INT16_MAX;
	volatile int16_t x56 = 10986;

	t12 = ((x53%x54)+(x55^x56));

	if (t12 != 21676LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MAX;
	int32_t x59 = -111;
	uint16_t x60 = UINT16_MAX;

	t13 = ((x57%x58)+(x59^x60));

	if (t13 != -65423) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = INT16_MAX;
	int64_t x63 = 53LL;
	int64_t x64 = -473905383354284LL;
	static volatile int64_t t14 = 1177568697330166575LL;

	t14 = ((x61%x62)+(x63^x64));

	if (t14 != -473905383354273LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = 15LL;
	uint16_t x67 = UINT16_MAX;
	static uint32_t x68 = 327U;
	int64_t t15 = -1LL;

	t15 = ((x65%x66)+(x67^x68));

	if (t15 != 65200LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 871U;
	uint32_t x70 = 239U;
	int8_t x71 = INT8_MIN;

	t16 = ((x69%x70)+(x71^x72));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x75 = 6U;
	volatile uint32_t t17 = 24878217U;

	t17 = ((x73%x74)+(x75^x76));

	if (t17 != 2147483836U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = UINT64_MAX;
	uint64_t x78 = 7326549LLU;
	int32_t x79 = INT32_MAX;
	volatile uint8_t x80 = 94U;
	uint64_t t18 = 1901472311718937646LLU;

	t18 = ((x77%x78)+(x79^x80));

	if (t18 != 2153379837LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = -3049;
	static int16_t x83 = 64;
	uint32_t x84 = 354926951U;
	volatile int64_t t19 = 29752397LL;

	t19 = ((x81%x82)+(x83^x84));

	if (t19 != 354923838LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MAX;
	uint64_t t20 = 373033LLU;

	t20 = ((x85%x86)+(x87^x88));

	if (t20 != 126LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t21 = 938382;

	t21 = ((x89%x90)+(x91^x92));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x93 = -7639;
	int16_t x94 = INT16_MIN;
	static uint8_t x95 = 0U;
	int64_t x96 = 31350475976LL;
	volatile int64_t t22 = -141829445LL;

	t22 = ((x93%x94)+(x95^x96));

	if (t22 != 31350468337LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 3U;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MIN;
	volatile int32_t x100 = -123;

	t23 = ((x97%x98)+(x99^x100));

	if (t23 != 9223372036854775688LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 21996;
	volatile int64_t x103 = INT64_MIN;
	uint16_t x104 = UINT16_MAX;
	int64_t t24 = 28616963266LL;

	t24 = ((x101%x102)+(x103^x104));

	if (t24 != -9223372036854710237LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x109 = UINT16_MAX;
	int8_t x110 = -1;
	static volatile uint64_t x111 = UINT64_MAX;

	t25 = ((x109%x110)+(x111^x112));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 20053870734665723LLU;
	int32_t x115 = 1293;
	int16_t x116 = 11;
	static uint64_t t26 = 7247873289578315440LLU;

	t26 = ((x113%x114)+(x115^x116));

	if (t26 != 937619LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = 434;
	static uint64_t x120 = 39833841010LLU;
	static uint64_t t27 = 160298LLU;

	t27 = ((x117%x118)+(x119^x120));

	if (t27 != 18446744033875710477LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = INT32_MIN;
	static int16_t x122 = INT16_MAX;
	int32_t x123 = -1;
	static int16_t x124 = INT16_MIN;
	static volatile int32_t t28 = -108606;

	t28 = ((x121%x122)+(x123^x124));

	if (t28 != 32765) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = 40U;
	int8_t x126 = -1;
	int64_t x127 = -1112527555117652331LL;
	uint8_t x128 = 28U;
	static int64_t t29 = 912969LL;

	t29 = ((x125%x126)+(x127^x128));

	if (t29 != -1112527555117652343LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = 43LL;
	int32_t x131 = 1524;
	static int64_t x132 = INT64_MAX;
	static int64_t t30 = 17507749962197LL;

	t30 = ((x129%x130)+(x131^x132));

	if (t30 != 9223372036854774286LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -1LL;
	int64_t x136 = INT64_MIN;

	t31 = ((x133%x134)+(x135^x136));

	if (t31 != 11842239628526955590LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = -1;
	static volatile uint32_t x138 = 36U;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t32 = 14LL;

	t32 = ((x137%x138)+(x139^x140));

	if (t32 != 9223372036854743043LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = UINT32_MAX;
	volatile int32_t x142 = INT32_MAX;
	static volatile int8_t x143 = -1;
	static int8_t x144 = -1;
	static uint32_t t33 = 57U;

	t33 = ((x141%x142)+(x143^x144));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x145 = 35219083658952LLU;
	static int16_t x147 = INT16_MIN;
	uint16_t x148 = 490U;
	volatile uint64_t t34 = 839LLU;

	t34 = ((x145%x146)+(x147^x148));

	if (t34 != 18446744073709519368LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	int16_t x151 = 645;
	static volatile uint64_t t35 = 11309570565LLU;

	t35 = ((x149%x150)+(x151^x152));

	if (t35 != 2147484291LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	volatile int64_t t36 = -214LL;

	t36 = ((x153%x154)+(x155^x156));

	if (t36 != 14253LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 666;
	int16_t x158 = INT16_MIN;
	uint32_t x159 = 9154745U;
	static int8_t x160 = -17;

	t37 = ((x157%x158)+(x159^x160));

	if (t37 != 4285813232U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	volatile int16_t x162 = -249;
	uint16_t x163 = 254U;
	int32_t t38 = -584833;

	t38 = ((x161%x162)+(x163^x164));

	if (t38 != -32515) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 7330U;
	static volatile uint32_t t39 = 697U;

	t39 = ((x165%x166)+(x167^x168));

	if (t39 != 4294938857U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MAX;
	int8_t x171 = INT8_MIN;

	t40 = ((x169%x170)+(x171^x172));

	if (t40 != -2147483394) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -5441256;
	int16_t x175 = INT16_MAX;
	int16_t x176 = INT16_MIN;
	static volatile uint64_t t41 = 255LLU;

	t41 = ((x173%x174)+(x175^x176));

	if (t41 != 245020759LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	uint32_t x178 = 49U;
	int32_t x179 = -454;
	volatile uint32_t t42 = 2192U;

	t42 = ((x177%x178)+(x179^x180));

	if (t42 != 602U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = -1;
	int8_t x184 = 1;
	int64_t t43 = -77313749729511LL;

	t43 = ((x181%x182)+(x183^x184));

	if (t43 != 2147483646LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = -1;
	uint8_t x187 = UINT8_MAX;
	uint32_t x188 = 1963U;
	volatile uint32_t t44 = 1U;

	t44 = ((x185%x186)+(x187^x188));

	if (t44 != 1876U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x190 = 1003037399783LLU;
	volatile uint64_t x191 = 1416234060020023712LLU;
	uint16_t x192 = 1653U;

	t45 = ((x189%x190)+(x191^x192));

	if (t45 != 1416234060020025329LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x194 = -9096258751003LL;
	int64_t x195 = -902992626315659521LL;
	volatile int32_t x196 = 512;
	int64_t t46 = -90657580LL;

	t46 = ((x193%x194)+(x195^x196));

	if (t46 != -902992626315659906LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	uint32_t x198 = 3108U;
	int64_t x199 = 11LL;
	volatile int32_t x200 = INT32_MIN;
	int64_t t47 = 94501276153498238LL;

	t47 = ((x197%x198)+(x199^x200));

	if (t47 != -2147481877LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;

	t48 = ((x201%x202)+(x203^x204));

	if (t48 != 32894LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x205 = 0U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	volatile int32_t t49 = -5;

	t49 = ((x205%x206)+(x207^x208));

	if (t49 != -2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 0U;
	int16_t x210 = INT16_MIN;
	int16_t x211 = -18;
	static uint32_t x212 = UINT32_MAX;
	uint32_t t50 = 929U;

	t50 = ((x209%x210)+(x211^x212));

	if (t50 != 17U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x213 = 13805U;
	int64_t x214 = INT64_MIN;
	static uint8_t x215 = 60U;
	uint8_t x216 = 38U;
	int64_t t51 = 24179341156996LL;

	t51 = ((x213%x214)+(x215^x216));

	if (t51 != 13831LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	int16_t x219 = -9;
	uint32_t x220 = 710738U;
	static int64_t t52 = 32718758LL;

	t52 = ((x217%x218)+(x219^x220));

	if (t52 != 4294256548LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x223 = 1064442254254394LL;
	volatile int8_t x224 = 3;
	volatile int64_t t53 = 8172311588709817LL;

	t53 = ((x221%x222)+(x223^x224));

	if (t53 != 1064442254366378LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = -1751;
	uint16_t x226 = 5170U;
	int8_t x227 = -2;
	int16_t x228 = 1;
	int32_t t54 = -5993;

	t54 = ((x225%x226)+(x227^x228));

	if (t54 != -1752) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x229 = UINT8_MAX;
	int16_t x231 = -1;
	int8_t x232 = INT8_MIN;
	volatile int64_t t55 = -1240462022LL;

	t55 = ((x229%x230)+(x231^x232));

	if (t55 != 382LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 1;
	volatile int8_t x234 = INT8_MIN;
	int32_t x236 = -1;
	uint64_t t56 = 4229382608681LLU;

	t56 = ((x233%x234)+(x235^x236));

	if (t56 != 18420143141432088943LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	volatile int64_t x238 = INT64_MAX;
	static volatile int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MAX;
	int64_t t57 = -13716LL;

	t57 = ((x237%x238)+(x239^x240));

	if (t57 != 2147450879LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = -6;
	int8_t x242 = -1;
	int8_t x243 = -1;
	int64_t x244 = 11419443047928378LL;

	t58 = ((x241%x242)+(x243^x244));

	if (t58 != -11419443047928379LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x245 = 3390019U;
	int16_t x246 = INT16_MAX;
	int16_t x247 = INT16_MAX;
	volatile int32_t x248 = -1;
	static volatile uint32_t t59 = 258483U;

	t59 = ((x245%x246)+(x247^x248));

	if (t59 != 4294949546U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -3;
	static int32_t x250 = INT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;

	t60 = ((x249%x250)+(x251^x252));

	if (t60 != 32637) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = -1;
	uint64_t x258 = 40LLU;
	int64_t x259 = INT64_MAX;
	int32_t x260 = INT32_MIN;
	uint64_t t61 = 2LLU;

	t61 = ((x257%x258)+(x259^x260));

	if (t61 != 9223372039002259470LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x261 = 1718U;
	volatile uint16_t x262 = 1292U;
	volatile int64_t x263 = INT64_MIN;
	int64_t t62 = 3823966313LL;

	t62 = ((x261%x262)+(x263^x264));

	if (t62 != -9223372034707291735LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x265 = 2U;
	int64_t x266 = -32688007LL;
	int8_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t63 = -3830124022846LL;

	t63 = ((x265%x266)+(x267^x268));

	if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x269 = -23034249;
	static volatile int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	int64_t t64 = 96877360160LL;

	t64 = ((x269%x270)+(x271^x272));

	if (t64 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MAX;
	volatile int64_t x274 = 4590206771971875267LL;
	volatile uint32_t x275 = UINT32_MAX;
	uint16_t x276 = UINT16_MAX;

	t65 = ((x273%x274)+(x275^x276));

	if (t65 != 4294934527LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = -1;
	static int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MAX;
	int32_t t66 = -5;

	t66 = ((x277%x278)+(x279^x280));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	static uint32_t x282 = UINT32_MAX;
	static int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t67 = 942472864673197221LLU;

	t67 = ((x281%x282)+(x283^x284));

	if (t67 != 4294999935LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = 343;
	static int32_t x288 = INT32_MAX;
	volatile uint32_t t68 = 19630U;

	t68 = ((x285%x286)+(x287^x288));

	if (t68 != 2147450536U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = -422382;
	int64_t x295 = 6881371538439924LL;
	int16_t x296 = -52;
	uint64_t t69 = 748619970752LLU;

	t69 = ((x293%x294)+(x295^x296));

	if (t69 != 18439862702171534117LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	static int64_t x300 = INT64_MIN;
	volatile int64_t t70 = -14LL;

	t70 = ((x297%x298)+(x299^x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = UINT8_MAX;
	static volatile uint8_t x302 = UINT8_MAX;
	volatile int32_t x304 = -29152;
	volatile int32_t t71 = 3408135;

	t71 = ((x301%x302)+(x303^x304));

	if (t71 != -28961) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 0U;
	int64_t x310 = -1LL;
	int16_t x311 = -13614;
	static uint64_t x312 = 8LLU;
	static volatile uint64_t t72 = 16688251221074363LLU;

	t72 = ((x309%x310)+(x311^x312));

	if (t72 != 18446744073709538010LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x313 = 2780;
	uint64_t x314 = 2943460143LLU;
	uint32_t x315 = 17U;
	volatile uint8_t x316 = 0U;

	t73 = ((x313%x314)+(x315^x316));

	if (t73 != 2797LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t74 = -2494;

	t74 = ((x317%x318)+(x319^x320));

	if (t74 != 33023) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	int64_t x323 = -1333LL;
	int64_t x324 = 2523664856LL;
	volatile int64_t t75 = 24765525037LL;

	t75 = ((x321%x322)+(x323^x324));

	if (t75 != -2523665773LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MIN;
	int64_t x328 = INT64_MAX;
	int64_t t76 = 72922257341LL;

	t76 = ((x325%x326)+(x327^x328));

	if (t76 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	int16_t x331 = -51;
	volatile uint32_t t77 = 54244306U;

	t77 = ((x329%x330)+(x331^x332));

	if (t77 != 4294934578U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = -1608956122645005LL;
	int32_t x336 = INT32_MIN;

	t78 = ((x333%x334)+(x335^x336));

	if (t78 != 9224980990829937164LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = 19;
	int32_t x338 = -4013369;
	volatile int32_t x339 = 1;
	int32_t t79 = -777;

	t79 = ((x337%x338)+(x339^x340));

	if (t79 != -32748) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x341 = UINT16_MAX;
	uint16_t x343 = 474U;
	volatile int64_t x344 = INT64_MIN;
	volatile uint64_t t80 = 30LLU;

	t80 = ((x341%x342)+(x343^x344));

	if (t80 != 9223372036854841817LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -14544;
	int16_t x346 = -1;
	int8_t x347 = 1;
	static uint16_t x348 = 518U;
	int32_t t81 = 3;

	t81 = ((x345%x346)+(x347^x348));

	if (t81 != 519) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 550532382U;
	int16_t x350 = -2893;
	uint64_t x351 = 1862061766LLU;
	uint64_t t82 = 474579256LLU;

	t82 = ((x349%x350)+(x351^x352));

	if (t82 != 1513137900860908816LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = -5009;
	static int32_t t83 = -1;

	t83 = ((x353%x354)+(x355^x356));

	if (t83 != -4976) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = INT8_MIN;
	int64_t x359 = INT64_MAX;
	int8_t x360 = INT8_MIN;

	t84 = ((x357%x358)+(x359^x360));

	if (t84 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x363 = 115663U;
	static volatile int8_t x364 = -1;
	static uint32_t t85 = 570U;

	t85 = ((x361%x362)+(x363^x364));

	if (t85 != 4294851641U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	volatile int16_t x367 = INT16_MIN;
	volatile uint64_t t86 = 56416563484LLU;

	t86 = ((x365%x366)+(x367^x368));

	if (t86 != 32766LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int8_t x370 = -1;
	static int16_t x371 = -1;
	volatile uint64_t t87 = 125506875LLU;

	t87 = ((x369%x370)+(x371^x372));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x373 = 26U;
	volatile int64_t x374 = INT64_MIN;
	uint8_t x375 = 7U;
	int64_t x376 = 1LL;
	int64_t t88 = 120155824996LL;

	t88 = ((x373%x374)+(x375^x376));

	if (t88 != 32LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = 2408U;
	int32_t x378 = -8572;
	volatile uint8_t x379 = 101U;
	static uint64_t x380 = 9LLU;
	uint64_t t89 = 7979264LLU;

	t89 = ((x377%x378)+(x379^x380));

	if (t89 != 2516LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 14381661026055LLU;
	static volatile int8_t x382 = INT8_MAX;
	uint64_t x383 = 3355581172381755LLU;
	static int16_t x384 = INT16_MIN;
	static uint64_t t90 = 75915753702465LLU;

	t90 = ((x381%x382)+(x383^x384));

	if (t90 != 18443388492537198652LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x386 = 549163841330LL;
	int32_t x387 = -1;
	static int16_t x388 = INT16_MIN;
	static int64_t t91 = -118321930LL;

	t91 = ((x385%x386)+(x387^x388));

	if (t91 != 32799LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = 0;
	int8_t x390 = INT8_MAX;
	static int32_t x391 = INT32_MAX;
	int64_t x392 = INT64_MIN;
	static int64_t t92 = -288900953532LL;

	t92 = ((x389%x390)+(x391^x392));

	if (t92 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = 117830872;
	int64_t x394 = INT64_MAX;
	int8_t x395 = 50;
	static int32_t x396 = INT32_MAX;
	int64_t t93 = 0LL;

	t93 = ((x393%x394)+(x395^x396));

	if (t93 != 2265314469LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x397 = 2U;
	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = INT64_MIN;

	t94 = ((x397%x398)+(x399^x400));

	if (t94 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -1LL;
	static uint32_t x402 = 1434U;
	int8_t x404 = INT8_MAX;
	int64_t t95 = 6225614081LL;

	t95 = ((x401%x402)+(x403^x404));

	if (t95 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x405 = INT64_MAX;
	int8_t x406 = -1;
	uint64_t x407 = 287358105569295661LLU;
	int32_t x408 = -1;
	uint64_t t96 = 78470794LLU;

	t96 = ((x405%x406)+(x407^x408));

	if (t96 != 18159385968140255954LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x409 = 107;
	static volatile uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MAX;
	volatile uint64_t t97 = 0LLU;

	t97 = ((x409%x410)+(x411^x412));

	if (t97 != 9223372036854775912LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x413 = -1;
	volatile int64_t x414 = INT64_MAX;
	static int32_t x415 = INT32_MAX;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t98 = 2069841657348LL;

	t98 = ((x413%x414)+(x415^x416));

	if (t98 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -3668;
	volatile uint64_t x418 = UINT64_MAX;
	static uint64_t x419 = 951685047584LLU;
	uint16_t x420 = UINT16_MAX;
	uint64_t t99 = 36LLU;

	t99 = ((x417%x418)+(x419^x420));

	if (t99 != 951685057675LLU) { NG(); } else { ; }
	
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

