#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MIN;
uint64_t x12 = 8983347544746LLU;
int16_t x14 = INT16_MIN;
volatile int16_t x19 = 111;
uint16_t x21 = 7U;
int32_t t5 = -5205082;
static volatile int8_t x38 = 0;
int64_t x39 = -1LL;
static uint32_t x44 = UINT32_MAX;
static int16_t x45 = -1992;
int64_t t10 = -13014176436753LL;
uint8_t x50 = 3U;
int64_t x64 = -26LL;
volatile uint64_t t15 = 109139962296944286LLU;
volatile uint16_t x84 = UINT16_MAX;
uint64_t x85 = 41100231LLU;
int64_t x90 = 4943643LL;
int64_t x100 = INT64_MIN;
int64_t t21 = -64826794781906LL;
int16_t x107 = -1;
uint8_t x117 = 4U;
int32_t t25 = -34501;
uint8_t x126 = 1U;
int16_t x132 = 22;
uint32_t x135 = 199231U;
volatile uint32_t t29 = 881358U;
volatile uint64_t x140 = UINT64_MAX;
uint16_t x144 = 1623U;
static int64_t x145 = INT64_MIN;
int16_t x148 = INT16_MAX;
volatile int32_t x160 = INT32_MIN;
volatile uint8_t x165 = UINT8_MAX;
int16_t x167 = 415;
int32_t x177 = INT32_MAX;
volatile int8_t x178 = 2;
static uint32_t x179 = 0U;
int8_t x180 = 2;
volatile int32_t x185 = -1015175;
volatile int64_t t40 = -25056297LL;
int32_t t42 = -3318;
volatile uint32_t x207 = 275U;
uint32_t t44 = 41U;
volatile int32_t t45 = -892;
volatile uint64_t x222 = UINT64_MAX;
static uint16_t x232 = 2U;
volatile uint16_t x238 = UINT16_MAX;
uint8_t x248 = 1U;
int8_t x252 = -1;
int16_t x255 = INT16_MIN;
static volatile int32_t t56 = 19;
volatile uint32_t t59 = 422639U;
int32_t t61 = 31120;
volatile uint8_t x296 = 7U;
volatile uint64_t t62 = 460LLU;
static volatile int32_t t63 = -36;
static int64_t x322 = -1LL;
int64_t x329 = INT64_MAX;
int32_t x331 = INT32_MAX;
int16_t x336 = -1;
uint8_t x337 = 0U;
static int16_t x340 = -1;
static volatile int8_t x341 = INT8_MIN;
uint8_t x342 = 27U;
int64_t x345 = -218LL;
int16_t x347 = INT16_MIN;
int32_t x348 = -1;
int64_t x349 = -1LL;
static int16_t x353 = INT16_MIN;
int64_t x359 = -3050822801012LL;
static uint32_t t78 = 13669U;
int32_t x382 = -1;
volatile uint64_t x383 = 3510820943LLU;
volatile uint8_t x391 = 38U;
int32_t x397 = -1;
volatile int8_t x410 = INT8_MIN;
uint32_t x418 = UINT32_MAX;
int64_t x421 = -5787505455249930LL;
static uint16_t x423 = 800U;
int16_t x426 = INT16_MAX;
uint64_t t90 = 0LLU;
volatile int8_t x431 = 1;
volatile uint8_t x433 = 8U;
int16_t x436 = INT16_MIN;
int32_t x442 = -1;
static uint32_t x443 = 512952U;
volatile int32_t t97 = -802604736;
volatile int8_t x461 = 1;
uint16_t x467 = 5201U;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	int8_t x3 = -1;
	volatile uint32_t x4 = 14U;
	volatile uint32_t t0 = 65993725U;

	t0 = ((x1==x2)+(x3-x4));

	if (t0 != 4294967281U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint16_t x6 = 496U;
	int32_t x7 = -13469706;
	uint8_t x8 = 13U;
	volatile int32_t t1 = 185984;

	t1 = ((x5==x6)+(x7-x8));

	if (t1 != -13469719) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 20U;
	uint16_t x10 = 83U;
	int64_t x11 = INT64_MIN;
	volatile uint64_t t2 = 3238515384LLU;

	t2 = ((x9==x10)+(x11-x12));

	if (t2 != 9223363053507231062LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint32_t x15 = 902U;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 2063527865LL;

	t3 = ((x13==x14)+(x15-x16));

	if (t3 != -9223372036854774905LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MAX;
	volatile int16_t x20 = -340;
	volatile int32_t t4 = 22941;

	t4 = ((x17==x18)+(x19-x20));

	if (t4 != 451) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 2043U;
	int16_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;

	t5 = ((x21==x22)+(x23-x24));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 14299838U;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MAX;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -1843975;

	t6 = ((x25==x26)+(x27-x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 62101012968LLU;
	int64_t x30 = INT64_MIN;
	volatile uint32_t x31 = 112423U;
	int8_t x32 = INT8_MAX;
	uint32_t t7 = 54188U;

	t7 = ((x29==x30)+(x31-x32));

	if (t7 != 112296U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x37 = -1;
	int32_t x40 = -1;
	volatile int64_t t8 = 6LL;

	t8 = ((x37==x38)+(x39-x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 0LL;
	static volatile int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	static volatile uint32_t t9 = 167U;

	t9 = ((x41==x42)+(x43-x44));

	if (t9 != 4294934529U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MIN;
	int64_t x47 = -1LL;
	uint8_t x48 = 1U;

	t10 = ((x45==x46)+(x47-x48));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	static int8_t x51 = INT8_MIN;
	volatile int16_t x52 = -12136;
	volatile int32_t t11 = -132644;

	t11 = ((x49==x50)+(x51-x52));

	if (t11 != 12008) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	static int16_t x54 = 0;
	static int32_t x55 = INT32_MIN;
	static int64_t x56 = -1LL;
	int64_t t12 = 2LL;

	t12 = ((x53==x54)+(x55-x56));

	if (t12 != -2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MAX;
	uint64_t x59 = 34LLU;
	uint64_t x60 = 58384155418179674LLU;
	uint64_t t13 = 708LLU;

	t13 = ((x57==x58)+(x59-x60));

	if (t13 != 18388359918291371976LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x61 = 63796803810922764LLU;
	int64_t x62 = -4544565571LL;
	int64_t x63 = 210981194LL;
	volatile int64_t t14 = 229LL;

	t14 = ((x61==x62)+(x63-x64));

	if (t14 != 210981220LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 506614;
	uint32_t x66 = 124474115U;
	int16_t x67 = -9415;
	volatile uint64_t x68 = 153963485LLU;

	t15 = ((x65==x66)+(x67-x68));

	if (t15 != 18446744073555578716LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x73 = 696U;
	static int64_t x74 = 169254607022775542LL;
	static int8_t x75 = INT8_MAX;
	int16_t x76 = -2;
	static volatile int32_t t16 = -493;

	t16 = ((x73==x74)+(x75-x76));

	if (t16 != 129) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	static int16_t x78 = -46;
	volatile int32_t x79 = -6642;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t17 = 50486234256LLU;

	t17 = ((x77==x78)+(x79-x80));

	if (t17 != 18446744073709544975LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	volatile int32_t x82 = INT32_MIN;
	int32_t x83 = -1;
	static volatile int32_t t18 = -2;

	t18 = ((x81==x82)+(x83-x84));

	if (t18 != -65536) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MAX;
	static uint16_t x88 = 30782U;
	static volatile int32_t t19 = -40;

	t19 = ((x85==x86)+(x87-x88));

	if (t19 != 2147452865) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -5;
	int64_t x91 = -129192962075LL;
	static uint16_t x92 = UINT16_MAX;
	volatile int64_t t20 = -287785449801LL;

	t20 = ((x89==x90)+(x91-x92));

	if (t20 != -129193027610LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 47U;
	volatile int8_t x98 = INT8_MIN;
	static int32_t x99 = INT32_MIN;

	t21 = ((x97==x98)+(x99-x100));

	if (t21 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	static int8_t x102 = INT8_MAX;
	uint64_t x103 = 2267472LLU;
	int16_t x104 = 2;
	volatile uint64_t t22 = 426806167LLU;

	t22 = ((x101==x102)+(x103-x104));

	if (t22 != 2267470LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = -1;
	volatile int16_t x108 = INT16_MIN;
	int32_t t23 = -352069;

	t23 = ((x105==x106)+(x107-x108));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -1;
	uint8_t x114 = 3U;
	uint16_t x115 = 0U;
	static volatile uint64_t x116 = 817867472LLU;
	volatile uint64_t t24 = 2950923472527886463LLU;

	t24 = ((x113==x114)+(x115-x116));

	if (t24 != 18446744072891684144LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x118 = INT32_MIN;
	volatile uint8_t x119 = 30U;
	int8_t x120 = -1;

	t25 = ((x117==x118)+(x119-x120));

	if (t25 != 31) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	int64_t x123 = 88994048296726119LL;
	int64_t x124 = -1932297LL;
	volatile int64_t t26 = 6520LL;

	t26 = ((x121==x122)+(x123-x124));

	if (t26 != 88994048298658416LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -507LL;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;
	int64_t t27 = -156090LL;

	t27 = ((x125==x126)+(x127-x128));

	if (t27 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x129 = INT32_MIN;
	static int64_t x130 = 21946855452LL;
	volatile uint64_t x131 = UINT64_MAX;
	uint64_t t28 = 282777370944907316LLU;

	t28 = ((x129==x130)+(x131-x132));

	if (t28 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x133 = 5U;
	int32_t x134 = INT32_MAX;
	int8_t x136 = INT8_MAX;

	t29 = ((x133==x134)+(x135-x136));

	if (t29 != 199104U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = -40;
	int32_t x138 = 6;
	uint8_t x139 = UINT8_MAX;
	volatile uint64_t t30 = 0LLU;

	t30 = ((x137==x138)+(x139-x140));

	if (t30 != 256LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = INT16_MIN;
	int8_t x142 = -1;
	uint32_t x143 = 23U;
	uint32_t t31 = 9180U;

	t31 = ((x141==x142)+(x143-x144));

	if (t31 != 4294965696U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x146 = INT64_MIN;
	static uint16_t x147 = 1U;
	int32_t t32 = 322413;

	t32 = ((x145==x146)+(x147-x148));

	if (t32 != -32765) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	static volatile uint32_t t33 = 124066706U;

	t33 = ((x149==x150)+(x151-x152));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MAX;
	static int32_t x156 = -218186676;
	int32_t t34 = 34;

	t34 = ((x153==x154)+(x155-x156));

	if (t34 != 218186803) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -69850531;
	int16_t x158 = INT16_MIN;
	static int16_t x159 = INT16_MIN;
	static volatile int32_t t35 = -2027004;

	t35 = ((x157==x158)+(x159-x160));

	if (t35 != 2147450880) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 38921221355LLU;
	int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t36 = -930;

	t36 = ((x161==x162)+(x163-x164));

	if (t36 != -2147483520) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x166 = -1;
	static int16_t x168 = -46;
	int32_t t37 = -663;

	t37 = ((x165==x166)+(x167-x168));

	if (t37 != 461) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = 892813;
	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	int64_t x172 = -1LL;
	volatile int64_t t38 = -73016588LL;

	t38 = ((x169==x170)+(x171-x172));

	if (t38 != -32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t t39 = 2U;

	t39 = ((x177==x178)+(x179-x180));

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x186 = -3;
	volatile int64_t x187 = -1LL;
	static int16_t x188 = INT16_MIN;

	t40 = ((x185==x186)+(x187-x188));

	if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 28603U;
	uint64_t x194 = 395816240485204137LLU;
	int32_t x195 = 81;
	int64_t x196 = -1LL;
	int64_t t41 = 159293LL;

	t41 = ((x193==x194)+(x195-x196));

	if (t41 != 82LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MAX;
	static int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 1260U;

	t42 = ((x197==x198)+(x199-x200));

	if (t42 != -1388) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -1;
	int16_t x202 = 2;
	int32_t x203 = INT32_MIN;
	static int8_t x204 = -1;
	volatile int32_t t43 = 8655218;

	t43 = ((x201==x202)+(x203-x204));

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = 80276047LL;
	static int16_t x206 = -1022;
	int32_t x208 = -1;

	t44 = ((x205==x206)+(x207-x208));

	if (t44 != 276U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x213 = 5574U;
	volatile uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = -1;

	t45 = ((x213==x214)+(x215-x216));

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 16407U;
	uint64_t x219 = UINT64_MAX;
	int64_t x220 = 186LL;
	volatile uint64_t t46 = 30327570384LLU;

	t46 = ((x217==x218)+(x219-x220));

	if (t46 != 18446744073709551429LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	int32_t t47 = 1;

	t47 = ((x221==x222)+(x223-x224));

	if (t47 != -32766) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = 30U;
	static volatile uint32_t x226 = 438U;
	int16_t x227 = -1;
	int16_t x228 = -1;
	static volatile int32_t t48 = 74485;

	t48 = ((x225==x226)+(x227-x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = UINT32_MAX;
	uint32_t t49 = 34113664U;

	t49 = ((x229==x230)+(x231-x232));

	if (t49 != 4294967293U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x233 = 0U;
	uint16_t x234 = 11690U;
	int16_t x235 = -5268;
	int16_t x236 = INT16_MAX;
	volatile int32_t t50 = -207;

	t50 = ((x233==x234)+(x235-x236));

	if (t50 != -38035) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x237 = INT32_MIN;
	static int8_t x239 = INT8_MIN;
	static uint16_t x240 = 11371U;
	int32_t t51 = -5673045;

	t51 = ((x237==x238)+(x239-x240));

	if (t51 != -11499) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x245 = 210445;
	static uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MAX;
	static volatile int64_t t52 = -215824277LL;

	t52 = ((x245==x246)+(x247-x248));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = -1;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -16210;
	volatile int32_t t53 = 205063;

	t53 = ((x249==x250)+(x251-x252));

	if (t53 != -16209) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	static volatile int8_t x256 = -1;
	static int32_t t54 = -946687;

	t54 = ((x253==x254)+(x255-x256));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x257 = INT32_MIN;
	static int8_t x258 = INT8_MAX;
	uint64_t x259 = UINT64_MAX;
	static int8_t x260 = -1;
	volatile uint64_t t55 = 531175681101634128LLU;

	t55 = ((x257==x258)+(x259-x260));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = 16U;
	volatile int8_t x268 = -1;

	t56 = ((x265==x266)+(x267-x268));

	if (t56 != 17) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = INT16_MIN;
	static volatile int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	static int32_t t57 = 8305869;

	t57 = ((x269==x270)+(x271-x272));

	if (t57 != -2147450880) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -1;
	volatile int16_t x274 = 1;
	int64_t x275 = -1020LL;
	int8_t x276 = INT8_MIN;
	int64_t t58 = -4LL;

	t58 = ((x273==x274)+(x275-x276));

	if (t58 != -892LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 105884172U;
	uint8_t x278 = 120U;
	volatile int32_t x279 = -10;
	uint32_t x280 = 5770U;

	t59 = ((x277==x278)+(x279-x280));

	if (t59 != 4294961516U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -1;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = -1;
	uint32_t t60 = 79U;

	t60 = ((x285==x286)+(x287-x288));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x289 = 1864U;
	uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 1U;
	uint16_t x292 = UINT16_MAX;

	t61 = ((x289==x290)+(x291-x292));

	if (t61 != -65534) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = -1;
	uint64_t x295 = 252314527015960LLU;

	t62 = ((x293==x294)+(x295-x296));

	if (t62 != 252314527015954LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MIN;
	volatile int8_t x308 = INT8_MIN;

	t63 = ((x305==x306)+(x307-x308));

	if (t63 != -32640) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	uint16_t x315 = 11286U;
	uint32_t x316 = 4993U;
	volatile uint32_t t64 = 542467U;

	t64 = ((x313==x314)+(x315-x316));

	if (t64 != 6293U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x317 = -9239LL;
	static int64_t x318 = -1LL;
	int16_t x319 = INT16_MIN;
	volatile int32_t x320 = INT32_MIN;
	int32_t t65 = 3;

	t65 = ((x317==x318)+(x319-x320));

	if (t65 != 2147450880) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x323 = 491762U;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t66 = 16900890697LLU;

	t66 = ((x321==x322)+(x323-x324));

	if (t66 != 491763LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x325 = INT64_MAX;
	volatile int16_t x326 = 14;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = 0U;
	volatile int32_t t67 = -771052013;

	t67 = ((x325==x326)+(x327-x328));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x330 = -1LL;
	int64_t x332 = -1LL;
	volatile int64_t t68 = 1273873754460456LL;

	t68 = ((x329==x330)+(x331-x332));

	if (t68 != 2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -812;
	volatile int32_t x334 = -1;
	int32_t x335 = INT32_MIN;
	volatile int32_t t69 = -1;

	t69 = ((x333==x334)+(x335-x336));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x338 = 9U;
	static uint16_t x339 = 1U;
	int32_t t70 = 22877377;

	t70 = ((x337==x338)+(x339-x340));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x343 = INT32_MIN;
	uint64_t x344 = 527752869LLU;
	uint64_t t71 = 109499521532429854LLU;

	t71 = ((x341==x342)+(x343-x344));

	if (t71 != 18446744071034315099LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x346 = -4;
	volatile int32_t t72 = 443620;

	t72 = ((x345==x346)+(x347-x348));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x350 = -836876336;
	int32_t x351 = -1;
	int16_t x352 = -1;
	int32_t t73 = -18053;

	t73 = ((x349==x350)+(x351-x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x354 = INT8_MIN;
	static volatile int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	volatile int32_t t74 = -775018;

	t74 = ((x353==x354)+(x355-x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = 0U;
	static int32_t x358 = -520554433;
	int16_t x360 = -1;
	volatile int64_t t75 = 1LL;

	t75 = ((x357==x358)+(x359-x360));

	if (t75 != -3050822801011LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x362 = -1LL;
	uint32_t x363 = 29630U;
	int32_t x364 = INT32_MIN;
	uint32_t t76 = 1799U;

	t76 = ((x361==x362)+(x363-x364));

	if (t76 != 2147513278U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x365 = 3U;
	int64_t x366 = 82565LL;
	static int16_t x367 = INT16_MAX;
	static volatile uint8_t x368 = 14U;
	static int32_t t77 = -59129;

	t77 = ((x365==x366)+(x367-x368));

	if (t77 != 32753) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = -4364851841362814637LL;
	volatile int16_t x370 = 55;
	uint32_t x371 = 227U;
	volatile int16_t x372 = INT16_MIN;

	t78 = ((x369==x370)+(x371-x372));

	if (t78 != 32995U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = 2151;
	int32_t x375 = INT32_MIN;
	static int8_t x376 = -1;
	static int32_t t79 = 3005;

	t79 = ((x373==x374)+(x375-x376));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = 1971LLU;
	int64_t x380 = 15652379211410072LL;
	volatile uint64_t t80 = 8037LLU;

	t80 = ((x377==x378)+(x379-x380));

	if (t80 != 18431091694498143515LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x381 = INT8_MAX;
	uint64_t x384 = 492764704816793729LLU;
	volatile uint64_t t81 = 489122LLU;

	t81 = ((x381==x382)+(x383-x384));

	if (t81 != 17953979372403578830LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = -1;
	static int32_t x386 = -1154;
	static int8_t x387 = -1;
	uint32_t x388 = 1240U;
	volatile uint32_t t82 = 1066269625U;

	t82 = ((x385==x386)+(x387-x388));

	if (t82 != 4294966055U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x389 = 94U;
	static int64_t x390 = 4364316718790299987LL;
	uint16_t x392 = 12U;
	static int32_t t83 = 7262;

	t83 = ((x389==x390)+(x391-x392));

	if (t83 != 26) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	volatile uint64_t x395 = 122360171947057LLU;
	uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t84 = 4264124783542093LLU;

	t84 = ((x393==x394)+(x395-x396));

	if (t84 != 122355876979763LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x398 = 8585;
	static int32_t x399 = -1;
	int32_t x400 = INT32_MAX;
	static int32_t t85 = INT32_MIN;

	t85 = ((x397==x398)+(x399-x400));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint8_t x411 = UINT8_MAX;
	static uint16_t x412 = 1U;
	int32_t t86 = 127803968;

	t86 = ((x409==x410)+(x411-x412));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = 77;
	uint8_t x414 = 0U;
	uint16_t x415 = 10055U;
	int64_t x416 = -362051375397LL;
	volatile int64_t t87 = -11LL;

	t87 = ((x413==x414)+(x415-x416));

	if (t87 != 362051385452LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = 8;
	int32_t x419 = -914821392;
	volatile int8_t x420 = 3;
	volatile int32_t t88 = 208317;

	t88 = ((x417==x418)+(x419-x420));

	if (t88 != -914821395) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x422 = INT64_MIN;
	uint8_t x424 = 27U;
	int32_t t89 = -10237160;

	t89 = ((x421==x422)+(x423-x424));

	if (t89 != 773) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x425 = INT64_MAX;
	int64_t x427 = -1LL;
	uint64_t x428 = 1740501598892995LLU;

	t90 = ((x425==x426)+(x427-x428));

	if (t90 != 18445003572110658620LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = -1;
	volatile uint16_t x430 = 1U;
	uint64_t x432 = 3LLU;
	volatile uint64_t t91 = 87LLU;

	t91 = ((x429==x430)+(x431-x432));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x434 = 85U;
	int64_t x435 = -1LL;
	volatile int64_t t92 = -183995LL;

	t92 = ((x433==x434)+(x435-x436));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x437 = UINT16_MAX;
	int16_t x438 = 188;
	static int64_t x439 = -1LL;
	int64_t x440 = -1LL;
	int64_t t93 = 1LL;

	t93 = ((x437==x438)+(x439-x440));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x441 = 0U;
	static uint16_t x444 = UINT16_MAX;
	uint32_t t94 = 41U;

	t94 = ((x441==x442)+(x443-x444));

	if (t94 != 447417U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x445 = 23U;
	int32_t x446 = 3;
	uint8_t x447 = 17U;
	int8_t x448 = INT8_MAX;
	volatile int32_t t95 = -83363379;

	t95 = ((x445==x446)+(x447-x448));

	if (t95 != -110) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = 0U;
	volatile uint16_t x454 = UINT16_MAX;
	int8_t x455 = -49;
	uint32_t x456 = 6867U;
	volatile uint32_t t96 = 34407928U;

	t96 = ((x453==x454)+(x455-x456));

	if (t96 != 4294960380U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x457 = INT32_MIN;
	int8_t x458 = INT8_MIN;
	uint8_t x459 = 13U;
	static volatile uint16_t x460 = UINT16_MAX;

	t97 = ((x457==x458)+(x459-x460));

	if (t97 != -65522) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x462 = 0;
	static int64_t x463 = -2558773LL;
	int64_t x464 = INT64_MIN;
	int64_t t98 = 3LL;

	t98 = ((x461==x462)+(x463-x464));

	if (t98 != 9223372036852217035LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x465 = 31919594205775848LLU;
	static volatile uint64_t x466 = 719293700212LLU;
	int16_t x468 = 10924;
	int32_t t99 = -101;

	t99 = ((x465==x466)+(x467-x468));

	if (t99 != -5723) { NG(); } else { ; }
	
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

