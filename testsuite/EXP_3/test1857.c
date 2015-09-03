#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
volatile int8_t x11 = 7;
uint64_t x16 = UINT64_MAX;
volatile uint32_t t4 = 2580036U;
static int64_t x21 = 1101814483723LL;
int16_t x27 = INT16_MIN;
static uint16_t x29 = 481U;
static int8_t x34 = INT8_MIN;
int8_t x41 = INT8_MIN;
uint64_t t10 = 9LLU;
int64_t x45 = INT64_MIN;
static uint8_t x48 = 49U;
volatile int64_t x56 = INT64_MIN;
volatile int16_t x59 = INT16_MAX;
uint16_t x65 = UINT16_MAX;
int16_t x66 = INT16_MIN;
uint64_t x70 = 123LLU;
uint8_t x85 = 1U;
static uint64_t x88 = 140659566370507LLU;
volatile int8_t x92 = INT8_MIN;
int64_t x100 = INT64_MIN;
static volatile uint64_t t24 = 40830471135LLU;
static int32_t x105 = 48300;
int32_t x106 = -2509372;
static volatile uint64_t t26 = 2371203559LLU;
static uint64_t x116 = UINT64_MAX;
volatile uint64_t x120 = 1009LLU;
volatile uint64_t t29 = 48LLU;
uint32_t x125 = 132397403U;
static volatile int8_t x132 = 2;
static volatile int32_t t32 = -4667;
volatile uint32_t x134 = UINT32_MAX;
static uint64_t x136 = 60231089289922033LLU;
int8_t x150 = INT8_MAX;
int32_t x155 = INT32_MIN;
int32_t x160 = -1;
static int8_t x171 = INT8_MAX;
volatile uint64_t x172 = UINT64_MAX;
static volatile int8_t x175 = INT8_MAX;
uint64_t x181 = 1731934219293LLU;
volatile uint64_t t47 = 37892895304LLU;
int32_t x193 = -791951;
int32_t x194 = -40549;
int8_t x195 = -1;
static uint8_t x196 = 5U;
uint32_t x197 = 33560093U;
int8_t x201 = -1;
int32_t x206 = INT32_MIN;
volatile uint32_t t51 = 1512U;
uint8_t x211 = 59U;
static int64_t x212 = -2071261200016LL;
int8_t x213 = INT8_MIN;
static uint16_t x214 = UINT16_MAX;
int32_t x215 = INT32_MAX;
volatile int32_t t53 = -383;
int16_t x226 = INT16_MIN;
uint64_t x229 = 5LLU;
int32_t t58 = 989758296;
static int64_t t59 = -121094409321331LL;
static int8_t x243 = -1;
uint8_t x244 = UINT8_MAX;
int16_t x245 = INT16_MIN;
int16_t x259 = INT16_MIN;
int64_t t64 = INT64_MIN;
static uint32_t x262 = 13702U;
int16_t x268 = -2141;
volatile uint64_t t70 = 1450085291714LLU;
int32_t x287 = INT32_MIN;
int16_t x303 = 45;
volatile int32_t t77 = -651172;
int64_t x313 = 110758412704569161LL;
static int8_t x323 = -54;
int64_t x332 = -2178649717841LL;
static int16_t x336 = -408;
volatile uint32_t x338 = UINT32_MAX;
int32_t x343 = -12914521;
int16_t x344 = INT16_MIN;
int32_t x346 = -1;
int32_t x347 = INT32_MAX;
int32_t x348 = INT32_MIN;
int64_t x350 = INT64_MAX;
static int32_t x353 = INT32_MIN;
int32_t x361 = 1980;
uint32_t t90 = 1135665722U;
int16_t x366 = INT16_MAX;
volatile int16_t x380 = INT16_MIN;
volatile uint64_t t94 = 96013953196677167LLU;
int64_t x382 = -14LL;
volatile int64_t t98 = 32097612307752240LL;
volatile int64_t t99 = 7469080376964LL;


