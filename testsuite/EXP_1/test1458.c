#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
int64_t x6 = INT64_MAX;
volatile int16_t x16 = 0;
int32_t t2 = 916865813;
static volatile int64_t x20 = -1LL;
int8_t x21 = -18;
int64_t x23 = INT64_MIN;
uint64_t x26 = UINT64_MAX;
int8_t x28 = INT8_MIN;
uint64_t x29 = 287916LLU;
uint64_t x31 = UINT64_MAX;
uint8_t x33 = 8U;
uint16_t x34 = 625U;
uint8_t x35 = 4U;
int64_t x40 = INT64_MAX;
static volatile int64_t t8 = -11107868LL;
static int64_t x43 = -14LL;
int8_t x44 = 1;
int32_t t9 = -12431792;
int8_t x47 = INT8_MIN;
int8_t x54 = -1;
int64_t x59 = INT64_MIN;
int32_t t14 = -263720;
volatile uint8_t x74 = UINT8_MAX;
int32_t x76 = -1;
static uint64_t x80 = 3153152LLU;
int32_t t19 = 332;
int16_t x87 = INT16_MAX;
volatile uint32_t x91 = 18666U;
int16_t x100 = -1050;
static int32_t t26 = -16201;
int16_t x117 = INT16_MIN;
static volatile uint16_t x118 = 963U;
uint32_t x120 = UINT32_MAX;
int32_t x121 = INT32_MIN;
uint32_t t28 = 2U;
int32_t t31 = 38809;
uint8_t x137 = UINT8_MAX;
int32_t x146 = -1;
int32_t t34 = 30430893;
int32_t x150 = INT32_MIN;
static volatile uint8_t x152 = UINT8_MAX;
volatile int32_t t35 = -3;
volatile int32_t t36 = 3004;
uint64_t x160 = 1LLU;
uint64_t t37 = UINT64_MAX;
static int8_t x161 = -1;
int16_t x170 = -1;
volatile int64_t x175 = 361038979547122126LL;
int64_t x177 = -1LL;
int32_t x178 = INT32_MIN;
int16_t x180 = 1;
int32_t t43 = -53009;
static int64_t x205 = INT64_MAX;
int16_t x211 = 59;
volatile int8_t x213 = 0;
volatile int64_t t49 = -10943605786LL;
int64_t x217 = INT64_MIN;
uint8_t x219 = 107U;
int64_t x224 = -153381LL;
int32_t t52 = -408;
uint8_t x235 = 13U;
int32_t t53 = 0;
uint64_t x243 = 9721864443LLU;
int32_t t55 = -65330560;
int16_t x246 = -1;
int16_t x250 = 130;
static volatile int64_t x252 = INT64_MAX;
int16_t x254 = INT16_MAX;
uint32_t x271 = 2939U;
volatile uint32_t x272 = 4854U;
volatile int8_t x278 = 20;
int16_t x280 = INT16_MAX;
static uint16_t x286 = UINT16_MAX;
static uint32_t x292 = 353U;
volatile uint64_t x295 = 7730873667874561436LLU;
uint8_t x304 = UINT8_MAX;
int32_t x308 = INT32_MAX;
int16_t x312 = -1;
uint32_t x313 = UINT32_MAX;
int8_t x320 = INT8_MIN;
int8_t x323 = INT8_MIN;
uint64_t x326 = 145938LLU;
uint8_t x330 = 10U;
static volatile int16_t x331 = INT16_MIN;
int32_t t76 = -146;
uint32_t x345 = 206U;
volatile uint16_t x357 = UINT16_MAX;
int16_t x360 = 1;
volatile int32_t t80 = 0;
int16_t x363 = INT16_MIN;
int32_t x365 = 1575;
int32_t t82 = 97145;
volatile int16_t x371 = 16121;
uint64_t x372 = 6466055385LLU;
int32_t x373 = -1;
int32_t t84 = 13172;
static uint16_t x379 = UINT16_MAX;
int16_t x380 = INT16_MIN;
uint64_t x388 = 400850538356LLU;
static volatile uint16_t x394 = 2025U;
int16_t x395 = INT16_MAX;
int8_t x397 = INT8_MAX;
uint8_t x401 = 6U;
uint16_t x402 = 185U;
int64_t x412 = 308LL;
static volatile uint64_t x414 = UINT64_MAX;
int64_t x416 = -2100LL;
static volatile int16_t x420 = 2059;
volatile int32_t t92 = 1634;
static uint64_t x422 = 28599519817LLU;
int8_t x423 = INT8_MIN;
static int32_t x427 = INT32_MAX;
static volatile int32_t x428 = -31569;
static uint16_t x429 = 4580U;
int64_t x435 = INT64_MIN;
int8_t x436 = 42;
int16_t x444 = -235;


