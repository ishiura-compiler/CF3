#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = 4369787;
static int16_t x6 = INT16_MIN;
uint8_t x7 = 0U;
static int64_t t1 = -184393518535LL;
uint16_t x11 = 0U;
uint64_t x13 = UINT64_MAX;
volatile int16_t x17 = INT16_MIN;
volatile int64_t t4 = -542907986992728887LL;
static volatile uint64_t x22 = UINT64_MAX;
volatile int8_t x26 = 0;
volatile int64_t t7 = 274743905854849745LL;
static uint64_t t8 = 8848269LLU;
int32_t x41 = -1683;
volatile int8_t x46 = INT8_MIN;
uint16_t x47 = UINT16_MAX;
uint8_t x48 = 14U;
uint32_t x49 = UINT32_MAX;
volatile int8_t x52 = -1;
volatile uint32_t x53 = 144376086U;
int16_t x55 = INT16_MIN;
volatile int64_t t13 = -12LL;
volatile int8_t x58 = INT8_MAX;
volatile uint32_t x60 = 2866U;
int32_t x62 = INT32_MIN;
uint8_t x63 = 1U;
uint64_t t16 = 68078627390771485LLU;
int64_t x72 = INT64_MIN;
volatile uint32_t t18 = 36933U;
int64_t t20 = 116750LL;
int8_t x91 = -8;
static uint16_t x109 = UINT16_MAX;
static int8_t x113 = -2;
volatile int16_t x115 = 612;
int8_t x116 = 1;
uint8_t x122 = UINT8_MAX;
uint16_t x128 = UINT16_MAX;
static int32_t x131 = INT32_MAX;
int64_t t31 = -5169579LL;
int16_t x134 = INT16_MIN;
uint8_t x138 = 7U;
volatile int8_t x139 = INT8_MAX;
static uint16_t x140 = UINT16_MAX;
volatile int32_t t33 = 110418903;
static int64_t t34 = 22543877626LL;
int64_t x156 = INT64_MIN;
static int32_t x160 = 10760;
volatile int32_t t37 = -31456;
volatile uint8_t x163 = 0U;
volatile int64_t t38 = -310LL;
uint64_t x170 = 1LLU;
static uint8_t x174 = 13U;
int64_t x175 = INT64_MIN;
static uint8_t x178 = 3U;
volatile int8_t x180 = 2;
volatile int64_t t41 = 318127701262LL;
static int16_t x190 = 34;
volatile int8_t x191 = INT8_MIN;
int64_t x206 = 446963139205LL;
int8_t x209 = INT8_MIN;
static volatile uint16_t x213 = UINT16_MAX;
static int32_t t50 = -2640;
uint32_t x217 = UINT32_MAX;
static uint32_t x220 = 28780U;
static int64_t t53 = -2211273LL;
uint32_t x234 = 1859345457U;
static volatile int64_t t55 = 120283536188LL;
volatile int16_t x240 = INT16_MIN;
volatile int32_t t56 = 1125;
int8_t x244 = -1;
int8_t x245 = INT8_MIN;
static uint32_t x249 = 816U;
static uint16_t x250 = 251U;
volatile uint32_t t59 = 31U;
int32_t t60 = -754217083;
int8_t x265 = INT8_MAX;
uint32_t x269 = 285313506U;
int16_t x287 = INT16_MIN;
volatile int64_t t67 = -548474931260LL;
int64_t x289 = INT64_MAX;
volatile uint64_t x292 = 502110LLU;
volatile int8_t x298 = INT8_MIN;
volatile int32_t x301 = INT32_MIN;
int64_t x303 = INT64_MAX;
int8_t x306 = INT8_MAX;
static int32_t x307 = INT32_MIN;
volatile uint64_t t73 = 169399LLU;
int64_t x313 = -8590397385191LL;
int16_t x324 = -1;
volatile int32_t x325 = -1;
static int64_t x335 = INT64_MIN;
volatile uint8_t x341 = 1U;
uint16_t x349 = 3346U;
int8_t x364 = -30;
uint32_t x366 = UINT32_MAX;
static int32_t x367 = INT32_MAX;
int32_t x369 = -365;
uint64_t t88 = 903729918240LLU;
static int64_t x374 = -8268LL;
int8_t x375 = INT8_MIN;
int16_t x378 = 15496;
int32_t x379 = 14511578;
volatile int8_t x381 = -1;
int16_t x389 = -1;
int32_t x395 = 800258879;
static int16_t x402 = INT16_MIN;
static uint8_t x408 = 3U;
uint8_t x409 = UINT8_MAX;
static int32_t x419 = -228361204;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	volatile int64_t x2 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -1LL;

	t0 = ((x1|x2)/(x3^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x8 = -1LL;

	t1 = ((x5|x6)/(x7^x8));

	if (t1 != 32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = UINT8_MAX;
	volatile int64_t x12 = INT64_MAX;
	volatile int64_t t2 = -2778002323552LL;

	t2 = ((x9|x10)/(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 1358966506LLU;

	t3 = ((x13|x14)/(x15^x16));

	if (t3 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MAX;

	t4 = ((x17|x18)/(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint8_t x23 = 4U;
	uint8_t x24 = 5U;
	static volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x21|x22)/(x23^x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static volatile int32_t x27 = -685092;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x25|x26)/(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	int64_t x30 = 137LL;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;

	t7 = ((x29|x30)/(x31^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = -104;
	int8_t x34 = -58;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 211643LLU;

	t8 = ((x33|x34)/(x35^x36));

	if (t8 != 4295178950LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	static volatile int16_t x38 = -1;
	static int64_t x39 = INT64_MIN;
	int16_t x40 = -1;
	volatile int64_t t9 = -230198659271137140LL;

	t9 = ((x37|x38)/(x39^x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = UINT32_MAX;
	static int8_t x43 = INT8_MAX;
	int32_t x44 = 22896083;
	volatile uint32_t t10 = 36054879U;

	t10 = ((x41|x42)/(x43^x44));

	if (t10 != 187U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int64_t t11 = 1549134868051LL;

	t11 = ((x45|x46)/(x47^x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 323U;
	int8_t x51 = -17;
	static volatile uint32_t t12 = 3880868U;

	t12 = ((x49|x50)/(x51^x52));

	if (t12 != 268435455U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MAX;
	volatile int64_t x56 = 33904712247LL;

	t13 = ((x53|x54)/(x55^x56));

	if (t13 != -272038164LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int16_t x59 = INT16_MAX;
	static volatile uint32_t t14 = 408763U;

	t14 = ((x57|x58)/(x59^x60));

	if (t14 != 143639U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 53U;
	int8_t x64 = 61;
	int32_t t15 = 3241317;

	t15 = ((x61|x62)/(x63^x64));

	if (t15 != -35791393) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	volatile uint64_t x66 = 28885124674591776LLU;
	static int16_t x67 = INT16_MAX;
	uint8_t x68 = 1U;

	t16 = ((x65|x66)/(x67^x68));

	if (t16 != 562984315256960LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 848;
	uint64_t x70 = 3715750018970LLU;
	int16_t x71 = INT16_MAX;
	uint64_t t17 = 2730518685889485LLU;

	t17 = ((x69|x70)/(x71^x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 204;
	uint8_t x74 = 11U;
	static uint32_t x75 = 58076U;
	volatile int8_t x76 = INT8_MAX;

	t18 = ((x73|x74)/(x75^x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -547712227253708134LL;
	volatile int32_t x78 = 7036014;
	uint64_t x79 = 67389122609LLU;
	volatile int64_t x80 = INT64_MAX;
	volatile uint64_t t19 = 323138LLU;

	t19 = ((x77|x78)/(x79^x80));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	volatile uint32_t x82 = 26390072U;
	int64_t x83 = -1LL;
	int16_t x84 = -10458;

	t20 = ((x81|x82)/(x83^x84));

	if (t20 != 205363LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile int64_t x86 = 30585389LL;
	static volatile int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;
	volatile int64_t t21 = -105124LL;

	t21 = ((x85|x86)/(x87^x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int8_t x90 = -13;
	int8_t x92 = 16;
	volatile int32_t t22 = 141413630;

	t22 = ((x89|x90)/(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1;
	int64_t x95 = -29254LL;
	volatile int8_t x96 = 0;
	volatile int64_t t23 = 19475645260561531LL;

	t23 = ((x93|x94)/(x95^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 275161731386460LLU;
	volatile uint64_t x98 = 2332746523797873434LLU;
	static volatile uint8_t x99 = 7U;
	int32_t x100 = INT32_MAX;
	volatile uint64_t t24 = 58089944LLU;

	t24 = ((x97|x98)/(x99^x100));

	if (t24 != 1086324153LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 7197;
	int64_t x106 = -1LL;
	static int8_t x107 = 0;
	int32_t x108 = -6582;
	volatile int64_t t25 = 61LL;

	t25 = ((x105|x106)/(x107^x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = -108;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = -71;

	t26 = ((x109|x110)/(x111^x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x114 = INT32_MIN;
	static volatile int32_t t27 = 401190;

	t27 = ((x113|x114)/(x115^x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = -52;
	int16_t x118 = 467;
	volatile uint32_t x119 = 7755U;
	volatile int8_t x120 = INT8_MIN;
	volatile uint32_t t28 = 254U;

	t28 = ((x117|x118)/(x119^x120));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int16_t x123 = 1;
	int32_t x124 = INT32_MIN;
	volatile uint32_t t29 = 782410U;

	t29 = ((x121|x122)/(x123^x124));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x125 = 8232729U;
	int8_t x126 = INT8_MAX;
	int32_t x127 = 23822;
	uint32_t t30 = 1487714U;

	t30 = ((x125|x126)/(x127^x128));

	if (t30 != 197U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x129 = 748U;
	int8_t x130 = -1;
	int64_t x132 = INT64_MIN;

	t31 = ((x129|x130)/(x131^x132));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x133 = UINT32_MAX;
	volatile uint32_t x135 = UINT32_MAX;
	uint64_t x136 = 836622661614LLU;
	uint64_t t32 = 34636953017LLU;

	t32 = ((x133|x134)/(x135^x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = UINT16_MAX;

	t33 = ((x137|x138)/(x139^x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	int8_t x146 = 39;
	volatile int64_t x147 = -1347053810889490401LL;
	int8_t x148 = INT8_MIN;

	t34 = ((x145|x146)/(x147^x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -100;
	volatile int8_t x150 = 7;
	volatile int16_t x151 = INT16_MIN;
	int8_t x152 = -1;
	volatile int32_t t35 = 0;

	t35 = ((x149|x150)/(x151^x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	static int32_t x154 = INT32_MIN;
	uint64_t x155 = 1013599041633431LLU;
	volatile uint64_t t36 = 25050604LLU;

	t36 = ((x153|x154)/(x155^x156));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	static int16_t x158 = -1;
	int8_t x159 = -49;

	t37 = ((x157|x158)/(x159^x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MAX;
	static volatile uint16_t x162 = UINT16_MAX;
	volatile int64_t x164 = INT64_MIN;

	t38 = ((x161|x162)/(x163^x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x169 = INT64_MAX;
	int64_t x171 = 30LL;
	int32_t x172 = INT32_MAX;
	volatile uint64_t t39 = 62279LLU;

	t39 = ((x169|x170)/(x171^x172));

	if (t39 != 4294967358LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = INT64_MIN;
	int64_t x176 = -3235LL;
	static int64_t t40 = 40245935LL;

	t40 = ((x173|x174)/(x175^x176));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 0U;
	int64_t x179 = -179625015634LL;

	t41 = ((x177|x178)/(x179^x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = -11;
	volatile uint32_t x182 = 139U;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MAX;
	int64_t t42 = -3821340647801LL;

	t42 = ((x181|x182)/(x183^x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = 70U;
	static int8_t x187 = -1;
	int64_t x188 = INT64_MAX;
	static int64_t t43 = -893267073312664LL;

	t43 = ((x185|x186)/(x187^x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = -2467;
	static volatile uint32_t x192 = 2777552U;
	static volatile uint32_t t44 = 1954U;

	t44 = ((x189|x190)/(x191^x192));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x193 = 7U;
	int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	uint32_t x196 = 26876U;
	volatile int64_t t45 = 26LL;

	t45 = ((x193|x194)/(x195^x196));

	if (t45 != 2147497026LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = INT32_MAX;
	volatile int32_t x198 = INT32_MAX;
	int8_t x199 = 15;
	volatile int8_t x200 = INT8_MIN;
	int32_t t46 = 30;

	t46 = ((x197|x198)/(x199^x200));

	if (t46 != -19004280) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MAX;
	uint16_t x203 = 419U;
	uint32_t x204 = 183567U;
	uint32_t t47 = 5U;

	t47 = ((x201|x202)/(x203^x204));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MIN;
	static int64_t x207 = -1LL;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t48 = 4453LL;

	t48 = ((x205|x206)/(x207^x208));

	if (t48 != 28395LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = -709573851180062374LL;
	int8_t x211 = -1;
	uint64_t x212 = 480833783590LLU;
	volatile uint64_t t49 = 39005853713LLU;

	t49 = ((x209|x210)/(x211^x212));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = INT16_MAX;
	int32_t x215 = -1;
	volatile uint8_t x216 = 20U;

	t50 = ((x213|x214)/(x215^x216));

	if (t50 != -3120) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	volatile int64_t t51 = -1533LL;

	t51 = ((x217|x218)/(x219^x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x221 = 33285449U;
	int32_t x222 = -5375232;
	static int16_t x223 = INT16_MIN;
	volatile int32_t x224 = INT32_MIN;
	volatile uint32_t t52 = 1321528U;

	t52 = ((x221|x222)/(x223^x224));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	static int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	static int32_t x228 = INT32_MIN;

	t53 = ((x225|x226)/(x227^x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 42413U;
	volatile uint64_t x230 = UINT64_MAX;
	int64_t x231 = -1LL;
	static volatile uint16_t x232 = UINT16_MAX;
	uint64_t t54 = 61706888770LLU;

	t54 = ((x229|x230)/(x231^x232));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	volatile int64_t x235 = -338876371476LL;
	int16_t x236 = 1468;

	t55 = ((x233|x234)/(x235^x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x237 = 1;
	int8_t x238 = 3;
	static uint16_t x239 = 2487U;

	t56 = ((x237|x238)/(x239^x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 46046726U;
	uint64_t x242 = 63090LLU;
	static int64_t x243 = INT64_MAX;
	uint64_t t57 = 2003LLU;

	t57 = ((x241|x242)/(x243^x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x246 = 37396LLU;
	int16_t x247 = 5;
	uint8_t x248 = UINT8_MAX;
	static uint64_t t58 = 2647205LLU;

	t58 = ((x245|x246)/(x247^x248));

	if (t58 != 73786976294838206LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x251 = UINT32_MAX;
	static int32_t x252 = INT32_MIN;

	t59 = ((x249|x250)/(x251^x252));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	int8_t x255 = 3;
	volatile int8_t x256 = INT8_MIN;

	t60 = ((x253|x254)/(x255^x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = INT64_MAX;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	static int32_t x260 = INT32_MIN;
	int64_t t61 = -4194LL;

	t61 = ((x257|x258)/(x259^x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x262 = 203021635LLU;
	uint64_t x263 = 12372911LLU;
	int8_t x264 = -1;
	uint64_t t62 = 24703554895685LLU;

	t62 = ((x261|x262)/(x263^x264));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MAX;
	int16_t x268 = INT16_MAX;
	int64_t t63 = 1LL;

	t63 = ((x265|x266)/(x267^x268));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x270 = INT32_MAX;
	int64_t x271 = INT64_MAX;
	uint32_t x272 = 4355378U;
	int64_t t64 = -97173610LL;

	t64 = ((x269|x270)/(x271^x272));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = -363154952820275176LL;
	uint16_t x274 = 204U;
	uint8_t x275 = 5U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t65 = 5662LLU;

	t65 = ((x273|x274)/(x275^x276));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	volatile int8_t x279 = -17;
	volatile int64_t x280 = INT64_MIN;
	volatile int64_t t66 = -15072LL;

	t66 = ((x277|x278)/(x279^x280));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	uint8_t x286 = 1U;
	static volatile int16_t x288 = 391;

	t67 = ((x285|x286)/(x287^x288));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x290 = UINT64_MAX;
	int16_t x291 = INT16_MIN;
	volatile uint64_t t68 = 12147672903922974LLU;

	t68 = ((x289|x290)/(x291^x292));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 12LLU;
	static uint32_t x296 = 32504747U;
	volatile uint64_t t69 = 213532132949LLU;

	t69 = ((x293|x294)/(x295^x296));

	if (t69 != 567509303910LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = -1;
	int32_t x299 = INT32_MIN;
	uint32_t x300 = 684U;
	volatile uint32_t t70 = 163818929U;

	t70 = ((x297|x298)/(x299^x300));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x302 = UINT64_MAX;
	static int32_t x304 = INT32_MAX;
	static uint64_t t71 = 330410273515445725LLU;

	t71 = ((x301|x302)/(x303^x304));

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MIN;
	volatile int8_t x308 = -1;
	volatile int32_t t72 = -1;

	t72 = ((x305|x306)/(x307^x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x309 = 13232U;
	volatile int8_t x310 = -1;
	static volatile int32_t x311 = INT32_MAX;
	uint64_t x312 = 496172399796862LLU;

	t73 = ((x309|x310)/(x311^x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x314 = -4;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = UINT8_MAX;
	static int64_t t74 = -1LL;

	t74 = ((x313|x314)/(x315^x316));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MAX;
	uint32_t x318 = 0U;
	static int64_t x319 = INT64_MIN;
	uint16_t x320 = 15U;
	volatile int64_t t75 = -17407331145042300LL;

	t75 = ((x317|x318)/(x319^x320));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = -25;
	int8_t x322 = -1;
	uint8_t x323 = 62U;
	volatile int32_t t76 = 14113;

	t76 = ((x321|x322)/(x323^x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x326 = -13;
	volatile int32_t x327 = INT32_MIN;
	uint32_t x328 = 3U;
	volatile uint32_t t77 = 1468740427U;

	t77 = ((x325|x326)/(x327^x328));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = -579818672225LL;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -1237099LL;
	static volatile int8_t x332 = -1;
	int64_t t78 = -14081786679226943LL;

	t78 = ((x329|x330)/(x331^x332));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = 543;
	int8_t x334 = -1;
	int32_t x336 = 3159180;
	int64_t t79 = 1892559404072LL;

	t79 = ((x333|x334)/(x335^x336));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MAX;
	static int64_t x339 = -112745LL;
	volatile uint32_t x340 = UINT32_MAX;
	int64_t t80 = 1507176993LL;

	t80 = ((x337|x338)/(x339^x340));

	if (t80 != -2147540021LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x342 = INT64_MIN;
	uint64_t x343 = 11314063859468135LLU;
	volatile uint16_t x344 = 268U;
	volatile uint64_t t81 = 56621646472LLU;

	t81 = ((x341|x342)/(x343^x344));

	if (t81 != 815LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x345 = 3U;
	volatile int64_t x346 = 4130797757198LL;
	uint32_t x347 = 7082284U;
	static volatile int16_t x348 = INT16_MAX;
	int64_t t82 = 4164329974950435LL;

	t82 = ((x345|x346)/(x347^x348));

	if (t82 != 581290LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	uint32_t x352 = 0U;
	uint32_t t83 = 300152U;

	t83 = ((x349|x350)/(x351^x352));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = INT32_MIN;
	static int32_t x354 = INT32_MAX;
	volatile int64_t x355 = 1151LL;
	int64_t x356 = INT64_MAX;
	int64_t t84 = -2346952585547LL;

	t84 = ((x353|x354)/(x355^x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int16_t x358 = INT16_MAX;
	int32_t x359 = -5832;
	static int64_t x360 = -1LL;
	int64_t t85 = 4798561438358LL;

	t85 = ((x357|x358)/(x359^x360));

	if (t85 != 11LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MIN;
	volatile uint8_t x363 = 1U;
	volatile int32_t t86 = 4070315;

	t86 = ((x361|x362)/(x363^x364));

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x365 = 3094935U;
	uint16_t x368 = UINT16_MAX;
	volatile uint32_t t87 = 773U;

	t87 = ((x365|x366)/(x367^x368));

	if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x370 = -1LL;
	static int32_t x371 = -1;
	uint64_t x372 = 743LLU;

	t88 = ((x369|x370)/(x371^x372));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x376 = INT16_MIN;
	static int64_t t89 = 312896171LL;

	t89 = ((x373|x374)/(x375^x376));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 2185U;
	int8_t x380 = 3;
	uint32_t t90 = 3U;

	t90 = ((x377|x378)/(x379^x380));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 160U;
	static uint32_t t91 = 61197226U;

	t91 = ((x381|x382)/(x383^x384));

	if (t91 != 65697U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -1337;
	uint16_t x386 = UINT16_MAX;
	volatile int16_t x387 = -1;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t92 = -4976;

	t92 = ((x385|x386)/(x387^x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x390 = UINT8_MAX;
	int64_t x391 = INT64_MIN;
	int8_t x392 = 3;
	int64_t t93 = 22290683088512LL;

	t93 = ((x389|x390)/(x391^x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x393 = -1;
	static int8_t x394 = INT8_MIN;
	uint8_t x396 = UINT8_MAX;
	int32_t t94 = -275;

	t94 = ((x393|x394)/(x395^x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x397 = 13U;
	static volatile int8_t x398 = INT8_MAX;
	int64_t x399 = INT64_MAX;
	uint16_t x400 = 1U;
	int64_t t95 = 82796364291907LL;

	t95 = ((x397|x398)/(x399^x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = 72335;
	int32_t x403 = INT32_MIN;
	volatile uint64_t x404 = 17430986120LLU;
	volatile uint64_t t96 = 6550281637660071LLU;

	t96 = ((x401|x402)/(x403^x404));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int64_t x406 = 7116LL;
	static int8_t x407 = INT8_MIN;
	volatile int64_t t97 = 592238030666LL;

	t97 = ((x405|x406)/(x407^x408));

	if (t97 != -524LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x410 = INT16_MIN;
	volatile uint32_t x411 = 372202U;
	uint32_t x412 = 10U;
	uint32_t t98 = 1903U;

	t98 = ((x409|x410)/(x411^x412));

	if (t98 != 11539U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = 2;
	int32_t x418 = 19731;
	int16_t x420 = -3;
	volatile int32_t t99 = -8174185;

	t99 = ((x417|x418)/(x419^x420));

	if (t99 != 0) { NG(); } else { ; }
	
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