void f0(void) {
	volatile uint8_t x1 = 120U;
	uint64_t x2 = 5299826991LLU;
	int32_t x3 = -1;
	int8_t x4 = -1;
	volatile uint64_t t0 = 14LLU;

	t0 = ((x1^x2)&(x3&x4));

	if (t0 != 5299827031LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int8_t x7 = INT8_MIN;
	static int32_t x8 = -9;
	volatile int32_t t1 = 127091;

	t1 = ((x5^x6)&(x7&x8));

	if (t1 != 32640) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -10;
	volatile uint16_t x10 = UINT16_MAX;
	int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = -15114;

	t2 = ((x9^x10)&(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;
	volatile uint64_t t3 = 2752651122LLU;

	t3 = ((x13^x14)&(x15&x16));

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	static volatile int32_t x18 = INT32_MAX;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;

	t4 = ((x17^x18)&(x19&x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 11047415U;
	int64_t x23 = 323694993138819LL;
	uint8_t x24 = 55U;
	int64_t t5 = -9708184342957952LL;

	t5 = ((x21^x22)&(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 2385817295677775132LL;
	int32_t x26 = -64213451;
	volatile int64_t x28 = -2755399LL;
	static int64_t t6 = -13685LL;

	t6 = ((x25^x26)&(x27&x28));

	if (t6 != -2385817295615885312LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 6270781U;
	int8_t x31 = -1;
	uint16_t x32 = 3141U;
	uint32_t t7 = 281245U;

	t7 = ((x29^x30)&(x31&x32));

	if (t7 != 3140U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 81374768LLU;
	uint32_t x35 = 7U;
	uint32_t x36 = 23636999U;
	volatile uint64_t t8 = 18048LLU;

	t8 = ((x33^x34)&(x35&x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 182244LLU;
	int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = 2274U;
	uint64_t t9 = 9773613876154262LLU;

	t9 = ((x37^x38)&(x39&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = -46;
	int16_t x44 = INT16_MIN;

	t10 = ((x41^x42)&(x43&x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	uint8_t x47 = 2U;
	volatile int64_t t11 = 60948LL;

	t11 = ((x45^x46)&(x47&x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1733582758U;
	int64_t x50 = 732217896326LL;
	int64_t x51 = -1084LL;
	uint16_t x52 = UINT16_MAX;
	int64_t t12 = -3994638840596674LL;

	t12 = ((x49^x50)&(x51&x52));

	if (t12 != 12800LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	volatile int8_t x54 = INT8_MIN;
	static int8_t x55 = -13;
	static volatile int64_t t13 = INT64_MIN;

	t13 = ((x53^x54)&(x55&x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static volatile int8_t x58 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 87563;

	t14 = ((x57^x58)&(x59&x60));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 56110LLU;
	int64_t x62 = INT64_MIN;
	static int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MIN;
	static volatile uint64_t t15 = 1LLU;

	t15 = ((x61^x62)&(x63&x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = -1;
	uint32_t x68 = 38332U;
	static uint32_t t16 = 58579U;

	t16 = ((x65^x66)&(x67&x68));

	if (t16 != 5564U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = 4017342301082284001LLU;
	static uint64_t t17 = 46LLU;

	t17 = ((x69^x70)&(x71&x72));

	if (t17 != 4017342300056190976LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = 38025LL;
	int8_t x75 = -47;
	int16_t x76 = -494;
	static volatile int64_t t18 = 6629057585LL;

	t18 = ((x73^x74)&(x75&x76));

	if (t18 != -38400LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x77 = 856U;
	volatile int32_t x78 = 297043;
	static int16_t x79 = -100;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t19 = 34656942671557LLU;

	t19 = ((x77^x78)&(x79&x80));

	if (t19 != 297736LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 10751141934467455LL;
	int16_t x82 = -1;
	int16_t x83 = 3468;
	int16_t x84 = INT16_MAX;
	volatile int64_t t20 = 2365LL;

	t20 = ((x81^x82)&(x83&x84));

	if (t20 != 1152LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	uint64_t x87 = 28LLU;
	volatile uint64_t t21 = 2555LLU;

	t21 = ((x85^x86)&(x87&x88));

	if (t21 != 8LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	uint32_t x90 = 2372063U;
	int8_t x91 = 0;
	static volatile int64_t t22 = 19519323879LL;

	t22 = ((x89^x90)&(x91&x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 2194079LL;
	volatile int32_t x94 = INT32_MIN;
	uint32_t x95 = 13288U;
	uint64_t x96 = 891613815672LLU;
	uint64_t t23 = 15063LLU;

	t23 = ((x93^x94)&(x95&x96));

	if (t23 != 8712LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 725486148612LLU;
	static uint32_t x98 = UINT32_MAX;
	static int16_t x99 = INT16_MIN;

	t24 = ((x97^x98)&(x99&x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = 511645796322LLU;
	static volatile uint64_t t25 = 2LLU;

	t25 = ((x101^x102)&(x103&x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -542203;

	t26 = ((x105^x106)&(x107&x108));

	if (t26 != 18446744073706473472LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -1405436;
	static uint8_t x110 = UINT8_MAX;
	static int64_t x111 = -1LL;
	static int8_t x112 = -1;
	volatile int64_t t27 = 3755686LL;

	t27 = ((x109^x110)&(x111&x112));

	if (t27 != -1405189LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	static int64_t x114 = -101LL;
	int32_t x115 = INT32_MAX;
	volatile uint64_t t28 = 2777264509328613853LLU;

	t28 = ((x113^x114)&(x115&x116));

	if (t28 != 32667LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 22U;
	int8_t x118 = -1;
	static int64_t x119 = 89LL;

	t29 = ((x117^x118)&(x119&x120));

	if (t29 != 65LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -659;
	int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	uint64_t x124 = UINT64_MAX;
	uint64_t t30 = 9324425832LLU;

	t30 = ((x121^x122)&(x123&x124));

	if (t30 != 749LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MIN;
	static uint8_t x127 = 107U;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 298479102859LL;

	t31 = ((x125^x126)&(x127&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 872557;
	volatile int8_t x130 = 10;
	uint16_t x131 = UINT16_MAX;

	t32 = ((x129^x130)&(x131&x132));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -109023102LL;
	int64_t x135 = INT64_MIN;
	uint64_t t33 = 3977874LLU;

	t33 = ((x133^x134)&(x135&x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = UINT64_MAX;
	int64_t x138 = -814662157199951LL;
	volatile uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 12398U;
	uint64_t t34 = 71178LLU;

	t34 = ((x137^x138)&(x139&x140));

	if (t34 != 8270LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 6226U;
	int64_t x142 = INT64_MAX;
	uint32_t x143 = 15710242U;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t35 = 590535524LL;

	t35 = ((x141^x142)&(x143&x144));

	if (t35 != 32LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	int16_t x146 = -1;
	volatile uint64_t x147 = 1047125177LLU;
	int32_t x148 = INT32_MIN;
	uint64_t t36 = 4641427169LLU;

	t36 = ((x145^x146)&(x147&x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x151 = INT64_MAX;
	static int64_t x152 = -1LL;
	volatile int64_t t37 = 21670063844478239LL;

	t37 = ((x149^x150)&(x151&x152));

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	int8_t x154 = 6;
	uint8_t x156 = 1U;
	int32_t t38 = 7073780;

	t38 = ((x153^x154)&(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	int16_t x158 = INT16_MAX;
	uint16_t x159 = 50U;
	int32_t t39 = 3;

	t39 = ((x157^x158)&(x159&x160));

	if (t39 != 50) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	static uint16_t x162 = UINT16_MAX;
	uint8_t x163 = 34U;
	volatile int16_t x164 = -1;
	static volatile int32_t t40 = 1849;

	t40 = ((x161^x162)&(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = -1LL;
	uint8_t x167 = UINT8_MAX;
	static int16_t x168 = INT16_MIN;
	static volatile int64_t t41 = 54198792089606460LL;

	t41 = ((x165^x166)&(x167&x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 2;
	int16_t x170 = -1;
	volatile uint64_t t42 = 62LLU;

	t42 = ((x169^x170)&(x171&x172));

	if (t42 != 125LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int64_t x174 = -74LL;
	int32_t x176 = INT32_MAX;
	volatile int64_t t43 = -1431579960714510LL;

	t43 = ((x173^x174)&(x175&x176));

	if (t43 != 54LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = -1;
	int32_t x178 = -1;
	int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int64_t t44 = 4089244261LL;

	t44 = ((x177^x178)&(x179&x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = 276296LL;
	static int8_t x183 = -1;
	uint8_t x184 = 15U;
	static volatile uint64_t t45 = 4043874775302LLU;

	t45 = ((x181^x182)&(x183&x184));

	if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	uint64_t t46 = 22007019LLU;

	t46 = ((x185^x186)&(x187&x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = UINT64_MAX;
	int64_t x192 = INT64_MIN;

	t47 = ((x189^x190)&(x191&x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t t48 = -960400;

	t48 = ((x193^x194)&(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -2;
	int8_t x199 = INT8_MAX;
	int32_t x200 = -1;
	volatile uint32_t t49 = 574670179U;

	t49 = ((x197^x198)&(x199&x200));

	if (t49 != 99U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MAX;
	volatile int32_t x203 = -1;
	static int64_t x204 = INT64_MAX;
	static int64_t t50 = 307674LL;

	t50 = ((x201^x202)&(x203&x204));

	if (t50 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	static uint32_t x207 = 3997661U;
	uint16_t x208 = 2U;

	t51 = ((x205^x206)&(x207&x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	uint32_t x210 = UINT32_MAX;
	int64_t t52 = 137886188418312LL;

	t52 = ((x209^x210)&(x211&x212));

	if (t52 != 48LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x216 = INT16_MAX;

	t53 = ((x213^x214)&(x215&x216));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static volatile uint16_t x218 = 3U;
	int8_t x219 = 3;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 3529090;

	t54 = ((x217^x218)&(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	int16_t x222 = 3;
	int16_t x223 = 1689;
	static int8_t x224 = 0;
	volatile int32_t t55 = 14;

	t55 = ((x221^x222)&(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int8_t x227 = 13;
	uint16_t x228 = 1U;
	volatile int64_t t56 = 213212243495700619LL;

	t56 = ((x225^x226)&(x227&x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 1U;
	int16_t x231 = -1;
	int8_t x232 = INT8_MAX;
	volatile uint64_t t57 = 430300LLU;

	t57 = ((x229^x230)&(x231&x232));

	if (t57 != 4LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 29;
	int8_t x234 = 38;
	volatile int32_t x235 = -28352877;
	volatile uint16_t x236 = UINT16_MAX;

	t58 = ((x233^x234)&(x235&x236));

	if (t58 != 19) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = -1;
	int32_t x239 = INT32_MAX;
	int64_t x240 = 5673442260LL;

	t59 = ((x237^x238)&(x239&x240));

	if (t59 != 1378451456LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = 362LL;
	volatile int64_t t60 = 925402050627561154LL;

	t60 = ((x241^x242)&(x243&x244));

	if (t60 != 106LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -336LL;
	int64_t x247 = INT64_MIN;
	volatile int8_t x248 = INT8_MAX;
	int64_t t61 = -1287746LL;

	t61 = ((x245^x246)&(x247&x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -129570422;
	volatile uint16_t x250 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -12294;
	int32_t t62 = 45;

	t62 = ((x249^x250)&(x251&x252));

	if (t62 != 112) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -3;
	int64_t x254 = INT64_MAX;
	static uint64_t x255 = 381LLU;
	static int8_t x256 = 28;
	uint64_t t63 = 55916724859094246LLU;

	t63 = ((x253^x254)&(x255&x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int16_t x258 = INT16_MAX;
	int64_t x260 = INT64_MIN;

	t64 = ((x257^x258)&(x259&x260));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = INT64_MIN;
	static int8_t x263 = -1;
	int16_t x264 = -2640;
	static volatile int64_t t65 = -415989597864LL;

	t65 = ((x261^x262)&(x263&x264));

	if (t65 != -9223372036854762112LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 20U;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = 62915U;
	volatile uint32_t t66 = 1367904452U;

	t66 = ((x265^x266)&(x267&x268));

	if (t66 != 32768U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 4U;
	int64_t x270 = -1LL;
	static int64_t x271 = INT64_MIN;
	static volatile int8_t x272 = -1;
	int64_t t67 = INT64_MIN;

	t67 = ((x269^x270)&(x271&x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static volatile uint32_t x274 = 9U;
	static uint16_t x275 = 18014U;
	volatile int32_t x276 = -60;
	uint32_t t68 = 10236252U;

	t68 = ((x273^x274)&(x275&x276));

	if (t68 != 17988U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 157U;
	int64_t x278 = 31LL;
	volatile uint8_t x279 = 59U;
	int16_t x280 = -2260;
	volatile int64_t t69 = 90LL;

	t69 = ((x277^x278)&(x279&x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	uint8_t x283 = 53U;
	static uint64_t x284 = UINT64_MAX;

	t70 = ((x281^x282)&(x283&x284));

	if (t70 != 53LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -25919575017LL;
	uint8_t x286 = 3U;
	int64_t x288 = -1LL;
	int64_t t71 = 9990LL;

	t71 = ((x285^x286)&(x287&x288));

	if (t71 != -27917287424LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1U;
	int32_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	static uint16_t x292 = 2U;
	volatile int64_t t72 = -723LL;

	t72 = ((x289^x290)&(x291&x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 68U;
	uint8_t x294 = 25U;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 57U;
	static volatile int32_t t73 = -628142505;

	t73 = ((x293^x294)&(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	volatile int64_t x298 = 82061001LL;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	volatile int64_t t74 = -24617LL;

	t74 = ((x297^x298)&(x299&x300));

	if (t74 != 9856LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	static uint16_t x302 = 3U;
	int8_t x304 = -1;
	static int64_t t75 = 10959705632LL;

	t75 = ((x301^x302)&(x303&x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	int32_t x306 = INT32_MAX;
	int64_t x307 = INT64_MAX;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t76 = -2411534869850LL;

	t76 = ((x305^x306)&(x307&x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MAX;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;

	t77 = ((x309^x310)&(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MAX;
	static uint16_t x315 = 1703U;
	uint32_t x316 = UINT32_MAX;
	int64_t t78 = 13341849LL;

	t78 = ((x313^x314)&(x315&x316));

	if (t78 != 166LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	volatile uint32_t x318 = 1U;
	volatile int16_t x319 = -1;
	volatile int8_t x320 = 1;
	uint32_t t79 = 55U;

	t79 = ((x317^x318)&(x319&x320));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	uint64_t x322 = 71713135LLU;
	int8_t x324 = -1;
	volatile uint64_t t80 = 555124LLU;

	t80 = ((x321^x322)&(x323&x324));

	if (t80 != 71745152LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = 819588LLU;
	static uint16_t x327 = 5612U;
	static int64_t x328 = INT64_MIN;
	uint64_t t81 = 29LLU;

	t81 = ((x325^x326)&(x327&x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	static int32_t x331 = INT32_MIN;
	int64_t t82 = 6965927021356LL;

	t82 = ((x329^x330)&(x331&x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 133137094914209771LLU;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = -81874;
	volatile uint64_t t83 = 2123247948LLU;

	t83 = ((x333^x334)&(x335&x336));

	if (t83 != 133137094887735296LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 2U;
	uint32_t x339 = 324U;
	int8_t x340 = INT8_MIN;
	volatile uint32_t t84 = 2U;

	t84 = ((x337^x338)&(x339&x340));

	if (t84 != 256U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 79;
	int32_t x342 = 3;
	int32_t t85 = 212241792;

	t85 = ((x341^x342)&(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 12U;
	int32_t t86 = -4;

	t86 = ((x345^x346)&(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 228554879030110LLU;
	uint64_t t87 = 815031708LLU;

	t87 = ((x349^x350)&(x351&x352));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x354 = 31U;
	static int64_t x355 = -239LL;
	int64_t x356 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = ((x353^x354)&(x355&x356));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 1703155U;
	int8_t x358 = 0;
	int8_t x359 = -8;
	uint32_t x360 = 68523U;
	uint32_t t89 = 53U;

	t89 = ((x357^x358)&(x359&x360));

	if (t89 != 67744U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 48U;
	uint32_t x363 = 0U;
	int16_t x364 = 1;

	t90 = ((x361^x362)&(x363&x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -3965004;
	int8_t x367 = INT8_MIN;
	int16_t x368 = 14032;
	int32_t t91 = 533713639;

	t91 = ((x365^x366)&(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	uint16_t x370 = 19U;
	static int64_t x371 = INT64_MIN;
	volatile uint64_t x372 = 14LLU;
	uint64_t t92 = 8342539LLU;

	t92 = ((x369^x370)&(x371&x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 9177408801165261662LLU;
	static int64_t x374 = INT64_MIN;
	uint32_t x375 = 0U;
	volatile uint16_t x376 = 0U;
	uint64_t t93 = 394LLU;

	t93 = ((x373^x374)&(x375&x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 423614422318207783LLU;
	volatile uint16_t x378 = 1U;
	volatile uint64_t x379 = 4613953682822LLU;

	t94 = ((x377^x378)&(x379&x380));

	if (t94 != 77376520192LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 28U;
	int16_t x383 = -1;
	uint32_t x384 = 648U;
	volatile int64_t t95 = -1LL;

	t95 = ((x381^x382)&(x383&x384));

	if (t95 != 648LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int8_t x386 = -1;
	uint16_t x387 = 0U;
	int8_t x388 = -1;
	volatile uint32_t t96 = 3U;

	t96 = ((x385^x386)&(x387&x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 12601;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -995371747524LL;
	int16_t x392 = -1;
	static int64_t t97 = 2LL;

	t97 = ((x389^x390)&(x391&x392));

	if (t97 != -995371765448LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -2303;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = -7;
	int64_t x396 = INT64_MAX;

	t98 = ((x393^x394)&(x395&x396));

	if (t98 != 9223372036854712568LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static uint32_t x398 = 220047762U;
	static volatile uint8_t x399 = UINT8_MAX;
	uint32_t x400 = UINT32_MAX;

	t99 = ((x397^x398)&(x399&x400));

	if (t99 != 146LL) { NG(); } else { ; }
	
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