void f0(void) {
	int16_t x7 = 3362;
	int64_t x8 = -6164303LL;
	int64_t t0 = 1903953807631481597LL;

	t0 = (((x5<x6)<x7)-x8);

	if (t0 != 6164304LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = -6198362;
	volatile int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 0LLU;
	uint64_t t1 = 14368666365063988LLU;

	t1 = (((x9<x10)<x11)-x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	static int16_t x14 = -1;
	volatile int64_t x15 = -1LL;

	t2 = (((x13<x14)<x15)-x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 113U;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	volatile int64_t t3 = 1526666015677LL;

	t3 = (((x17<x18)<x19)-x20);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t4 = 736843;

	t4 = (((x21<x22)<x23)-x24);

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	volatile int8_t x27 = -1;
	int32_t t5 = -1;

	t5 = (((x25<x26)<x27)-x28);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = UINT64_MAX;
	int8_t x32 = INT8_MAX;
	int32_t t6 = 4226;

	t6 = (((x29<x30)<x31)-x32);

	if (t6 != -126) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x36 = 1824677U;
	uint32_t t7 = 4357051U;

	t7 = (((x33<x34)<x35)-x36);

	if (t7 != 4293142620U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 111814U;
	int64_t x39 = 2894773816255449342LL;

	t8 = (((x37<x38)<x39)-x40);

	if (t8 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -1;
	int16_t x42 = INT16_MAX;

	t9 = (((x41<x42)<x43)-x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int64_t x48 = INT64_MAX;
	int64_t t10 = -95569102608279517LL;

	t10 = (((x45<x46)<x47)-x48);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = -107026LL;
	volatile int16_t x51 = INT16_MIN;
	static int64_t x52 = -13690925880LL;
	volatile int64_t t11 = 29245LL;

	t11 = (((x49<x50)<x51)-x52);

	if (t11 != 13690925880LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 317378;
	volatile int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MAX;
	int64_t t12 = 50565404027175LL;

	t12 = (((x53<x54)<x55)-x56);

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = UINT8_MAX;
	uint32_t x58 = 1779901576U;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -1728166;

	t13 = (((x57<x58)<x59)-x60);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 33;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = -1;

	t14 = (((x61<x62)<x63)-x64);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = -1LL;
	int32_t x67 = 11;
	int8_t x68 = -7;
	int32_t t15 = -551;

	t15 = (((x65<x66)<x67)-x68);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = INT16_MAX;
	static int32_t x70 = INT32_MIN;
	volatile uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t16 = -9958;

	t16 = (((x69<x70)<x71)-x72);

	if (t16 != 129) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	int32_t t17 = -367;

	t17 = (((x73<x74)<x75)-x76);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -15815;
	int32_t x78 = INT32_MAX;
	int8_t x79 = -1;
	volatile uint64_t t18 = 10478LLU;

	t18 = (((x77<x78)<x79)-x80);

	if (t18 != 18446744073706398464LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = 0;

	t19 = (((x81<x82)<x83)-x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 2LLU;
	volatile int64_t x86 = 109LL;
	static int16_t x88 = 0;
	volatile int32_t t20 = 237923;

	t20 = (((x85<x86)<x87)-x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = 4;
	int8_t x92 = INT8_MIN;
	int32_t t21 = 27;

	t21 = (((x89<x90)<x91)-x92);

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = INT32_MAX;
	uint64_t x94 = 18694597732155790LLU;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = -1;
	volatile int32_t t22 = 145301964;

	t22 = (((x93<x94)<x95)-x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	static volatile uint32_t x98 = 828U;
	int64_t x99 = INT64_MIN;
	volatile int32_t t23 = -15241;

	t23 = (((x97<x98)<x99)-x100);

	if (t23 != 1050) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	int16_t x107 = 53;
	volatile int8_t x108 = INT8_MAX;
	volatile int32_t t24 = 56945259;

	t24 = (((x105<x106)<x107)-x108);

	if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -86802821;
	int64_t x110 = INT64_MIN;
	uint16_t x111 = 334U;
	static volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t25 = -2425865;

	t25 = (((x109<x110)<x111)-x112);

	if (t25 != -65534) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MAX;
	volatile int16_t x114 = 1145;
	volatile uint16_t x115 = 1887U;
	volatile uint8_t x116 = 5U;

	t26 = (((x113<x114)<x115)-x116);

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x119 = INT32_MIN;
	volatile uint32_t t27 = 492016U;

	t27 = (((x117<x118)<x119)-x120);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = -6565LL;
	int32_t x123 = INT32_MAX;
	uint32_t x124 = 1478162561U;

	t28 = (((x121<x122)<x123)-x124);

	if (t28 != 2816804736U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	static int16_t x127 = -1;
	int16_t x128 = 1;
	static int32_t t29 = -3851;

	t29 = (((x125<x126)<x127)-x128);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	int16_t x130 = INT16_MAX;
	static int64_t x131 = INT64_MIN;
	uint32_t x132 = 123536861U;
	volatile uint32_t t30 = 19367U;

	t30 = (((x129<x130)<x131)-x132);

	if (t30 != 4171430435U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MAX;
	int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	volatile int16_t x136 = INT16_MAX;

	t31 = (((x133<x134)<x135)-x136);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x138 = 12473327U;
	static volatile uint8_t x139 = UINT8_MAX;
	int32_t x140 = -1;
	volatile int32_t t32 = -1;

	t32 = (((x137<x138)<x139)-x140);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x141 = 58U;
	uint64_t x142 = 324973818755LLU;
	static int64_t x143 = INT64_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t33 = 854U;

	t33 = (((x141<x142)<x143)-x144);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 1135U;
	int32_t x147 = 52078;
	volatile int16_t x148 = 15022;

	t34 = (((x145<x146)<x147)-x148);

	if (t34 != -15021) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int32_t x151 = -1;

	t35 = (((x149<x150)<x151)-x152);

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 9;
	volatile uint32_t x154 = UINT32_MAX;
	static uint64_t x155 = 4808LLU;
	volatile int16_t x156 = -1;

	t36 = (((x153<x154)<x155)-x156);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = -1;
	static volatile int64_t x158 = 511979730418LL;
	int32_t x159 = INT32_MIN;

	t37 = (((x157<x158)<x159)-x160);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -1547LL;
	static int64_t t38 = 2535746LL;

	t38 = (((x161<x162)<x163)-x164);

	if (t38 != 1547LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	static int16_t x171 = INT16_MIN;
	volatile int64_t x172 = INT64_MAX;
	int64_t t39 = -1326612766LL;

	t39 = (((x169<x170)<x171)-x172);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = 204;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t40 = 84553969;

	t40 = (((x173<x174)<x175)-x176);

	if (t40 != -254) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x179 = UINT64_MAX;
	volatile int32_t t41 = -36768974;

	t41 = (((x177<x178)<x179)-x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = 26U;
	int32_t x186 = 63;
	volatile uint8_t x187 = UINT8_MAX;
	static uint32_t x188 = 1954U;
	static volatile uint32_t t42 = 1U;

	t42 = (((x185<x186)<x187)-x188);

	if (t42 != 4294965343U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = 1;
	static int32_t x190 = -1;
	int16_t x191 = 23;
	uint16_t x192 = 1U;

	t43 = (((x189<x190)<x191)-x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = 3323330;
	uint16_t x194 = 1U;
	uint64_t x195 = UINT64_MAX;
	uint64_t x196 = 3303445LLU;
	static uint64_t t44 = 3LLU;

	t44 = (((x193<x194)<x195)-x196);

	if (t44 != 18446744073706248172LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = 47U;
	uint8_t x199 = 46U;
	int16_t x200 = INT16_MIN;
	volatile int32_t t45 = -898692003;

	t45 = (((x197<x198)<x199)-x200);

	if (t45 != 32769) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 1;
	int64_t x202 = INT64_MIN;
	uint32_t x203 = 3U;
	int16_t x204 = -1;
	int32_t t46 = -9;

	t46 = (((x201<x202)<x203)-x204);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = 66028887353016217LL;
	volatile int8_t x207 = INT8_MAX;
	int16_t x208 = 1;
	int32_t t47 = -5;

	t47 = (((x205<x206)<x207)-x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	static volatile int64_t x210 = INT64_MIN;
	volatile int16_t x212 = INT16_MAX;
	static int32_t t48 = -16;

	t48 = (((x209<x210)<x211)-x212);

	if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x214 = INT32_MIN;
	static int16_t x215 = INT16_MIN;
	int64_t x216 = -23545032LL;

	t49 = (((x213<x214)<x215)-x216);

	if (t49 != 23545032LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x218 = INT16_MAX;
	int8_t x220 = -1;
	static volatile int32_t t50 = 4343160;

	t50 = (((x217<x218)<x219)-x220);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x221 = 1LL;
	uint8_t x222 = 0U;
	int8_t x223 = -1;
	volatile int64_t t51 = 1628513764095528291LL;

	t51 = (((x221<x222)<x223)-x224);

	if (t51 != 153381LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 129356LLU;
	static int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	static uint16_t x228 = 1954U;

	t52 = (((x225<x226)<x227)-x228);

	if (t52 != -1953) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	int8_t x234 = -1;
	int32_t x236 = 264192122;

	t53 = (((x233<x234)<x235)-x236);

	if (t53 != -264192121) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	volatile int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MAX;
	volatile int64_t t54 = -1713294LL;

	t54 = (((x237<x238)<x239)-x240);

	if (t54 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MAX;
	int16_t x242 = INT16_MIN;
	int16_t x244 = INT16_MAX;

	t55 = (((x241<x242)<x243)-x244);

	if (t55 != -32766) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x245 = INT8_MIN;
	volatile int64_t x247 = -1LL;
	volatile int32_t x248 = INT32_MAX;
	volatile int32_t t56 = -2;

	t56 = (((x245<x246)<x247)-x248);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = 4481;
	int32_t x251 = INT32_MAX;
	static volatile int64_t t57 = -153LL;

	t57 = (((x249<x250)<x251)-x252);

	if (t57 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 5U;
	int32_t x255 = -1;
	uint32_t x256 = 85U;
	volatile uint32_t t58 = 27U;

	t58 = (((x253<x254)<x255)-x256);

	if (t58 != 4294967211U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = -3323724;
	static int32_t x258 = -483690;
	static uint64_t x259 = 8095731727503LLU;
	uint64_t x260 = UINT64_MAX;
	uint64_t t59 = 9120491623055LLU;

	t59 = (((x257<x258)<x259)-x260);

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = -13426811479738LL;
	static int8_t x266 = 0;
	static volatile int16_t x267 = 461;
	int8_t x268 = INT8_MAX;
	volatile int32_t t60 = -41568;

	t60 = (((x265<x266)<x267)-x268);

	if (t60 != -126) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x269 = 39061006301LL;
	volatile int16_t x270 = -1;
	uint32_t t61 = 16945616U;

	t61 = (((x269<x270)<x271)-x272);

	if (t61 != 4294962443U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MAX;
	int16_t x279 = INT16_MIN;
	static volatile int32_t t62 = 522437629;

	t62 = (((x277<x278)<x279)-x280);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x285 = 4;
	int64_t x287 = INT64_MAX;
	uint16_t x288 = 20U;
	volatile int32_t t63 = -619;

	t63 = (((x285<x286)<x287)-x288);

	if (t63 != -19) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = -4;
	static volatile int32_t x290 = INT32_MIN;
	int64_t x291 = -1LL;
	volatile uint32_t t64 = 10U;

	t64 = (((x289<x290)<x291)-x292);

	if (t64 != 4294966943U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x293 = 0;
	int32_t x294 = 10205;
	int8_t x296 = INT8_MIN;
	volatile int32_t t65 = -239009869;

	t65 = (((x293<x294)<x295)-x296);

	if (t65 != 129) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x297 = INT16_MIN;
	int16_t x298 = 150;
	uint16_t x299 = UINT16_MAX;
	static int64_t x300 = INT64_MAX;
	int64_t t66 = 72LL;

	t66 = (((x297<x298)<x299)-x300);

	if (t66 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 79U;
	int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	int32_t t67 = 413;

	t67 = (((x301<x302)<x303)-x304);

	if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	uint16_t x307 = 21U;
	static int32_t t68 = -891666683;

	t68 = (((x305<x306)<x307)-x308);

	if (t68 != -2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x309 = -1;
	static int32_t x310 = INT32_MAX;
	int16_t x311 = -1;
	int32_t t69 = -445532;

	t69 = (((x309<x310)<x311)-x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x314 = INT64_MIN;
	int64_t x315 = 26LL;
	volatile int32_t x316 = -1;
	volatile int32_t t70 = 447760;

	t70 = (((x313<x314)<x315)-x316);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = INT64_MIN;
	static uint8_t x318 = 33U;
	static int32_t x319 = -1;
	volatile int32_t t71 = -2;

	t71 = (((x317<x318)<x319)-x320);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int32_t x322 = 518738714;
	uint8_t x324 = 1U;
	volatile int32_t t72 = 170997;

	t72 = (((x321<x322)<x323)-x324);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x325 = UINT64_MAX;
	static int64_t x327 = -1LL;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t73 = -20705222;

	t73 = (((x325<x326)<x327)-x328);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x329 = INT16_MIN;
	uint8_t x332 = 2U;
	volatile int32_t t74 = -7;

	t74 = (((x329<x330)<x331)-x332);

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = 7389519;
	uint32_t x334 = 5837613U;
	volatile int8_t x335 = -1;
	static volatile uint32_t x336 = 446U;
	uint32_t t75 = 715721U;

	t75 = (((x333<x334)<x335)-x336);

	if (t75 != 4294966850U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MIN;

	t76 = (((x337<x338)<x339)-x340);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x346 = -1LL;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = 0;
	volatile int32_t t77 = -6929;

	t77 = (((x345<x346)<x347)-x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x349 = 113316218U;
	int16_t x350 = INT16_MIN;
	int32_t x351 = 1969805;
	uint32_t x352 = 14065U;
	volatile uint32_t t78 = 1802376133U;

	t78 = (((x349<x350)<x351)-x352);

	if (t78 != 4294953232U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x353 = -4;
	static int8_t x354 = -1;
	uint64_t x355 = 1327976049316415LLU;
	int16_t x356 = INT16_MIN;
	volatile int32_t t79 = 44;

	t79 = (((x353<x354)<x355)-x356);

	if (t79 != 32769) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x358 = INT64_MAX;
	volatile int64_t x359 = -26945LL;

	t80 = (((x357<x358)<x359)-x360);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = 230883U;
	int16_t x362 = 0;
	int8_t x364 = 59;
	volatile int32_t t81 = 99710190;

	t81 = (((x361<x362)<x363)-x364);

	if (t81 != -59) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x366 = -1;
	uint16_t x367 = 15877U;
	int16_t x368 = INT16_MIN;

	t82 = (((x365<x366)<x367)-x368);

	if (t82 != 32769) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = INT16_MIN;
	volatile uint64_t t83 = 16075051LLU;

	t83 = (((x369<x370)<x371)-x372);

	if (t83 != 18446744067243496232LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x374 = INT64_MIN;
	volatile int64_t x375 = -3600934807LL;
	int8_t x376 = INT8_MIN;

	t84 = (((x373<x374)<x375)-x376);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x378 = UINT64_MAX;
	volatile int32_t t85 = -13465;

	t85 = (((x377<x378)<x379)-x380);

	if (t85 != 32769) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	static uint64_t x387 = UINT64_MAX;
	static uint64_t t86 = 1410978LLU;

	t86 = (((x385<x386)<x387)-x388);

	if (t86 != 18446743672859013261LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x393 = INT8_MAX;
	int16_t x396 = INT16_MAX;
	volatile int32_t t87 = -1;

	t87 = (((x393<x394)<x395)-x396);

	if (t87 != -32766) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MAX;
	int16_t x400 = -1;
	int32_t t88 = -3;

	t88 = (((x397<x398)<x399)-x400);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x403 = UINT32_MAX;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t89 = 1390387;

	t89 = (((x401<x402)<x403)-x404);

	if (t89 != 129) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MIN;
	volatile int32_t x410 = -1;
	int32_t x411 = INT32_MIN;
	int64_t t90 = -745LL;

	t90 = (((x409<x410)<x411)-x412);

	if (t90 != -308LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = 4112248868521446083LL;
	int64_t x415 = 1349135587LL;
	int64_t t91 = 5LL;

	t91 = (((x413<x414)<x415)-x416);

	if (t91 != 2101LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x417 = INT16_MIN;
	int32_t x418 = 21180;
	int8_t x419 = INT8_MAX;

	t92 = (((x417<x418)<x419)-x420);

	if (t92 != -2058) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = UINT64_MAX;
	volatile int8_t x424 = -1;
	volatile int32_t t93 = 25598614;

	t93 = (((x421<x422)<x423)-x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = UINT32_MAX;
	int32_t x426 = 0;
	static int32_t t94 = -8361057;

	t94 = (((x425<x426)<x427)-x428);

	if (t94 != 31570) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x430 = 1;
	int32_t x431 = INT32_MAX;
	volatile uint64_t x432 = UINT64_MAX;
	static uint64_t t95 = 315135405LLU;

	t95 = (((x429<x430)<x431)-x432);

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x433 = -1;
	uint32_t x434 = 1425644324U;
	int32_t t96 = -8022050;

	t96 = (((x433<x434)<x435)-x436);

	if (t96 != -42) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MAX;
	int64_t x438 = -36235LL;
	int8_t x439 = -6;
	uint16_t x440 = 4067U;
	int32_t t97 = -9;

	t97 = (((x437<x438)<x439)-x440);

	if (t97 != -4067) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	volatile int32_t x443 = -65126974;
	int32_t t98 = 3137300;

	t98 = (((x441<x442)<x443)-x444);

	if (t98 != 235) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int8_t x446 = INT8_MAX;
	volatile int32_t x447 = -1;
	static uint8_t x448 = UINT8_MAX;
	static int32_t t99 = -145157456;

	t99 = (((x445<x446)<x447)-x448);

	if (t99 != -255) { NG(); } else { ; }
	
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

