#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
volatile int16_t x5 = INT16_MIN;
int16_t x7 = -1;
int64_t x13 = INT64_MIN;
int32_t x19 = INT32_MIN;
static volatile int32_t t6 = 57289;
int32_t x33 = 1089411;
uint32_t x39 = 1397407531U;
volatile int32_t t8 = 516;
uint16_t x42 = 30864U;
uint32_t x48 = 20U;
uint32_t x52 = 358772323U;
int32_t x54 = -27403821;
int8_t x58 = INT8_MIN;
int32_t t13 = 458361805;
int64_t x63 = INT64_MAX;
int16_t x66 = -3642;
uint16_t x67 = UINT16_MAX;
volatile int64_t x68 = INT64_MIN;
volatile int32_t t15 = -443753680;
volatile int32_t t16 = -123659504;
static int32_t x75 = INT32_MIN;
uint64_t x78 = 66150321784LLU;
uint32_t x80 = 963U;
volatile int16_t x85 = 889;
int32_t t19 = -746237;
uint8_t x89 = 14U;
volatile int32_t t21 = 39591198;
int32_t t22 = -306;
static volatile int8_t x105 = -7;
int32_t t24 = 236693977;
int16_t x114 = 10343;
uint64_t x115 = UINT64_MAX;
int8_t x120 = INT8_MAX;
int8_t x125 = 7;
int16_t x131 = 6570;
volatile int8_t x132 = -1;
uint64_t x138 = 1LLU;
int32_t t32 = 22115379;
int32_t t33 = -88705075;
static int16_t x148 = INT16_MIN;
int8_t x150 = INT8_MIN;
int16_t x155 = -7477;
volatile int16_t x162 = INT16_MIN;
int16_t x172 = -3156;
static uint8_t x175 = 61U;
int8_t x178 = INT8_MIN;
volatile int32_t t42 = -115;
static volatile int16_t x185 = 1;
volatile uint32_t x186 = UINT32_MAX;
static int32_t t43 = 1347;
volatile int32_t x194 = -1;
volatile int32_t x212 = INT32_MIN;
int16_t x218 = -1;
int16_t x221 = INT16_MIN;
int16_t x228 = -1;
int32_t t51 = 216751;
static int8_t x235 = INT8_MIN;
volatile int32_t t54 = 0;
static uint64_t x241 = 1204348622263LLU;
static int16_t x252 = INT16_MIN;
int32_t x253 = -1;
uint8_t x257 = 89U;
static int32_t x258 = INT32_MAX;
uint64_t x259 = 494078645533LLU;
int64_t x271 = 22704536694LL;
static int64_t x272 = INT64_MAX;
int32_t t62 = -28564;
static int32_t t66 = -21070577;
int64_t x299 = INT64_MIN;
volatile int32_t x300 = INT32_MAX;
int8_t x301 = INT8_MIN;
int32_t x312 = INT32_MAX;
static volatile int32_t t71 = 125118;
volatile int64_t x313 = -35169336500645639LL;
static int32_t t72 = -10514573;
volatile uint32_t x322 = 2771457U;
int8_t x328 = INT8_MAX;
int64_t x330 = 62LL;
int32_t t79 = -83296;
int8_t x345 = -1;
static volatile int32_t x347 = 259741739;
static volatile int32_t t82 = -6;
volatile int32_t t83 = -510;
uint16_t x368 = 183U;
volatile int32_t x374 = INT32_MAX;
int32_t t89 = 64198;
uint32_t x388 = 321U;
int32_t t91 = 15310557;
int64_t x396 = -147LL;
volatile int32_t t92 = 6;
int8_t x399 = INT8_MIN;
static uint64_t x400 = 5155631598889116LLU;
uint32_t x401 = UINT32_MAX;
uint64_t x402 = 61485256045873919LLU;
int32_t x403 = 833813;
uint64_t x405 = 47245168212420937LLU;
uint32_t x414 = UINT32_MAX;
int8_t x422 = INT8_MIN;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	uint64_t x3 = 68036188667LLU;
	uint64_t x4 = 359738941LLU;
	int32_t t0 = 439780;

	t0 = (x1==(x2-(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -49228595;

	t1 = (x5==(x6-(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = 123U;
	int64_t x11 = -269381839942LL;
	uint64_t x12 = 52182239799582780LLU;
	volatile int32_t t2 = -1418;

	t2 = (x9==(x10-(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -865306;

	t3 = (x13==(x14-(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 10U;
	static int32_t x18 = 1855270;
	volatile uint16_t x20 = 238U;
	volatile int32_t t4 = -28042;

	t4 = (x17==(x18-(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	static volatile int8_t x26 = 0;
	int32_t x27 = -1;
	uint16_t x28 = 4269U;
	volatile int32_t t5 = -6693;

	t5 = (x25==(x26-(x27<=x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = 23123721014358LLU;
	int16_t x31 = -1;
	static int32_t x32 = -338234610;

	t6 = (x29==(x30-(x31<=x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MAX;
	volatile uint32_t x35 = 0U;
	uint16_t x36 = 3U;
	int32_t t7 = 0;

	t7 = (x33==(x34-(x35<=x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 120608801598277LLU;
	int8_t x38 = INT8_MAX;
	static int8_t x40 = -1;

	t8 = (x37==(x38-(x39<=x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 18U;
	volatile int16_t x43 = INT16_MIN;
	volatile int32_t x44 = -1;
	volatile int32_t t9 = -2;

	t9 = (x41==(x42-(x43<=x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x45 = 53288879LLU;
	uint32_t x46 = 768369U;
	int16_t x47 = INT16_MIN;
	volatile int32_t t10 = 494;

	t10 = (x45==(x46-(x47<=x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -133562071655462556LL;
	static int16_t x50 = -1;
	int16_t x51 = -1;
	volatile int32_t t11 = -66030;

	t11 = (x49==(x50-(x51<=x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static uint8_t x55 = 1U;
	static volatile int16_t x56 = -1;
	int32_t t12 = 1;

	t12 = (x53==(x54-(x55<=x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -1LL;
	volatile int32_t x59 = INT32_MIN;
	uint8_t x60 = UINT8_MAX;

	t13 = (x57==(x58-(x59<=x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = -19LL;
	volatile int8_t x64 = 1;
	int32_t t14 = -1104;

	t14 = (x61==(x62-(x63<=x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 160030;

	t15 = (x65==(x66-(x67<=x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = -221;
	int8_t x70 = INT8_MIN;
	int64_t x71 = 982071LL;
	uint8_t x72 = UINT8_MAX;

	t16 = (x69==(x70-(x71<=x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MAX;
	int16_t x74 = -1;
	volatile uint64_t x76 = 39226144LLU;
	int32_t t17 = -197537304;

	t17 = (x73==(x74-(x75<=x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 52;
	int64_t x79 = INT64_MIN;
	int32_t t18 = 1001678989;

	t18 = (x77==(x78-(x79<=x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = UINT64_MAX;
	volatile uint64_t x87 = 8723982373560748796LLU;
	int64_t x88 = INT64_MIN;

	t19 = (x85==(x86-(x87<=x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x90 = 902635181834612182LLU;
	static volatile int32_t x91 = -196;
	int64_t x92 = -588439618LL;
	volatile int32_t t20 = -3036;

	t20 = (x89==(x90-(x91<=x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = 21U;

	t21 = (x93==(x94-(x95<=x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 8U;
	uint8_t x98 = 22U;
	int32_t x99 = INT32_MAX;
	static int8_t x100 = -1;

	t22 = (x97==(x98-(x99<=x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 11870LLU;
	static int16_t x102 = INT16_MIN;
	int8_t x103 = 1;
	static volatile uint64_t x104 = UINT64_MAX;
	static int32_t t23 = 0;

	t23 = (x101==(x102-(x103<=x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = 3728;
	static int32_t x107 = 823534;
	static volatile int64_t x108 = INT64_MAX;

	t24 = (x105==(x106-(x107<=x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 1;
	volatile int64_t x110 = -1LL;
	uint16_t x111 = 398U;
	uint16_t x112 = 506U;
	static volatile int32_t t25 = -1867379;

	t25 = (x109==(x110-(x111<=x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = -1LL;
	static uint32_t x116 = 192U;
	int32_t t26 = 125884017;

	t26 = (x113==(x114-(x115<=x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = 0U;
	int16_t x118 = INT16_MAX;
	uint32_t x119 = 0U;
	int32_t t27 = 2;

	t27 = (x117==(x118-(x119<=x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = 206729541U;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t28 = -229;

	t28 = (x121==(x122-(x123<=x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = 24;
	int16_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	int32_t t29 = 1945;

	t29 = (x125==(x126-(x127<=x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 708U;
	int32_t x130 = INT32_MAX;
	volatile int32_t t30 = -74;

	t30 = (x129==(x130-(x131<=x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -4;
	static int16_t x134 = INT16_MIN;
	volatile uint64_t x135 = 79935184624LLU;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t31 = 11;

	t31 = (x133==(x134-(x135<=x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 2U;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = -4;

	t32 = (x137==(x138-(x139<=x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = 63595U;
	volatile int64_t x142 = -1LL;
	uint16_t x143 = 3U;
	int16_t x144 = -1;

	t33 = (x141==(x142-(x143<=x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	volatile int32_t x146 = INT32_MAX;
	volatile uint16_t x147 = 10249U;
	volatile int32_t t34 = -2;

	t34 = (x145==(x146-(x147<=x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 49452459U;
	int32_t x151 = INT32_MAX;
	static volatile int8_t x152 = 16;
	static volatile int32_t t35 = -523133;

	t35 = (x149==(x150-(x151<=x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = -492329550;
	int16_t x154 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	static volatile int32_t t36 = -1684424;

	t36 = (x153==(x154-(x155<=x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = INT16_MIN;
	uint64_t x158 = 14787187903LLU;
	int16_t x159 = -1;
	volatile uint16_t x160 = 7127U;
	int32_t t37 = 73697;

	t37 = (x157==(x158-(x159<=x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = -218;
	int64_t x163 = -1LL;
	uint32_t x164 = 3180U;
	volatile int32_t t38 = 1628;

	t38 = (x161==(x162-(x163<=x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MIN;
	volatile int64_t x167 = -3527112371703365927LL;
	uint64_t x168 = 90LLU;
	int32_t t39 = 1;

	t39 = (x165==(x166-(x167<=x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x169 = 7085704LLU;
	int8_t x170 = -2;
	int32_t x171 = INT32_MIN;
	int32_t t40 = 14924;

	t40 = (x169==(x170-(x171<=x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -11384932LL;
	uint64_t x174 = 62666842468775LLU;
	static int16_t x176 = -1;
	volatile int32_t t41 = 158705;

	t41 = (x173==(x174-(x175<=x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 96958976LLU;
	int64_t x179 = -1LL;
	int64_t x180 = 1LL;

	t42 = (x177==(x178-(x179<=x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x187 = -1;
	volatile int64_t x188 = INT64_MIN;

	t43 = (x185==(x186-(x187<=x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = 663LL;
	int16_t x195 = INT16_MAX;
	static int16_t x196 = INT16_MAX;
	int32_t t44 = 3386159;

	t44 = (x193==(x194-(x195<=x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = 5955982;
	static int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	volatile int32_t t45 = -501804691;

	t45 = (x201==(x202-(x203<=x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = INT8_MAX;
	static int64_t x206 = -1LL;
	int8_t x207 = -1;
	static uint16_t x208 = UINT16_MAX;
	int32_t t46 = 0;

	t46 = (x205==(x206-(x207<=x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 65U;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = 416798547882LLU;
	static volatile int32_t t47 = 2;

	t47 = (x209==(x210-(x211<=x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x213 = 479LLU;
	static int8_t x214 = INT8_MIN;
	int64_t x215 = -1LL;
	int16_t x216 = -17;
	volatile int32_t t48 = 0;

	t48 = (x213==(x214-(x215<=x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x217 = 1310451;
	volatile uint32_t x219 = 0U;
	int16_t x220 = INT16_MIN;
	static int32_t t49 = -2;

	t49 = (x217==(x218-(x219<=x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x222 = INT16_MIN;
	int64_t x223 = 237LL;
	int32_t x224 = INT32_MIN;
	int32_t t50 = 33348780;

	t50 = (x221==(x222-(x223<=x224)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 711U;
	int16_t x226 = 30;
	static volatile uint16_t x227 = 1934U;

	t51 = (x225==(x226-(x227<=x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -1;
	static int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = UINT16_MAX;
	static int32_t t52 = 7;

	t52 = (x229==(x230-(x231<=x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x233 = 9446U;
	volatile uint8_t x234 = UINT8_MAX;
	int32_t x236 = INT32_MIN;
	static int32_t t53 = 4716863;

	t53 = (x233==(x234-(x235<=x236)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x237 = 1195U;
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MIN;
	volatile uint32_t x240 = UINT32_MAX;

	t54 = (x237==(x238-(x239<=x240)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x242 = UINT64_MAX;
	static int8_t x243 = INT8_MAX;
	int8_t x244 = -17;
	int32_t t55 = 8;

	t55 = (x241==(x242-(x243<=x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = 1U;
	static int64_t x246 = INT64_MAX;
	int16_t x247 = INT16_MAX;
	uint8_t x248 = 0U;
	volatile int32_t t56 = 1;

	t56 = (x245==(x246-(x247<=x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x249 = 57U;
	int16_t x250 = 1;
	int8_t x251 = INT8_MIN;
	int32_t t57 = -61938722;

	t57 = (x249==(x250-(x251<=x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x254 = UINT16_MAX;
	uint32_t x255 = UINT32_MAX;
	static int8_t x256 = -2;
	int32_t t58 = 931;

	t58 = (x253==(x254-(x255<=x256)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x260 = 29U;
	static volatile int32_t t59 = 739;

	t59 = (x257==(x258-(x259<=x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x265 = 26U;
	volatile int32_t x266 = INT32_MAX;
	uint32_t x267 = 7U;
	static uint64_t x268 = UINT64_MAX;
	int32_t t60 = -211;

	t60 = (x265==(x266-(x267<=x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = -7;
	uint8_t x270 = UINT8_MAX;
	volatile int32_t t61 = 65;

	t61 = (x269==(x270-(x271<=x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x273 = 20065866;
	int64_t x274 = 6837LL;
	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;

	t62 = (x273==(x274-(x275<=x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = -1;
	static int8_t x278 = -1;
	static int32_t x279 = INT32_MAX;
	int64_t x280 = 7925008208158663LL;
	int32_t t63 = 39;

	t63 = (x277==(x278-(x279<=x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x281 = 111U;
	volatile int64_t x282 = INT64_MAX;
	int16_t x283 = 0;
	uint64_t x284 = 0LLU;
	static volatile int32_t t64 = -2725;

	t64 = (x281==(x282-(x283<=x284)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x285 = INT64_MIN;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 1;
	int32_t t65 = 149733;

	t65 = (x285==(x286-(x287<=x288)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x289 = INT8_MIN;
	int32_t x290 = 99;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;

	t66 = (x289==(x290-(x291<=x292)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = -1103817434886068LL;
	int64_t x294 = INT64_MAX;
	volatile uint64_t x295 = UINT64_MAX;
	uint16_t x296 = 1U;
	volatile int32_t t67 = -32225;

	t67 = (x293==(x294-(x295<=x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MIN;
	uint64_t x298 = 0LLU;
	int32_t t68 = 481983129;

	t68 = (x297==(x298-(x299<=x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x302 = -1;
	int8_t x303 = 2;
	int8_t x304 = -5;
	volatile int32_t t69 = 1153;

	t69 = (x301==(x302-(x303<=x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MAX;
	volatile uint16_t x306 = 15511U;
	static uint64_t x307 = 46305826LLU;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t70 = -45416;

	t70 = (x305==(x306-(x307<=x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = 5299;
	static uint64_t x311 = 414240020894LLU;

	t71 = (x309==(x310-(x311<=x312)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	static int32_t x316 = -1;

	t72 = (x313==(x314-(x315<=x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = 1627LLU;
	uint8_t x318 = 2U;
	int64_t x319 = INT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t73 = 4524;

	t73 = (x317==(x318-(x319<=x320)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = INT8_MIN;
	int8_t x323 = -1;
	uint32_t x324 = 773U;
	volatile int32_t t74 = -88373;

	t74 = (x321==(x322-(x323<=x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = 11;
	int32_t x326 = INT32_MAX;
	static int8_t x327 = INT8_MAX;
	static volatile int32_t t75 = 193239485;

	t75 = (x325==(x326-(x327<=x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = 57U;
	int16_t x331 = -1;
	int32_t x332 = INT32_MIN;
	volatile int32_t t76 = -118721761;

	t76 = (x329==(x330-(x331<=x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = 469LL;
	int8_t x334 = 1;
	int8_t x335 = INT8_MIN;
	static uint32_t x336 = 1883910U;
	int32_t t77 = -1;

	t77 = (x333==(x334-(x335<=x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x338 = -1;
	int8_t x339 = 0;
	int8_t x340 = -1;
	volatile int32_t t78 = -731060;

	t78 = (x337==(x338-(x339<=x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MAX;
	int32_t x343 = -1;
	int32_t x344 = INT32_MIN;

	t79 = (x341==(x342-(x343<=x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x346 = INT8_MIN;
	uint64_t x348 = UINT64_MAX;
	static int32_t t80 = -3;

	t80 = (x345==(x346-(x347<=x348)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x349 = INT64_MIN;
	uint8_t x350 = 29U;
	volatile int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t81 = 255017;

	t81 = (x349==(x350-(x351<=x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x353 = 12767029301782496LL;
	int8_t x354 = 10;
	uint64_t x355 = 169LLU;
	uint64_t x356 = 617892334766287LLU;

	t82 = (x353==(x354-(x355<=x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = 20451LLU;
	int16_t x358 = 12;
	volatile int64_t x359 = 242527645532112754LL;
	int8_t x360 = INT8_MIN;

	t83 = (x357==(x358-(x359<=x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x361 = 2U;
	int8_t x362 = INT8_MIN;
	int32_t x363 = 145003;
	volatile int32_t x364 = INT32_MAX;
	int32_t t84 = 196651889;

	t84 = (x361==(x362-(x363<=x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x365 = 116418488U;
	int32_t x366 = INT32_MIN;
	static uint16_t x367 = UINT16_MAX;
	volatile int32_t t85 = -11;

	t85 = (x365==(x366-(x367<=x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x369 = 23U;
	uint8_t x370 = 10U;
	int16_t x371 = INT16_MAX;
	uint64_t x372 = 1499512408127041LLU;
	int32_t t86 = -6599377;

	t86 = (x369==(x370-(x371<=x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = INT32_MIN;
	volatile int64_t x375 = -3969LL;
	uint64_t x376 = 533880035987LLU;
	int32_t t87 = -73884;

	t87 = (x373==(x374-(x375<=x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x377 = 427996757832LL;
	uint32_t x378 = 20517401U;
	int16_t x379 = INT16_MIN;
	uint16_t x380 = 4138U;
	int32_t t88 = 162;

	t88 = (x377==(x378-(x379<=x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = -6;
	int16_t x382 = 5380;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MAX;

	t89 = (x381==(x382-(x383<=x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x385 = INT16_MAX;
	volatile uint16_t x386 = 7997U;
	static uint32_t x387 = UINT32_MAX;
	volatile int32_t t90 = 0;

	t90 = (x385==(x386-(x387<=x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MAX;
	static int64_t x391 = -1LL;
	int32_t x392 = INT32_MAX;

	t91 = (x389==(x390-(x391<=x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x393 = 0U;
	int64_t x394 = INT64_MAX;
	uint32_t x395 = 35U;

	t92 = (x393==(x394-(x395<=x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MIN;
	volatile int8_t x398 = INT8_MIN;
	int32_t t93 = -14;

	t93 = (x397==(x398-(x399<=x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x404 = INT32_MIN;
	int32_t t94 = -104846;

	t94 = (x401==(x402-(x403<=x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x406 = INT16_MIN;
	int64_t x407 = -1LL;
	int16_t x408 = INT16_MAX;
	volatile int32_t t95 = 170742;

	t95 = (x405==(x406-(x407<=x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = 1;
	static int64_t x410 = 7214481040428314LL;
	int8_t x411 = 15;
	uint32_t x412 = 25034U;
	volatile int32_t t96 = -95669;

	t96 = (x409==(x410-(x411<=x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x413 = -1;
	int16_t x415 = INT16_MIN;
	volatile uint8_t x416 = 55U;
	int32_t t97 = -154;

	t97 = (x413==(x414-(x415<=x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = -2613644;
	volatile uint64_t x418 = 10422179494LLU;
	uint8_t x419 = UINT8_MAX;
	volatile int16_t x420 = INT16_MIN;
	int32_t t98 = -117198;

	t98 = (x417==(x418-(x419<=x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x421 = 1U;
	static int16_t x423 = -1;
	volatile uint64_t x424 = 745289462257757015LLU;
	static volatile int32_t t99 = -2;

	t99 = (x421==(x422-(x423<=x424)));

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

