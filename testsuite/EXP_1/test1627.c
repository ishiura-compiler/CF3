#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 2U;
int8_t x8 = -1;
volatile int32_t t0 = -10451;
uint64_t x10 = 14854LLU;
uint64_t x15 = 516751073238297LLU;
static uint16_t x17 = 2U;
int64_t x22 = -26051LL;
int32_t t5 = 119328;
uint32_t x30 = UINT32_MAX;
int32_t t6 = 0;
uint16_t x41 = UINT16_MAX;
static int8_t x56 = -1;
static uint64_t x57 = UINT64_MAX;
uint32_t x58 = UINT32_MAX;
uint16_t x60 = 5025U;
uint64_t x69 = UINT64_MAX;
volatile int8_t x74 = -1;
int16_t x76 = 5595;
int32_t x78 = INT32_MAX;
int32_t x79 = INT32_MIN;
int32_t t18 = -1309;
volatile int32_t x85 = INT32_MIN;
static volatile int64_t x93 = INT64_MIN;
int64_t x96 = -4038260LL;
int8_t x100 = INT8_MIN;
volatile int32_t x106 = INT32_MIN;
volatile uint32_t t23 = 202594U;
volatile uint64_t x113 = 3LLU;
int16_t x117 = -5522;
uint16_t x123 = 3U;
static int64_t x126 = INT64_MIN;
static volatile int32_t t28 = -16;
static volatile int16_t x137 = INT16_MIN;
uint64_t x141 = 3264956710LLU;
int16_t x143 = INT16_MIN;
uint16_t x146 = 244U;
uint64_t x151 = 105006LLU;
int32_t t37 = 48368612;
static volatile uint64_t t38 = 874456994100079LLU;
static int32_t x177 = INT32_MIN;
static int32_t t40 = -102;
uint32_t x185 = 220720U;
uint8_t x189 = 4U;
int8_t x190 = INT8_MIN;
int16_t x192 = -12;
int32_t x195 = INT32_MIN;
static uint64_t x198 = UINT64_MAX;
uint16_t x211 = 0U;
volatile int8_t x213 = INT8_MIN;
uint16_t x216 = 9087U;
int32_t x220 = -3;
int8_t x221 = INT8_MIN;
volatile uint64_t x224 = 184463784147LLU;
int32_t x225 = 428951;
static int32_t t53 = -242;
int64_t t54 = -2175405705892LL;
int32_t x241 = -1;
volatile uint64_t x244 = UINT64_MAX;
uint16_t x247 = 14087U;
static uint32_t t57 = UINT32_MAX;
int16_t x249 = -51;
int16_t x250 = INT16_MAX;
int8_t x252 = -1;
int32_t t58 = -4;
volatile int64_t x258 = INT64_MIN;
static int32_t x259 = INT32_MAX;
uint32_t x261 = 249706985U;
int16_t x266 = INT16_MIN;
int32_t x268 = -3258350;
int64_t x275 = -1LL;
uint8_t x280 = 58U;
volatile int32_t t64 = -15864;
uint16_t x281 = 2U;
int16_t x299 = INT16_MIN;
int32_t t70 = 371386905;
uint16_t x305 = 156U;
uint16_t x311 = 3034U;
int32_t x323 = INT32_MAX;
int16_t x325 = 4;
int8_t x328 = -1;
int32_t t76 = 2750436;
volatile uint32_t x329 = UINT32_MAX;
volatile int32_t x342 = INT32_MIN;
int32_t t80 = 0;
static int16_t x347 = 0;
volatile int32_t t82 = 54019894;
static volatile int8_t x353 = 1;
volatile int32_t t86 = -1;
uint32_t x384 = UINT32_MAX;
volatile int8_t x389 = INT8_MAX;
static volatile int32_t t89 = -65499;
int8_t x404 = 1;
volatile int32_t x405 = -45963112;
uint8_t x407 = 27U;
uint64_t x408 = 15LLU;
static int16_t x412 = 27;
static int32_t t94 = 536063521;
int8_t x417 = INT8_MIN;
int32_t x421 = -1;
static uint64_t x424 = 2LLU;


