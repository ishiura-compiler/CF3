#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 190047LL;
static uint8_t x3 = UINT8_MAX;
uint8_t x4 = UINT8_MAX;
volatile uint8_t x5 = 59U;
int8_t x8 = -1;
uint32_t x10 = 1143017904U;
int32_t x13 = 3512;
uint16_t x15 = 17931U;
uint16_t x18 = UINT16_MAX;
int16_t x20 = 1900;
int32_t x22 = INT32_MIN;
volatile int64_t x23 = INT64_MAX;
volatile uint64_t x27 = UINT64_MAX;
int8_t x33 = -35;
volatile int64_t x38 = INT64_MAX;
int16_t x41 = 213;
static uint64_t x42 = UINT64_MAX;
static int8_t x50 = INT8_MIN;
int16_t x52 = 41;
uint8_t x61 = UINT8_MAX;
uint64_t x65 = 2514810229461217905LLU;
int64_t x66 = INT64_MAX;
int8_t x74 = INT8_MAX;
int16_t x83 = -3544;
int32_t x84 = -337;
static int32_t t18 = 97;
int32_t x86 = -1;
int64_t x95 = INT64_MIN;
int64_t x96 = INT64_MIN;
int8_t x100 = -1;
int64_t x106 = INT64_MIN;
int16_t x110 = INT16_MIN;
int16_t x112 = INT16_MIN;
static uint32_t x122 = UINT32_MAX;
static volatile int32_t x123 = INT32_MIN;
uint16_t x124 = 64U;
volatile uint32_t t27 = 2868U;
static volatile int32_t x127 = INT32_MAX;
static int64_t x131 = -13700759400549239LL;
int64_t x132 = INT64_MIN;
static uint32_t x139 = 888066978U;
static int8_t x147 = INT8_MAX;
int16_t x148 = 9681;
volatile int32_t t33 = -5835526;
static uint32_t t35 = 56668761U;
int8_t x159 = INT8_MIN;
int32_t t36 = 0;
uint16_t x161 = 9965U;
static int8_t x162 = 0;
volatile int64_t t39 = 17221LL;
volatile uint32_t x174 = UINT32_MAX;
static int64_t x177 = -12004LL;
int8_t x181 = INT8_MAX;
uint8_t x185 = UINT8_MAX;
static int8_t x188 = -1;
int16_t x199 = INT16_MAX;
static uint64_t x200 = 22489130LLU;
static int64_t t47 = 246794424LL;
int16_t x209 = INT16_MIN;
int32_t x218 = 1;
int32_t x219 = INT32_MIN;
volatile int64_t t51 = 1674LL;
uint8_t x225 = 28U;
static volatile int8_t x228 = INT8_MIN;
volatile int32_t t52 = 470;
static volatile int64_t x229 = -1LL;
int64_t t53 = -396473966526LL;
volatile int16_t x233 = INT16_MIN;
volatile int64_t t55 = -6LL;
int64_t x245 = INT64_MIN;
int32_t x246 = INT32_MIN;
int8_t x247 = -1;
uint64_t x251 = 5055LLU;
uint16_t x257 = 1134U;
uint8_t x259 = UINT8_MAX;
static int32_t x268 = INT32_MIN;
volatile uint64_t t62 = 1LLU;
static int8_t x282 = 63;
volatile int64_t x283 = INT64_MIN;
static volatile uint32_t x291 = UINT32_MAX;
uint16_t x300 = 11U;
int8_t x307 = -1;
int64_t x308 = INT64_MIN;
uint64_t x310 = UINT64_MAX;
static uint64_t x325 = 283597612402624LLU;
int16_t x328 = -1507;
static uint32_t x344 = 80419199U;
static int8_t x362 = -5;
uint64_t t79 = 1971LLU;
volatile int16_t x369 = -6224;
static volatile uint32_t t81 = 401128U;
uint16_t x373 = 15U;
uint8_t x374 = 0U;
static volatile int64_t t82 = -16609946917LL;
static int8_t x379 = 3;
uint32_t x381 = 21589107U;
int16_t x384 = INT16_MIN;
uint32_t x389 = UINT32_MAX;
static int16_t x390 = 179;
int8_t x391 = -1;
int8_t x392 = INT8_MAX;
uint32_t t85 = 559U;
int32_t x396 = -1;
volatile uint64_t t88 = 1216901LLU;
volatile int8_t x405 = 1;
volatile int64_t x414 = INT64_MIN;
int16_t x418 = INT16_MIN;
int16_t x420 = -546;
uint64_t x421 = 4047LLU;
uint8_t x427 = UINT8_MAX;
volatile uint64_t x442 = 27408369LLU;
int32_t x449 = 1351695;
int16_t x450 = -277;
uint64_t x452 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int64_t t0 = -16339374116254LL;

	t0 = ((x1*(x2%x3))%x4);

	if (t0 != -36LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 5;
	int64_t x7 = -1LL;
	int64_t t1 = 1091LL;

	t1 = ((x5*(x6%x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint32_t x11 = 101776754U;
	static uint16_t x12 = UINT16_MAX;
	static uint32_t t2 = 2734U;

	t2 = ((x9*(x10%x11))%x12);

	if (t2 != 53456U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -28;
	uint16_t x16 = 356U;
	int32_t t3 = 7416716;

	t3 = ((x13*(x14%x15))%x16);

	if (t3 != -80) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 5633122LLU;
	static int64_t x19 = INT64_MIN;
	static volatile uint64_t t4 = 9978987785383LLU;

	t4 = ((x17*(x18%x19))%x20);

	if (t4 != 1870LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile uint16_t x24 = 15U;
	static int64_t t5 = -237LL;

	t5 = ((x21*(x22%x23))%x24);

	if (t5 != 4LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int8_t x26 = INT8_MAX;
	uint16_t x28 = UINT16_MAX;
	volatile uint64_t t6 = 537349LLU;

	t6 = ((x25*(x26%x27))%x28);

	if (t6 != 65409LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = 463857761;

	t7 = ((x29*(x30%x31))%x32);

	if (t7 != -32640) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	static uint8_t x35 = 12U;
	volatile int8_t x36 = INT8_MIN;
	int64_t t8 = 1160LL;

	t8 = ((x33*(x34%x35))%x36);

	if (t8 != 24LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 5856686977763LLU;
	int8_t x39 = -14;
	static int16_t x40 = -1;
	static uint64_t t9 = 668331440LLU;

	t9 = ((x37*(x38%x39))%x40);

	if (t9 != 40996808844341LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = -1;
	volatile uint16_t x44 = 104U;
	volatile uint64_t t10 = 5110620258578771043LLU;

	t10 = ((x41*(x42%x43))%x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	static int64_t x46 = -1LL;
	static uint16_t x47 = 233U;
	int64_t x48 = -368416512127LL;
	int64_t t11 = 61031830716976546LL;

	t11 = ((x45*(x46%x47))%x48);

	if (t11 != -4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	static volatile int8_t x51 = -2;
	volatile int32_t t12 = -3;

	t12 = ((x49*(x50%x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x62 = INT64_MAX;
	static uint8_t x63 = 100U;
	volatile uint64_t x64 = UINT64_MAX;
	volatile uint64_t t13 = 1587428589210992362LLU;

	t13 = ((x61*(x62%x63))%x64);

	if (t13 != 1785LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x67 = INT32_MIN;
	static uint64_t x68 = 1562059121913LLU;
	static uint64_t t14 = 7382382208642LLU;

	t14 = ((x65*(x66%x67))%x68);

	if (t14 != 103736906713LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = 13287521U;
	volatile uint8_t x70 = 2U;
	static uint16_t x71 = UINT16_MAX;
	volatile uint64_t x72 = 52810504726241571LLU;
	uint64_t t15 = 6949701LLU;

	t15 = ((x69*(x70%x71))%x72);

	if (t15 != 26575042LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MAX;
	int32_t x75 = INT32_MIN;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = 807;

	t16 = ((x73*(x74%x75))%x76);

	if (t16 != 16129) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = -501;
	int64_t x79 = -16804549491314943LL;
	volatile uint64_t x80 = 166026170957LLU;
	volatile uint64_t t17 = 275234LLU;

	t17 = ((x77*(x78%x79))%x80);

	if (t17 != 83491671210LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = 23;
	static uint16_t x82 = 50U;

	t18 = ((x81*(x82%x83))%x84);

	if (t18 != 139) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 10;
	int8_t x87 = 1;
	volatile int8_t x88 = -30;
	int32_t t19 = -120186024;

	t19 = ((x85*(x86%x87))%x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -1LL;
	static int8_t x90 = INT8_MAX;
	volatile int64_t x91 = -1LL;
	int16_t x92 = INT16_MIN;
	int64_t t20 = -333274045808618LL;

	t20 = ((x89*(x90%x91))%x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 57U;
	int8_t x94 = -1;
	volatile int64_t t21 = 75470676706LL;

	t21 = ((x93*(x94%x95))%x96);

	if (t21 != -57LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 51U;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 1U;
	volatile uint32_t t22 = 72455U;

	t22 = ((x97*(x98%x99))%x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = -1;
	uint16_t x102 = 4053U;
	int8_t x103 = INT8_MIN;
	static int64_t x104 = 931358757848LL;
	static volatile int64_t t23 = -624LL;

	t23 = ((x101*(x102%x103))%x104);

	if (t23 != -85LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	int16_t x107 = -1;
	int16_t x108 = INT16_MAX;
	static int64_t t24 = -31618023714LL;

	t24 = ((x105*(x106%x107))%x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 32932844U;
	int16_t x111 = -11;
	static volatile uint32_t t25 = 315899U;

	t25 = ((x109*(x110%x111))%x112);

	if (t25 != 3965638856U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 40754;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;
	int32_t t26 = 284316466;

	t26 = ((x113*(x114%x115))%x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;

	t27 = ((x121*(x122%x123))%x124);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 2U;
	uint16_t x126 = 65U;
	int64_t x128 = INT64_MAX;
	volatile int64_t t28 = -741031214604049644LL;

	t28 = ((x125*(x126%x127))%x128);

	if (t28 != 130LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = 385;
	int32_t x130 = INT32_MIN;
	static volatile int64_t t29 = 3496LL;

	t29 = ((x129*(x130%x131))%x132);

	if (t29 != -826781204480LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1LL;
	uint16_t x134 = UINT16_MAX;
	static volatile int16_t x135 = 934;
	uint32_t x136 = 367U;
	static volatile int64_t t30 = 2327845362LL;

	t30 = ((x133*(x134%x135))%x136);

	if (t30 != -155LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	static volatile uint8_t x138 = 10U;
	uint64_t x140 = 1737903731321960LLU;
	volatile uint64_t t31 = 16416675939338LLU;

	t31 = ((x137*(x138%x139))%x140);

	if (t31 != 4294966016LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = INT16_MAX;
	int8_t x142 = 4;
	int32_t x143 = INT32_MIN;
	volatile uint64_t x144 = 4067165475LLU;
	uint64_t t32 = 7096221280LLU;

	t32 = ((x141*(x142%x143))%x144);

	if (t32 != 131068LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = UINT8_MAX;
	volatile uint8_t x146 = 10U;

	t33 = ((x145*(x146%x147))%x148);

	if (t33 != 2550) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 0U;
	int64_t x150 = -1LL;
	uint64_t x151 = 4433LLU;
	int32_t x152 = -729037670;
	volatile uint64_t t34 = 82012LLU;

	t34 = ((x149*(x150%x151))%x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = INT16_MIN;
	volatile int8_t x154 = 9;
	volatile uint32_t x155 = 14U;
	int32_t x156 = INT32_MIN;

	t35 = ((x153*(x154%x155))%x156);

	if (t35 != 2147188736U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	int8_t x160 = INT8_MAX;

	t36 = ((x157*(x158%x159))%x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x163 = 1U;
	volatile int32_t x164 = 1;
	static volatile uint32_t t37 = 119U;

	t37 = ((x161*(x162%x163))%x164);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x165 = -1;
	int16_t x166 = 345;
	uint64_t x167 = 57196790126359LLU;
	volatile int8_t x168 = -1;
	volatile uint64_t t38 = 2891172617609LLU;

	t38 = ((x165*(x166%x167))%x168);

	if (t38 != 18446744073709551271LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = -1;
	int64_t x170 = -1LL;
	int64_t x171 = -100935392721402LL;
	int64_t x172 = INT64_MIN;

	t39 = ((x169*(x170%x171))%x172);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = 37;
	volatile uint32_t x175 = 45U;
	int32_t x176 = 2195;
	volatile uint32_t t40 = 1556315672U;

	t40 = ((x173*(x174%x175))%x176);

	if (t40 != 1110U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x178 = 117U;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = -1LL;
	int64_t t41 = -449478224LL;

	t41 = ((x177*(x178%x179))%x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = 12;
	int16_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	int32_t t42 = 184950;

	t42 = ((x181*(x182%x183))%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x186 = 27812U;
	uint8_t x187 = UINT8_MAX;
	volatile int32_t t43 = 3;

	t43 = ((x185*(x186%x187))%x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 5508300LLU;
	volatile int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 18U;
	uint64_t t44 = 11641486LLU;

	t44 = ((x189*(x190%x191))%x192);

	if (t44 != 12LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MAX;
	static int32_t t45 = 61;

	t45 = ((x193*(x194%x195))%x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MAX;
	int16_t x198 = INT16_MAX;
	static volatile uint64_t t46 = 3329169601LLU;

	t46 = ((x197*(x198%x199))%x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -1;
	int64_t x202 = 92444LL;
	static volatile int8_t x203 = -1;
	int8_t x204 = 15;

	t47 = ((x201*(x202%x203))%x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 1067U;
	int8_t x206 = -3;
	int64_t x207 = INT64_MIN;
	int32_t x208 = -738781934;
	static int64_t t48 = 6317545LL;

	t48 = ((x205*(x206%x207))%x208);

	if (t48 != -3201LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x210 = -1;
	volatile int8_t x211 = -1;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t49 = -1LL;

	t49 = ((x209*(x210%x211))%x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 3U;
	int64_t t50 = 373476577LL;

	t50 = ((x213*(x214%x215))%x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	static int16_t x220 = -556;

	t51 = ((x217*(x218%x219))%x220);

	if (t51 != -76LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x226 = -226023106;
	uint8_t x227 = 62U;

	t52 = ((x225*(x226%x227))%x228);

	if (t52 != -16) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x230 = INT64_MIN;
	int32_t x231 = -1;
	int32_t x232 = INT32_MIN;

	t53 = ((x229*(x230%x231))%x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x234 = 1038487U;
	volatile uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t54 = 81319164380366LLU;

	t54 = ((x233*(x234%x235))%x236);

	if (t54 != 9223372002825633793LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = 66592LL;
	uint8_t x238 = UINT8_MAX;
	int64_t x239 = INT64_MIN;
	volatile uint32_t x240 = 246628255U;

	t55 = ((x237*(x238%x239))%x240);

	if (t55 != 16980960LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = 1826792677623LL;
	volatile int8_t x243 = INT8_MAX;
	int64_t x244 = INT64_MAX;
	volatile int64_t t56 = 5257806LL;

	t56 = ((x241*(x242%x243))%x244);

	if (t56 != -16128LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x248 = -1LL;
	static int64_t t57 = -1LL;

	t57 = ((x245*(x246%x247))%x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = 20017039450LL;
	int8_t x250 = -1;
	int64_t x252 = -7215LL;
	uint64_t t58 = 72126442954LLU;

	t58 = ((x249*(x250%x251))%x252);

	if (t58 != 13511501628750LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x258 = 0U;
	uint8_t x260 = 111U;
	int32_t t59 = -43225000;

	t59 = ((x257*(x258%x259))%x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = 10956730LLU;
	int32_t x267 = INT32_MIN;
	static volatile uint64_t t60 = 477003724LLU;

	t60 = ((x265*(x266%x267))%x268);

	if (t60 != 47058797010145350LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 3659U;
	int16_t x274 = -1;
	uint32_t x275 = 868521105U;
	uint64_t x276 = 140LLU;
	static volatile uint64_t t61 = 8372973558008713821LLU;

	t61 = ((x273*(x274%x275))%x276);

	if (t61 != 121LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = 41;
	volatile uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MIN;
	static uint64_t x280 = 1928196967915068LLU;

	t62 = ((x277*(x278%x279))%x280);

	if (t62 != 10455LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	int8_t x284 = INT8_MAX;
	volatile int64_t t63 = 1845954LL;

	t63 = ((x281*(x282%x283))%x284);

	if (t63 != -63LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = 4023;
	static int16_t x286 = -1187;
	int64_t x287 = INT64_MIN;
	static int32_t x288 = INT32_MAX;
	volatile int64_t t64 = -34231438043875LL;

	t64 = ((x285*(x286%x287))%x288);

	if (t64 != -4775301LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x289 = 302;
	int32_t x290 = INT32_MIN;
	volatile int8_t x292 = 1;
	static volatile uint32_t t65 = 5596498U;

	t65 = ((x289*(x290%x291))%x292);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -1;
	static uint64_t x294 = 9358752583953246LLU;
	int32_t x295 = INT32_MIN;
	int32_t x296 = 1492897;
	static uint64_t t66 = 341682216758LLU;

	t66 = ((x293*(x294%x295))%x296);

	if (t66 != 1241433LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x297 = 1803779308359980764LLU;
	int32_t x298 = -7641;
	volatile int32_t x299 = -1;
	static volatile uint64_t t67 = 370516957785988282LLU;

	t67 = ((x297*(x298%x299))%x300);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MIN;
	volatile int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t68 = 14310803;

	t68 = ((x301*(x302%x303))%x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x305 = 92670042542567039LLU;
	int32_t x306 = 5203;
	volatile uint64_t t69 = 165531325353903820LLU;

	t69 = ((x305*(x306%x307))%x308);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x311 = 38348311U;
	static int64_t x312 = -5899LL;
	static uint64_t t70 = 5683103906516169LLU;

	t70 = ((x309*(x310%x311))%x312);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 5U;
	volatile uint64_t x323 = 102713064LLU;
	static int32_t x324 = INT32_MIN;
	volatile uint64_t t71 = 238LLU;

	t71 = ((x321*(x322%x323))%x324);

	if (t71 != 21474836475LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x326 = 8U;
	static uint32_t x327 = 501520465U;
	uint64_t t72 = 1057LLU;

	t72 = ((x325*(x326%x327))%x328);

	if (t72 != 2268780899220992LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -747;
	volatile uint8_t x330 = 1U;
	static int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	static int32_t t73 = -1;

	t73 = ((x329*(x330%x331))%x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = 455U;
	static int32_t x334 = -182242008;
	int16_t x335 = INT16_MIN;
	volatile int32_t x336 = INT32_MIN;
	volatile uint32_t t74 = 477534174U;

	t74 = ((x333*(x334%x335))%x336);

	if (t74 != 2138765848U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MIN;
	volatile uint8_t x342 = 5U;
	int64_t x343 = -1LL;
	volatile int64_t t75 = -217366941913588LL;

	t75 = ((x341*(x342%x343))%x344);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = 15;
	int32_t x346 = -3;
	static uint32_t x347 = 26841768U;
	int64_t x348 = -21871738651088LL;
	int64_t t76 = -60LL;

	t76 = ((x345*(x346%x347))%x348);

	if (t76 != 4266195LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = INT8_MIN;
	static uint16_t x350 = 1020U;
	int64_t x351 = -17678874425876526LL;
	int8_t x352 = INT8_MIN;
	volatile int64_t t77 = 868LL;

	t77 = ((x349*(x350%x351))%x352);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 7U;
	volatile uint64_t x358 = 4589761301447696335LLU;
	static int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	uint64_t t78 = 1699845442LLU;

	t78 = ((x357*(x358%x359))%x360);

	if (t78 != 13681585036424322729LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = 31;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;

	t79 = ((x361*(x362%x363))%x364);

	if (t79 != 2147483493LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x365 = 4U;
	int64_t x366 = -1LL;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 52U;
	int64_t t80 = 43779827LL;

	t80 = ((x365*(x366%x367))%x368);

	if (t80 != -4LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;

	t81 = ((x369*(x370%x371))%x372);

	if (t81 != 796672U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x375 = INT64_MAX;
	static int64_t x376 = INT64_MAX;

	t82 = ((x373*(x374%x375))%x376);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = 251060214352LL;
	int8_t x378 = 0;
	int8_t x380 = INT8_MIN;
	volatile int64_t t83 = 2623LL;

	t83 = ((x377*(x378%x379))%x380);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x382 = 42U;
	static uint32_t x383 = UINT32_MAX;
	volatile uint32_t t84 = 7526761U;

	t84 = ((x381*(x382%x383))%x384);

	if (t84 != 906742494U) { NG(); } else { ; }
	
}

void f85(void) {


	t85 = ((x389*(x390%x391))%x392);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	int32_t t86 = -1;

	t86 = ((x393*(x394%x395))%x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MAX;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = -1;
	int64_t x400 = 109047588140462LL;
	static int64_t t87 = -200LL;

	t87 = ((x397*(x398%x399))%x400);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = 215LLU;
	volatile int32_t x402 = -1;
	int8_t x403 = -21;
	volatile int64_t x404 = 757068611875710LL;

	t88 = ((x401*(x402%x403))%x404);

	if (t88 != 10276746001541LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x406 = -3820;
	int8_t x407 = INT8_MIN;
	static uint64_t x408 = UINT64_MAX;
	volatile uint64_t t89 = 317667LLU;

	t89 = ((x405*(x406%x407))%x408);

	if (t89 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x409 = INT16_MIN;
	static int64_t x410 = INT64_MIN;
	volatile uint64_t x411 = 20701205LLU;
	volatile int8_t x412 = INT8_MIN;
	uint64_t t90 = 1LLU;

	t90 = ((x409*(x410%x411))%x412);

	if (t90 != 18446743819574444032LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = -48044783461507LL;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MAX;
	int64_t t91 = -1108379042055001731LL;

	t91 = ((x413*(x414%x415))%x416);

	if (t91 != 85LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = -1;
	uint32_t x419 = 898072364U;
	static volatile uint32_t t92 = 6U;

	t92 = ((x417*(x418%x419))%x420);

	if (t92 != 3592322224U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x422 = -1;
	int64_t x423 = -1LL;
	uint8_t x424 = 5U;
	volatile uint64_t t93 = 1LLU;

	t93 = ((x421*(x422%x423))%x424);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = UINT32_MAX;
	static int8_t x426 = INT8_MAX;
	uint32_t x428 = 1507U;
	volatile uint32_t t94 = 0U;

	t94 = ((x425*(x426%x427))%x428);

	if (t94 != 592U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = 0;
	int16_t x434 = -239;
	int16_t x435 = -1;
	uint8_t x436 = 59U;
	volatile int32_t t95 = 1;

	t95 = ((x433*(x434%x435))%x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x437 = 3816457LL;
	int32_t x438 = -34;
	int16_t x439 = -1;
	int32_t x440 = 5454125;
	static int64_t t96 = 177092521050739986LL;

	t96 = ((x437*(x438%x439))%x440);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x441 = UINT8_MAX;
	volatile int32_t x443 = -25291497;
	volatile uint32_t x444 = 2U;
	volatile uint64_t t97 = 97106099917923LLU;

	t97 = ((x441*(x442%x443))%x444);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x445 = 42;
	int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MIN;
	int32_t x448 = 8;
	static volatile int32_t t98 = 107576;

	t98 = ((x445*(x446%x447))%x448);

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x451 = UINT32_MAX;
	uint64_t t99 = 52628770421LLU;

	t99 = ((x449*(x450%x451))%x452);

	if (t99 != 3920547781LLU) { NG(); } else { ; }
	
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

