#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = UINT32_MAX;
volatile uint32_t x6 = 2U;
uint32_t t2 = 32670842U;
volatile uint64_t x17 = 56269526667212LLU;
static int8_t x23 = INT8_MAX;
int64_t x25 = INT64_MIN;
int32_t x36 = 0;
int64_t t8 = INT64_MIN;
volatile uint8_t x41 = 3U;
uint16_t x48 = 107U;
volatile int32_t t11 = -41;
uint32_t x54 = UINT32_MAX;
uint64_t x56 = 9035108401843872LLU;
int8_t x58 = 6;
int64_t x60 = -1LL;
static volatile int64_t t14 = -497186264509472LL;
uint64_t x62 = 56963654746549LLU;
volatile uint8_t x63 = 81U;
uint32_t x67 = 2081U;
uint16_t x71 = UINT16_MAX;
volatile uint16_t x74 = 384U;
volatile int32_t t22 = -1015;
volatile uint32_t x95 = 4898U;
uint32_t x100 = 3894004U;
int64_t x103 = -70417161891685LL;
static uint32_t x110 = UINT32_MAX;
static uint64_t x111 = 655164804LLU;
volatile uint64_t t27 = 26572691602597LLU;
static uint8_t x117 = UINT8_MAX;
int8_t x127 = INT8_MIN;
volatile int16_t x130 = INT16_MIN;
volatile int32_t x131 = INT32_MIN;
static volatile int32_t t32 = 34541623;
int64_t x133 = INT64_MAX;
int32_t t34 = -879307868;
int16_t x145 = -1;
static uint64_t x146 = 172965889838688204LLU;
static volatile uint32_t x149 = UINT32_MAX;
volatile int32_t t37 = 126595;
uint64_t x157 = UINT64_MAX;
uint32_t t39 = UINT32_MAX;
uint32_t x161 = 122U;
uint32_t t40 = UINT32_MAX;
static uint64_t x168 = UINT64_MAX;
volatile uint16_t x173 = 15U;
volatile int16_t x181 = -6;
int8_t x186 = 24;
int16_t x187 = -1;
uint16_t x191 = 759U;
volatile int64_t x192 = 96LL;
uint8_t x193 = UINT8_MAX;
volatile uint32_t t50 = 12964476U;
int16_t x207 = INT16_MIN;
uint32_t x210 = UINT32_MAX;
static volatile int32_t t53 = 14;
uint64_t t54 = UINT64_MAX;
int32_t x224 = -1;
static int64_t x229 = INT64_MIN;
volatile uint64_t t57 = UINT64_MAX;
int16_t x250 = INT16_MIN;
static int64_t x252 = 742LL;
volatile int64_t t62 = 9949900037358774LL;
uint32_t x253 = 110794894U;
static uint16_t x256 = UINT16_MAX;
uint64_t x257 = 3192110618705LLU;
uint32_t x258 = UINT32_MAX;
static int16_t x259 = INT16_MIN;
int16_t x273 = -1;
int8_t x275 = INT8_MIN;
uint32_t x277 = 13262U;
static volatile int64_t t70 = -21882692973524946LL;
uint16_t x288 = 4001U;
uint32_t x290 = 78U;
uint64_t x296 = UINT64_MAX;
uint8_t x299 = 18U;
static uint32_t t74 = 3884U;
int64_t x306 = -1LL;
volatile int16_t x309 = -1;
volatile int16_t x315 = -1;
static volatile int32_t x318 = INT32_MAX;
int64_t x319 = -1LL;
static int8_t x325 = -1;
int32_t t81 = INT32_MAX;
uint32_t x329 = 63936U;
uint32_t x333 = 67752803U;
static volatile int16_t x334 = INT16_MIN;
static int32_t x336 = INT32_MIN;
int32_t t86 = 54013;
static int8_t x349 = 3;
uint8_t x353 = 2U;
int8_t x354 = INT8_MIN;
uint32_t x359 = UINT32_MAX;
uint32_t t89 = UINT32_MAX;
static volatile int64_t t90 = 23998959887160411LL;
static int32_t x365 = -96338;
uint32_t x368 = UINT32_MAX;
int64_t t91 = -43LL;
static int32_t x372 = INT32_MIN;
int32_t t92 = -27878103;
uint64_t x376 = UINT64_MAX;
uint16_t x380 = 11528U;
static int64_t x385 = INT64_MIN;
uint16_t x387 = 3627U;
volatile int64_t t97 = -1LL;
uint64_t x393 = 1360957710LLU;
volatile int32_t x395 = 11383233;
static int8_t x400 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = 195518U;
	uint8_t x3 = 1U;
	static uint32_t x4 = UINT32_MAX;

	t0 = (((x1<=x2)|x3)|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x7 = -1;
	volatile uint32_t x8 = 24417U;
	static uint32_t t1 = UINT32_MAX;

	t1 = (((x5<=x6)|x7)|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 800032148891317039LLU;
	uint32_t x10 = 7840U;
	int16_t x11 = INT16_MIN;
	volatile uint32_t x12 = 1127943U;

	t2 = (((x9<=x10)|x11)|x12);

	if (t2 != 4294948359U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 48966439U;
	static int32_t x14 = 1;
	volatile int8_t x15 = INT8_MAX;
	uint16_t x16 = 1U;
	int32_t t3 = 27;

	t3 = (((x13<=x14)|x15)|x16);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	int32_t t4 = -114;

	t4 = (((x17<=x18)|x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 930;
	int32_t x22 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 491924;

	t5 = (((x21<=x22)|x23)|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 3;
	int16_t x27 = INT16_MIN;
	static volatile uint32_t x28 = 526403396U;
	uint32_t t6 = 775266610U;

	t6 = (((x25<=x26)|x27)|x28);

	if (t6 != 4294952773U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = -378559646LL;
	int64_t x31 = -32882440169373993LL;
	static int32_t x32 = -31433856;
	int64_t t7 = 319690127103244LL;

	t7 = (((x29<=x30)|x31)|x32);

	if (t7 != -25460777LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 21821458448325LL;
	uint32_t x34 = UINT32_MAX;
	static int64_t x35 = INT64_MIN;

	t8 = (((x33<=x34)|x35)|x36);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int64_t x38 = -1LL;
	uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 157774560012252961LLU;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (((x37<=x38)|x39)|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 1027075996U;
	volatile int8_t x43 = 0;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -44;

	t10 = (((x41<=x42)|x43)|x44);

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 37U;
	int32_t x46 = -2684457;
	int16_t x47 = INT16_MIN;

	t11 = (((x45<=x46)|x47)|x48);

	if (t11 != -32661) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	int32_t x50 = 127780;
	int8_t x51 = -62;
	uint64_t x52 = 98681LLU;
	uint64_t t12 = 527058347545388977LLU;

	t12 = (((x49<=x50)|x51)|x52);

	if (t12 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	volatile uint64_t t13 = 38535376LLU;

	t13 = (((x53<=x54)|x55)|x56);

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	static int64_t x59 = INT64_MIN;

	t14 = (((x57<=x58)|x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int16_t x64 = -1;
	volatile int32_t t15 = 409312753;

	t15 = (((x61<=x62)|x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	uint64_t x66 = UINT64_MAX;
	int8_t x68 = INT8_MIN;
	uint32_t t16 = 0U;

	t16 = (((x65<=x66)|x67)|x68);

	if (t16 != 4294967201U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MAX;
	int32_t x72 = -1;
	volatile int32_t t17 = -723980;

	t17 = (((x69<=x70)|x71)|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -112;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 540U;
	volatile int64_t t18 = 13986802LL;

	t18 = (((x73<=x74)|x75)|x76);

	if (t18 != -9223372036854775267LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MAX;
	volatile int64_t x78 = -148554LL;
	volatile int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -3982;

	t19 = (((x77<=x78)|x79)|x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 0U;
	int16_t x82 = 0;
	volatile int32_t x83 = INT32_MAX;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = INT64_MAX;

	t20 = (((x81<=x82)|x83)|x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	int64_t x86 = 3232004343649872LL;
	static int64_t x87 = -1046771403LL;
	int32_t x88 = INT32_MAX;
	static int64_t t21 = -33775LL;

	t21 = (((x85<=x86)|x87)|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int64_t x90 = 59167770414817944LL;
	static volatile int8_t x91 = 3;
	int8_t x92 = 2;

	t22 = (((x89<=x90)|x91)|x92);

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint32_t x94 = 63325739U;
	int64_t x96 = 0LL;
	static volatile int64_t t23 = 19LL;

	t23 = (((x93<=x94)|x95)|x96);

	if (t23 != 4899LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -5518;
	uint16_t x98 = UINT16_MAX;
	static int64_t x99 = INT64_MAX;
	volatile int64_t t24 = INT64_MAX;

	t24 = (((x97<=x98)|x99)|x100);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	int64_t t25 = -7055396991977LL;

	t25 = (((x101<=x102)|x103)|x104);

	if (t25 != -1173073765LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 5919LLU;
	uint32_t x106 = UINT32_MAX;
	static int64_t x107 = INT64_MIN;
	static volatile uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (((x105<=x106)|x107)|x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint8_t x112 = 3U;

	t27 = (((x109<=x110)|x111)|x112);

	if (t27 != 655164807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 4138U;
	int64_t x114 = INT64_MAX;
	static int32_t x115 = -710686;
	uint8_t x116 = 2U;
	static int32_t t28 = -327180883;

	t28 = (((x113<=x114)|x115)|x116);

	if (t28 != -710685) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	uint16_t x119 = 9290U;
	uint64_t x120 = 2076425325LLU;
	volatile uint64_t t29 = 16LLU;

	t29 = (((x117<=x118)|x119)|x120);

	if (t29 != 2076425327LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MAX;
	volatile int8_t x122 = INT8_MIN;
	volatile int32_t x123 = -86049775;
	int8_t x124 = 9;
	volatile int32_t t30 = 402869;

	t30 = (((x121<=x122)|x123)|x124);

	if (t30 != -86049767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	static int16_t x126 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t31 = -22915076LL;

	t31 = (((x125<=x126)|x127)|x128);

	if (t31 != -127LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 27LL;
	static int8_t x132 = 57;

	t32 = (((x129<=x130)|x131)|x132);

	if (t32 != -2147483591) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -671436207;
	volatile int32_t x135 = -1;
	static int8_t x136 = INT8_MAX;
	int32_t t33 = 926332622;

	t33 = (((x133<=x134)|x135)|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -97087;
	int8_t x138 = INT8_MAX;
	int8_t x139 = -30;
	int16_t x140 = -4429;

	t34 = (((x137<=x138)|x139)|x140);

	if (t34 != -13) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 137744931393881LLU;
	int64_t x143 = -137416836965366302LL;
	int16_t x144 = -1;
	int64_t t35 = -453451LL;

	t35 = (((x141<=x142)|x143)|x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x147 = 2U;
	static int32_t x148 = INT32_MIN;
	static uint32_t t36 = 1606463U;

	t36 = (((x145<=x146)|x147)|x148);

	if (t36 != 2147483650U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = 31039409870322247LL;
	int32_t x151 = 9;
	int8_t x152 = INT8_MIN;

	t37 = (((x149<=x150)|x151)|x152);

	if (t37 != -119) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MIN;
	int64_t x156 = -1LL;
	volatile int64_t t38 = -87659992LL;

	t38 = (((x153<=x154)|x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = -1;

	t39 = (((x157<=x158)|x159)|x160);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	uint32_t x163 = UINT32_MAX;
	static volatile int32_t x164 = INT32_MIN;

	t40 = (((x161<=x162)|x163)|x164);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 3251U;
	int64_t x166 = -144065729163LL;
	static int32_t x167 = INT32_MIN;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (((x165<=x166)|x167)|x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MAX;
	static int64_t x171 = INT64_MAX;
	uint8_t x172 = 3U;
	int64_t t42 = INT64_MAX;

	t42 = (((x169<=x170)|x171)|x172);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = -1;
	int16_t x175 = INT16_MAX;
	volatile int16_t x176 = 1;
	volatile int32_t t43 = 62604592;

	t43 = (((x173<=x174)|x175)|x176);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = 215243107;
	static uint16_t x178 = 1U;
	static volatile int64_t x179 = INT64_MIN;
	uint32_t x180 = 44131U;
	int64_t t44 = -47358216352LL;

	t44 = (((x177<=x178)|x179)|x180);

	if (t44 != -9223372036854731677LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = 240874804902087LLU;
	int8_t x183 = -46;
	int64_t x184 = INT64_MAX;
	int64_t t45 = -3106LL;

	t45 = (((x181<=x182)|x183)|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -378;

	t46 = (((x185<=x186)|x187)|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -68;
	uint64_t x190 = 1257900648499LLU;
	int64_t t47 = -861861362809LL;

	t47 = (((x189<=x190)|x191)|x192);

	if (t47 != 759LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MAX;
	int64_t x195 = INT64_MAX;
	uint8_t x196 = 49U;
	volatile int64_t t48 = INT64_MAX;

	t48 = (((x193<=x194)|x195)|x196);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 45U;
	int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MAX;
	uint32_t x200 = 546998U;
	volatile uint32_t t49 = 32788314U;

	t49 = (((x197<=x198)|x199)|x200);

	if (t49 != 547071U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MAX;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = 1712U;
	static int8_t x204 = 18;

	t50 = (((x201<=x202)|x203)|x204);

	if (t50 != 1714U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x206 = -634;
	volatile int16_t x208 = 15784;
	volatile int32_t t51 = 386;

	t51 = (((x205<=x206)|x207)|x208);

	if (t51 != -16983) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	volatile int16_t x211 = -1;
	static int8_t x212 = INT8_MAX;
	int32_t t52 = -499092;

	t52 = (((x209<=x210)|x211)|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 54U;
	static int32_t x214 = 1279853;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MIN;

	t53 = (((x213<=x214)|x215)|x216);

	if (t53 != -2147418113) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	uint8_t x218 = UINT8_MAX;
	static uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;

	t54 = (((x217<=x218)|x219)|x220);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	static int32_t t55 = -51;

	t55 = (((x221<=x222)|x223)|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	uint32_t x227 = 109818913U;
	int64_t x228 = INT64_MIN;
	static volatile int64_t t56 = 429928630556LL;

	t56 = (((x225<=x226)|x227)|x228);

	if (t56 != -9223372036744956895LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	static uint64_t x231 = UINT64_MAX;
	volatile int64_t x232 = INT64_MAX;

	t57 = (((x229<=x230)|x231)|x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -1;
	int8_t x234 = 0;
	int64_t x235 = INT64_MIN;
	static volatile uint16_t x236 = 32U;
	volatile int64_t t58 = 121078345LL;

	t58 = (((x233<=x234)|x235)|x236);

	if (t58 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	uint64_t x238 = UINT64_MAX;
	uint16_t x239 = 0U;
	uint32_t x240 = 1U;
	uint32_t t59 = 1U;

	t59 = (((x237<=x238)|x239)|x240);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	int8_t x243 = 0;
	int32_t x244 = -1;
	int32_t t60 = 16093368;

	t60 = (((x241<=x242)|x243)|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 17U;
	int16_t x246 = -1;
	static uint8_t x247 = 0U;
	uint64_t x248 = 5655683746487301414LLU;
	volatile uint64_t t61 = 534701992012677LLU;

	t61 = (((x245<=x246)|x247)|x248);

	if (t61 != 5655683746487301414LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 5U;
	uint32_t x251 = UINT32_MAX;

	t62 = (((x249<=x250)|x251)|x252);

	if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MAX;
	volatile int32_t t63 = -202;

	t63 = (((x253<=x254)|x255)|x256);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x260 = -1LL;
	int64_t t64 = -369411315687613048LL;

	t64 = (((x257<=x258)|x259)|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x262 = 18U;
	uint64_t x263 = 9031735308203LLU;
	int16_t x264 = INT16_MAX;
	uint64_t t65 = 56038LLU;

	t65 = (((x261<=x262)|x263)|x264);

	if (t65 != 9031735312383LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 6U;
	int64_t x266 = -622195LL;
	volatile int32_t x267 = INT32_MIN;
	int8_t x268 = -47;
	volatile int32_t t66 = 1;

	t66 = (((x265<=x266)|x267)|x268);

	if (t66 != -47) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 1937467802074LLU;
	int8_t x271 = -61;
	uint32_t x272 = 42U;
	volatile uint32_t t67 = 2282U;

	t67 = (((x269<=x270)|x271)|x272);

	if (t67 != 4294967275U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = INT8_MIN;
	uint32_t x276 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = (((x273<=x274)|x275)|x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x278 = -7;
	uint8_t x279 = UINT8_MAX;
	static uint8_t x280 = 25U;
	volatile int32_t t69 = 12;

	t69 = (((x277<=x278)|x279)|x280);

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int64_t x282 = -1LL;
	volatile int64_t x283 = -185948354LL;
	int8_t x284 = INT8_MAX;

	t70 = (((x281<=x282)|x283)|x284);

	if (t70 != -185948289LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	uint32_t x286 = 107793U;
	int16_t x287 = INT16_MIN;
	static int32_t t71 = 40095;

	t71 = (((x285<=x286)|x287)|x288);

	if (t71 != -28767) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	volatile uint64_t x291 = 1457693192758390785LLU;
	uint32_t x292 = UINT32_MAX;
	static uint64_t t72 = 89654LLU;

	t72 = (((x289<=x290)|x291)|x292);

	if (t72 != 1457693195679825919LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 13U;
	int16_t x294 = 46;
	uint8_t x295 = 3U;
	static uint64_t t73 = UINT64_MAX;

	t73 = (((x293<=x294)|x295)|x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = 6;
	static int16_t x298 = -1;
	uint32_t x300 = 3727188U;

	t74 = (((x297<=x298)|x299)|x300);

	if (t74 != 3727190U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 14;
	int8_t x302 = INT8_MIN;
	static uint64_t x303 = 2321384343935LLU;
	int64_t x304 = INT64_MAX;
	uint64_t t75 = 4356432074303131LLU;

	t75 = (((x301<=x302)|x303)|x304);

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = 117LLU;
	volatile int32_t x307 = 459393;
	static uint8_t x308 = 13U;
	int32_t t76 = 6;

	t76 = (((x305<=x306)|x307)|x308);

	if (t76 != 459405) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = UINT16_MAX;
	static int16_t x311 = INT16_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = -81011;

	t77 = (((x309<=x310)|x311)|x312);

	if (t77 != -32513) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -2;
	static uint16_t x314 = 3U;
	static uint8_t x316 = 12U;
	static volatile int32_t t78 = -63712640;

	t78 = (((x313<=x314)|x315)|x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -14;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (((x317<=x318)|x319)|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 126U;
	static volatile uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 16741U;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = 44825229;

	t80 = (((x321<=x322)|x323)|x324);

	if (t80 != 16895) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x326 = 12U;
	int32_t x327 = INT32_MAX;
	static uint8_t x328 = 87U;

	t81 = (((x325<=x326)|x327)|x328);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = 121867LL;
	static int16_t x331 = INT16_MIN;
	volatile int64_t x332 = -1LL;
	volatile int64_t t82 = 15520485158LL;

	t82 = (((x329<=x330)|x331)|x332);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x335 = INT32_MAX;
	static volatile int32_t t83 = 1;

	t83 = (((x333<=x334)|x335)|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = -1;
	volatile int32_t x339 = 44;
	static int64_t x340 = -1LL;
	int64_t t84 = 1698995356646LL;

	t84 = (((x337<=x338)|x339)|x340);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -23688260;
	int64_t x342 = -908LL;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t85 = -63783632;

	t85 = (((x341<=x342)|x343)|x344);

	if (t85 != -32513) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = -1;

	t86 = (((x345<=x346)|x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = 15262;
	volatile int64_t x351 = INT64_MIN;
	uint16_t x352 = 3304U;
	int64_t t87 = -1374LL;

	t87 = (((x349<=x350)|x351)|x352);

	if (t87 != -9223372036854772503LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	volatile int32_t t88 = -34145848;

	t88 = (((x353<=x354)|x355)|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	static uint32_t x358 = 1U;
	volatile int8_t x360 = INT8_MAX;

	t89 = (((x357<=x358)|x359)|x360);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	static volatile int64_t x363 = -1LL;
	int64_t x364 = 10799901039590300LL;

	t90 = (((x361<=x362)|x363)|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x366 = 4038;
	volatile int64_t x367 = -16826803966650LL;

	t91 = (((x365<=x366)|x367)|x368);

	if (t91 != -16823386898433LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1430;
	volatile int32_t x370 = 1022;
	int8_t x371 = INT8_MAX;

	t92 = (((x369<=x370)|x371)|x372);

	if (t92 != -2147483521) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 0U;
	int64_t x374 = 349749782966044135LL;
	static int8_t x375 = -1;
	uint64_t t93 = UINT64_MAX;

	t93 = (((x373<=x374)|x375)|x376);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	int32_t x378 = -6575105;
	int32_t x379 = INT32_MIN;
	static volatile int32_t t94 = 32102160;

	t94 = (((x377<=x378)|x379)|x380);

	if (t94 != -2147472120) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = -1;
	uint32_t x383 = 1U;
	int16_t x384 = INT16_MIN;
	uint32_t t95 = 11U;

	t95 = (((x381<=x382)|x383)|x384);

	if (t95 != 4294934529U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MIN;
	volatile int32_t x388 = -1;
	static int32_t t96 = 6549506;

	t96 = (((x385<=x386)|x387)|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -547080;
	uint8_t x390 = 15U;
	int64_t x391 = -1909LL;
	int16_t x392 = -379;

	t97 = (((x389<=x390)|x391)|x392);

	if (t97 != -369LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x394 = INT32_MIN;
	uint8_t x396 = 4U;
	int32_t t98 = 63710;

	t98 = (((x393<=x394)|x395)|x396);

	if (t98 != 11383237) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 20;
	int32_t x398 = 1160751;
	uint16_t x399 = 13035U;
	volatile int32_t t99 = 1;

	t99 = (((x397<=x398)|x399)|x400);

	if (t99 != -21) { NG(); } else { ; }
	
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