void f0(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x7 = 782766618399853458LLU;

	t0 = (((x5<=x6)<x7)-x8);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 4LLU;
	int32_t x11 = -1;
	volatile int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -17681584;

	t1 = (((x9<=x10)<x11)-x12);

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x13 = -1;
	int16_t x14 = INT16_MIN;
	uint32_t x16 = 7U;
	volatile uint32_t t2 = 14380167U;

	t2 = (((x13<=x14)<x15)-x16);

	if (t2 != 4294967290U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	volatile int64_t x20 = -1LL;
	int64_t t3 = -112005700362963374LL;

	t3 = (((x17<=x18)<x19)-x20);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 62U;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 539U;
	int32_t t4 = 588;

	t4 = (((x21<=x22)<x23)-x24);

	if (t4 != -539) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	static uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MAX;
	int32_t x28 = 36840569;

	t5 = (((x25<=x26)<x27)-x28);

	if (t5 != -36840568) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 4;
	uint16_t x31 = 362U;
	static volatile int32_t x32 = 10228369;

	t6 = (((x29<=x30)<x31)-x32);

	if (t6 != -10228368) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 9LLU;
	uint32_t x34 = 12U;
	int32_t x35 = -1;
	static int64_t x36 = -42649597052548481LL;
	static int64_t t7 = 58946397137LL;

	t7 = (((x33<=x34)<x35)-x36);

	if (t7 != 42649597052548481LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	int8_t x44 = 3;
	volatile int32_t t8 = 4413236;

	t8 = (((x41<=x42)<x43)-x44);

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MAX;
	volatile int64_t x47 = -1LL;
	int32_t x48 = 1028;
	volatile int32_t t9 = -252;

	t9 = (((x45<=x46)<x47)-x48);

	if (t9 != -1028) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = 7707859U;
	volatile int32_t x50 = -42026;
	volatile int64_t x51 = 1302LL;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t10 = 31637;

	t10 = (((x49<=x50)<x51)-x52);

	if (t10 != -254) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 10U;
	static int32_t x54 = -1;
	int16_t x55 = 0;
	static int32_t t11 = -3715;

	t11 = (((x53<=x54)<x55)-x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x59 = INT32_MIN;
	int32_t t12 = -29079797;

	t12 = (((x57<=x58)<x59)-x60);

	if (t12 != -5025) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MAX;
	uint8_t x63 = 21U;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 10667138;

	t13 = (((x61<=x62)<x63)-x64);

	if (t13 != 32769) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	uint32_t x66 = 12827232U;
	int64_t x67 = 1080586311462178LL;
	static int32_t x68 = 105;
	static int32_t t14 = -3;

	t14 = (((x65<=x66)<x67)-x68);

	if (t14 != -104) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MAX;
	int64_t x71 = -1817876753405929162LL;
	int16_t x72 = 2;
	volatile int32_t t15 = 7366;

	t15 = (((x69<=x70)<x71)-x72);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x75 = 196LLU;
	volatile int32_t t16 = 116656;

	t16 = (((x73<=x74)<x75)-x76);

	if (t16 != -5594) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 221U;
	int8_t x80 = -1;
	static int32_t t17 = -19;

	t17 = (((x77<=x78)<x79)-x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	int8_t x84 = -11;

	t18 = (((x81<=x82)<x83)-x84);

	if (t18 != 12) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = 89641;
	static uint32_t x87 = 742U;
	int16_t x88 = -1;
	int32_t t19 = -194709;

	t19 = (((x85<=x86)<x87)-x88);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x94 = 382;
	int16_t x95 = INT16_MAX;
	int64_t t20 = -119359404844228LL;

	t20 = (((x93<=x94)<x95)-x96);

	if (t20 != 4038261LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = INT64_MIN;
	static volatile uint32_t x99 = 2555U;
	static volatile int32_t t21 = -121;

	t21 = (((x97<=x98)<x99)-x100);

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x101 = 918996U;
	static uint16_t x102 = UINT16_MAX;
	int64_t x103 = INT64_MAX;
	int64_t x104 = 3864805645LL;
	static int64_t t22 = -4LL;

	t22 = (((x101<=x102)<x103)-x104);

	if (t22 != -3864805644LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x105 = UINT32_MAX;
	volatile int64_t x107 = -1LL;
	uint32_t x108 = UINT32_MAX;

	t23 = (((x105<=x106)<x107)-x108);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	static int16_t x110 = INT16_MIN;
	volatile uint32_t x111 = 1498853616U;
	int16_t x112 = 2;
	volatile int32_t t24 = 2808;

	t24 = (((x109<=x110)<x111)-x112);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x114 = -2;
	uint64_t x115 = 17054011121LLU;
	uint32_t x116 = 1568499880U;
	static uint32_t t25 = 8317U;

	t25 = (((x113<=x114)<x115)-x116);

	if (t25 != 2726467417U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x118 = UINT16_MAX;
	volatile int16_t x119 = 1151;
	static int64_t x120 = -1LL;
	int64_t t26 = 3671236205553200LL;

	t26 = (((x117<=x118)<x119)-x120);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	static volatile int64_t x124 = 50359240084LL;
	volatile int64_t t27 = -16496943540373912LL;

	t27 = (((x121<=x122)<x123)-x124);

	if (t27 != -50359240083LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -1;
	volatile int64_t x127 = INT64_MIN;
	uint16_t x128 = 914U;

	t28 = (((x125<=x126)<x127)-x128);

	if (t28 != -914) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = -1;
	int32_t x131 = -290;
	int16_t x132 = 3;
	int32_t t29 = -70382;

	t29 = (((x129<=x130)<x131)-x132);

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1LL;
	volatile int16_t x134 = 1;
	int64_t x135 = -1LL;
	static uint32_t x136 = 1840921309U;
	static uint32_t t30 = 855U;

	t30 = (((x133<=x134)<x135)-x136);

	if (t30 != 2454045987U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MAX;
	static uint8_t x140 = 29U;
	static int32_t t31 = -29;

	t31 = (((x137<=x138)<x139)-x140);

	if (t31 != -28) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x142 = 40357315LL;
	volatile int32_t x144 = INT32_MAX;
	volatile int32_t t32 = 55796431;

	t32 = (((x141<=x142)<x143)-x144);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 1;
	volatile int16_t x147 = INT16_MAX;
	uint64_t x148 = 129964259512640616LLU;
	uint64_t t33 = 1017356270LLU;

	t33 = (((x145<=x146)<x147)-x148);

	if (t33 != 18316779814196911001LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 23U;
	int8_t x150 = -1;
	static int64_t x152 = -1LL;
	int64_t t34 = 131567917LL;

	t34 = (((x149<=x150)<x151)-x152);

	if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x153 = 15;
	volatile uint64_t x154 = 17495280067981LLU;
	int32_t x155 = INT32_MIN;
	int32_t x156 = 1280012;
	int32_t t35 = 7;

	t35 = (((x153<=x154)<x155)-x156);

	if (t35 != -1280012) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 3U;
	static int64_t x162 = -1LL;
	static int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t36 = 267119479;

	t36 = (((x161<=x162)<x163)-x164);

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = -1;
	int64_t x166 = 3153904659180802LL;
	int64_t x167 = INT64_MIN;
	static uint16_t x168 = UINT16_MAX;

	t37 = (((x165<=x166)<x167)-x168);

	if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = 1730636945419LL;
	uint32_t x171 = 927196066U;
	volatile uint64_t x172 = UINT64_MAX;

	t38 = (((x169<=x170)<x171)-x172);

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -1LL;
	static uint8_t x174 = 15U;
	volatile int64_t x175 = INT64_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t39 = 18847;

	t39 = (((x173<=x174)<x175)-x176);

	if (t39 != -65534) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x178 = INT64_MIN;
	int64_t x179 = 2364LL;
	uint8_t x180 = UINT8_MAX;

	t40 = (((x177<=x178)<x179)-x180);

	if (t40 != -254) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1LL;
	uint32_t x182 = 114015U;
	int64_t x183 = 85812LL;
	uint8_t x184 = 0U;
	static volatile int32_t t41 = 29547186;

	t41 = (((x181<=x182)<x183)-x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x186 = INT32_MIN;
	static volatile uint16_t x187 = 25U;
	uint32_t x188 = 2583582U;
	static uint32_t t42 = 2U;

	t42 = (((x185<=x186)<x187)-x188);

	if (t42 != 4292383715U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x191 = UINT16_MAX;
	volatile int32_t t43 = -12387;

	t43 = (((x189<=x190)<x191)-x192);

	if (t43 != 13) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MAX;
	uint16_t x194 = 1535U;
	volatile uint32_t x196 = 3335898U;
	uint32_t t44 = 6U;

	t44 = (((x193<=x194)<x195)-x196);

	if (t44 != 4291631398U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = -1;
	uint8_t x199 = UINT8_MAX;
	static int16_t x200 = -1;
	int32_t t45 = 1947037;

	t45 = (((x197<=x198)<x199)-x200);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x201 = 12128LLU;
	volatile uint64_t x202 = 4592287LLU;
	uint16_t x203 = 0U;
	int8_t x204 = 15;
	static volatile int32_t t46 = 1017340251;

	t46 = (((x201<=x202)<x203)-x204);

	if (t46 != -15) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 870343896939710242LLU;
	static int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	int32_t x208 = 1758181;
	static int32_t t47 = -30518;

	t47 = (((x205<=x206)<x207)-x208);

	if (t47 != -1758181) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = 21U;
	volatile int32_t x210 = -1;
	int8_t x212 = -57;
	volatile int32_t t48 = 30;

	t48 = (((x209<=x210)<x211)-x212);

	if (t48 != 57) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x214 = 510;
	uint8_t x215 = 25U;
	static volatile int32_t t49 = -221;

	t49 = (((x213<=x214)<x215)-x216);

	if (t49 != -9086) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 5U;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = -1;
	volatile int32_t t50 = 326708;

	t50 = (((x217<=x218)<x219)-x220);

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x222 = -1306576;
	static volatile uint16_t x223 = 1U;
	volatile uint64_t t51 = 1LLU;

	t51 = (((x221<=x222)<x223)-x224);

	if (t51 != 18446743889245767470LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x226 = 228710119808LLU;
	uint32_t x227 = UINT32_MAX;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t52 = 247348130;

	t52 = (((x225<=x226)<x227)-x228);

	if (t52 != 32769) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	volatile int8_t x230 = INT8_MIN;
	static volatile int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;

	t53 = (((x229<=x230)<x231)-x232);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = INT32_MAX;
	static int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	static int64_t x236 = INT64_MAX;

	t54 = (((x233<=x234)<x235)-x236);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x237 = 0U;
	int64_t x238 = -1LL;
	volatile uint8_t x239 = UINT8_MAX;
	static int32_t x240 = 28926;
	volatile int32_t t55 = -5309295;

	t55 = (((x237<=x238)<x239)-x240);

	if (t55 != -28925) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x242 = 276600524552564LLU;
	int32_t x243 = -1;
	uint64_t t56 = 149LLU;

	t56 = (((x241<=x242)<x243)-x244);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = 305LLU;
	int8_t x246 = INT8_MAX;
	volatile uint32_t x248 = 2U;

	t57 = (((x245<=x246)<x247)-x248);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x251 = 66487750U;

	t58 = (((x249<=x250)<x251)-x252);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 53U;
	uint8_t x260 = 49U;
	int32_t t59 = 357;

	t59 = (((x257<=x258)<x259)-x260);

	if (t59 != -48) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x262 = 22U;
	int16_t x263 = INT16_MIN;
	static int64_t x264 = 106494821376LL;
	int64_t t60 = -57297623876490338LL;

	t60 = (((x261<=x262)<x263)-x264);

	if (t60 != -106494821376LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x267 = 3U;
	int32_t t61 = -124474300;

	t61 = (((x265<=x266)<x267)-x268);

	if (t61 != 3258351) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MIN;
	int32_t x271 = -456350763;
	static volatile int32_t x272 = INT32_MAX;
	int32_t t62 = 645;

	t62 = (((x269<=x270)<x271)-x272);

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 1U;
	uint32_t x274 = 399382022U;
	static uint16_t x276 = 34U;
	int32_t t63 = 191;

	t63 = (((x273<=x274)<x275)-x276);

	if (t63 != -34) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -60;
	static int16_t x278 = 31;
	volatile uint8_t x279 = 1U;

	t64 = (((x277<=x278)<x279)-x280);

	if (t64 != -58) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x282 = -1;
	uint8_t x283 = 79U;
	static int32_t x284 = INT32_MAX;
	volatile int32_t t65 = 36979;

	t65 = (((x281<=x282)<x283)-x284);

	if (t65 != -2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x285 = -1;
	int16_t x286 = -1;
	uint32_t x287 = UINT32_MAX;
	volatile int32_t x288 = 74382355;
	volatile int32_t t66 = -2198;

	t66 = (((x285<=x286)<x287)-x288);

	if (t66 != -74382354) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = -1;
	int16_t x291 = 0;
	int8_t x292 = 23;
	static volatile int32_t t67 = 205607;

	t67 = (((x289<=x290)<x291)-x292);

	if (t67 != -23) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	int64_t x295 = 94544LL;
	static int32_t x296 = INT32_MAX;
	static int32_t t68 = 34746851;

	t68 = (((x293<=x294)<x295)-x296);

	if (t68 != -2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x297 = 11U;
	uint8_t x298 = 7U;
	static int16_t x300 = -1;
	int32_t t69 = -14;

	t69 = (((x297<=x298)<x299)-x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -158516198;
	int16_t x302 = -1;
	int8_t x303 = INT8_MAX;
	volatile int32_t x304 = -27288;

	t70 = (((x301<=x302)<x303)-x304);

	if (t70 != 27289) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MAX;
	int16_t x308 = -912;
	static volatile int32_t t71 = -8;

	t71 = (((x305<=x306)<x307)-x308);

	if (t71 != 913) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 58144166;
	int64_t x310 = 248113806565460LL;
	static uint16_t x312 = 171U;
	static volatile int32_t t72 = 9;

	t72 = (((x309<=x310)<x311)-x312);

	if (t72 != -170) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	int32_t x315 = -1;
	uint8_t x316 = 57U;
	static int32_t t73 = -8;

	t73 = (((x313<=x314)<x315)-x316);

	if (t73 != -57) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = 316;
	static int8_t x318 = 9;
	int32_t x319 = 3;
	static uint8_t x320 = 75U;
	int32_t t74 = -29109;

	t74 = (((x317<=x318)<x319)-x320);

	if (t74 != -74) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x321 = 1678LLU;
	uint8_t x322 = UINT8_MAX;
	int64_t x324 = 2LL;
	int64_t t75 = -16270116452173LL;

	t75 = (((x321<=x322)<x323)-x324);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x326 = 21;
	int8_t x327 = INT8_MAX;

	t76 = (((x325<=x326)<x327)-x328);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 6240LLU;
	volatile int8_t x332 = -1;
	volatile int32_t t77 = -109;

	t77 = (((x329<=x330)<x331)-x332);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = 2036;
	volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = 8006418044638122LLU;
	static int64_t x336 = -1LL;
	int64_t t78 = -155747LL;

	t78 = (((x333<=x334)<x335)-x336);

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x337 = 0LLU;
	int8_t x338 = 1;
	uint32_t x339 = 17U;
	int8_t x340 = INT8_MIN;
	int32_t t79 = 14282;

	t79 = (((x337<=x338)<x339)-x340);

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 462U;
	volatile int32_t x343 = -97873100;
	static volatile uint8_t x344 = 4U;

	t80 = (((x341<=x342)<x343)-x344);

	if (t80 != -4) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = -28;
	int8_t x346 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t81 = -128669352;

	t81 = (((x345<=x346)<x347)-x348);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = UINT16_MAX;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = UINT8_MAX;
	static volatile int8_t x352 = -1;

	t82 = (((x349<=x350)<x351)-x352);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x354 = INT32_MAX;
	static uint16_t x355 = 11310U;
	uint8_t x356 = 3U;
	volatile int32_t t83 = 580701344;

	t83 = (((x353<=x354)<x355)-x356);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	uint8_t x359 = 0U;
	uint32_t x360 = UINT32_MAX;
	static uint32_t t84 = 49348U;

	t84 = (((x357<=x358)<x359)-x360);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x365 = UINT16_MAX;
	static int16_t x366 = INT16_MAX;
	volatile uint64_t x367 = 251308LLU;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t85 = -3;

	t85 = (((x365<=x366)<x367)-x368);

	if (t85 != 32769) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = 286LLU;
	int16_t x371 = INT16_MAX;
	int8_t x372 = 4;

	t86 = (((x369<=x370)<x371)-x372);

	if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x373 = -2;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MAX;
	int32_t t87 = -797701173;

	t87 = (((x373<=x374)<x375)-x376);

	if (t87 != -32766) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -1LL;
	volatile uint64_t x382 = 221846094047517LLU;
	int64_t x383 = INT64_MAX;
	uint32_t t88 = 1U;

	t88 = (((x381<=x382)<x383)-x384);

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = INT8_MIN;

	t89 = (((x389<=x390)<x391)-x392);

	if (t89 != 129) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x394 = 7;
	uint8_t x395 = 13U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t90 = 6;

	t90 = (((x393<=x394)<x395)-x396);

	if (t90 != 129) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int8_t x399 = -1;
	static uint64_t x400 = 2652362851620247LLU;
	volatile uint64_t t91 = 15779LLU;

	t91 = (((x397<=x398)<x399)-x400);

	if (t91 != 18444091710857931369LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 2680607LLU;
	int16_t x402 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;
	int32_t t92 = 160;

	t92 = (((x401<=x402)<x403)-x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x406 = -4;
	static volatile uint64_t t93 = 6447LLU;

	t93 = (((x405<=x406)<x407)-x408);

	if (t93 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x409 = 61U;
	int16_t x410 = INT16_MIN;
	static uint16_t x411 = UINT16_MAX;

	t94 = (((x409<=x410)<x411)-x412);

	if (t94 != -26) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = 0U;
	int8_t x414 = -2;
	volatile int32_t x415 = -1;
	volatile int64_t x416 = 869632420383425LL;
	static volatile int64_t t95 = -631440180LL;

	t95 = (((x413<=x414)<x415)-x416);

	if (t95 != -869632420383425LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x418 = INT8_MAX;
	int32_t x419 = -63732;
	int8_t x420 = INT8_MIN;
	static int32_t t96 = -54;

	t96 = (((x417<=x418)<x419)-x420);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x422 = 7115320107LLU;
	static volatile int32_t x423 = INT32_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x421<=x422)<x423)-x424);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MAX;
	uint32_t x430 = UINT32_MAX;
	uint64_t x431 = 45LLU;
	uint64_t x432 = 16LLU;
	static volatile uint64_t t98 = 45501102271972LLU;

	t98 = (((x429<=x430)<x431)-x432);

	if (t98 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x437 = -3234002577640506212LL;
	uint64_t x438 = 4533699258922872462LLU;
	int32_t x439 = INT32_MAX;
	uint8_t x440 = UINT8_MAX;
	int32_t t99 = -10;

	t99 = (((x437<=x438)<x439)-x440);

	if (t99 != -254) { NG(); } else { ; }
	
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

