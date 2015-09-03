#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 1LLU;
int16_t x9 = -1;
static int8_t x12 = INT8_MIN;
volatile int32_t x19 = INT32_MIN;
static int32_t x22 = -88;
int8_t x33 = 6;
int16_t x48 = 1;
volatile int32_t x61 = -1;
int32_t x65 = 509983343;
uint32_t x66 = 42912201U;
volatile int16_t x69 = -1;
uint32_t x71 = UINT32_MAX;
static volatile int64_t x77 = -1LL;
int64_t x78 = -1LL;
uint64_t x83 = 3695201694123650113LLU;
int64_t x84 = 188215LL;
uint64_t x86 = 209351632769LLU;
uint64_t t21 = 6812632431163147938LLU;
static int32_t x91 = INT32_MAX;
static int64_t x96 = -7904797396548389LL;
volatile uint64_t x97 = UINT64_MAX;
uint8_t x107 = 1U;
volatile uint64_t x108 = UINT64_MAX;
int32_t x118 = INT32_MAX;
int64_t x119 = INT64_MAX;
static int8_t x121 = INT8_MIN;
int8_t x128 = 0;
volatile int32_t x129 = INT32_MIN;
int32_t x132 = -341756257;
int64_t x138 = -1118690148264338LL;
uint16_t x139 = 1U;
volatile int64_t t34 = 115968088018228LL;
volatile int32_t x143 = 59;
int32_t t35 = -2;
int32_t t36 = 43;
static int64_t x151 = 128552657486LL;
uint64_t x152 = 56889569299755507LLU;
volatile int64_t t38 = 4158386554477LL;
static int16_t x158 = -1;
int8_t x159 = INT8_MAX;
int32_t x160 = 101370013;
static int16_t x164 = -1;
volatile uint64_t t41 = 681341LLU;
uint8_t x173 = 120U;
int32_t t43 = -167;
uint16_t x177 = 0U;
volatile int32_t x179 = INT32_MAX;
int8_t x182 = -63;
volatile int64_t x187 = INT64_MIN;
uint32_t x189 = UINT32_MAX;
static volatile int16_t x191 = INT16_MIN;
int64_t t47 = -613LL;
uint8_t x203 = UINT8_MAX;
int8_t x204 = INT8_MIN;
uint64_t x209 = UINT64_MAX;
int8_t x215 = INT8_MIN;
static int64_t x220 = INT64_MAX;
volatile int8_t x233 = -1;
int64_t x240 = INT64_MIN;
uint8_t x249 = UINT8_MAX;
volatile int8_t x257 = INT8_MAX;
int64_t t66 = -109LL;
int16_t x273 = INT16_MIN;
int64_t x275 = INT64_MIN;
uint8_t x283 = UINT8_MAX;
volatile int16_t x286 = INT16_MAX;
uint64_t x288 = 4697390647LLU;
int8_t x290 = 13;
int32_t x292 = -1;
int64_t t72 = -819285595557307LL;
int8_t x300 = INT8_MIN;
static uint32_t t74 = 415157U;
int8_t x305 = -1;
volatile uint16_t x312 = 5261U;
int64_t t76 = INT64_MAX;
uint64_t x316 = 689176LLU;
volatile int32_t t77 = 17063854;
uint16_t x319 = UINT16_MAX;
volatile int64_t t78 = 15561LL;
volatile uint8_t x321 = UINT8_MAX;
int32_t x328 = -1;
static volatile int32_t t80 = 47;
static int8_t x331 = 29;
static int32_t t81 = 1;
int64_t x334 = INT64_MIN;
volatile int8_t x336 = INT8_MIN;
int16_t x341 = INT16_MIN;
int32_t x349 = INT32_MAX;
int16_t x358 = 1;
int64_t x359 = INT64_MIN;
uint16_t x363 = 2984U;
static uint8_t x365 = 5U;
int16_t x367 = INT16_MIN;
static volatile int32_t x370 = INT32_MIN;
uint8_t x372 = 0U;
uint64_t t93 = UINT64_MAX;
uint32_t x382 = 2176U;
static int32_t x391 = INT32_MIN;
volatile int64_t x395 = INT64_MIN;
volatile uint64_t t97 = 100173618137LLU;
int32_t x397 = INT32_MAX;
uint32_t x402 = UINT32_MAX;
int32_t x404 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = 531597210791LL;
	int32_t x3 = 2526056;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 6LL;

	t0 = (x1+(x2*(x3==x4)));

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 2117132386216759LLU;
	static uint8_t x6 = UINT8_MAX;
	int32_t x7 = -1;
	int16_t x8 = INT16_MIN;

	t1 = (x5+(x6*(x7==x8)));

	if (t1 != 2117132386216759LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 5U;
	int64_t x11 = INT64_MIN;
	int32_t t2 = -12;

	t2 = (x9+(x10*(x11==x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 106559U;
	int64_t x14 = 6166718895560LL;
	uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = 12402;
	int64_t t3 = 708238508257LL;

	t3 = (x13+(x14*(x15==x16)));

	if (t3 != 106559LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 18;
	int16_t x18 = -1;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -178485768;

	t4 = (x17+(x18*(x19==x20)));

	if (t4 != 18) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 2;
	uint8_t x23 = 11U;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -514871;

	t5 = (x21+(x22*(x23==x24)));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int8_t x26 = -1;
	uint32_t x27 = 4502052U;
	uint8_t x28 = 7U;
	volatile int32_t t6 = -794981;

	t6 = (x25+(x26*(x27==x28)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 15U;
	uint32_t x30 = 4U;
	int16_t x31 = INT16_MAX;
	int64_t x32 = 34LL;
	static volatile uint32_t t7 = 80112266U;

	t7 = (x29+(x30*(x31==x32)));

	if (t7 != 15U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	volatile uint16_t x35 = 1959U;
	int16_t x36 = -4082;
	int32_t t8 = 3;

	t8 = (x33+(x34*(x35==x36)));

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1007969;
	static int8_t x38 = 2;
	uint64_t x39 = UINT64_MAX;
	static int8_t x40 = 5;
	volatile int32_t t9 = 61862;

	t9 = (x37+(x38*(x39==x40)));

	if (t9 != 1007969) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	static uint64_t x42 = 420LLU;
	uint8_t x43 = 1U;
	volatile int16_t x44 = 17;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x41+(x42*(x43==x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t t11 = 1;

	t11 = (x45+(x46*(x47==x48)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 29719922420109LL;
	volatile int8_t x50 = -15;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MAX;
	int64_t t12 = -3LL;

	t12 = (x49+(x50*(x51==x52)));

	if (t12 != 29719922420094LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static int8_t x54 = INT8_MIN;
	uint32_t x55 = UINT32_MAX;
	static int64_t x56 = -508LL;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53+(x54*(x55==x56)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile int32_t x58 = INT32_MAX;
	int64_t x59 = 9550840937727LL;
	volatile uint64_t x60 = 1451691LLU;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x57+(x58*(x59==x60)));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;
	int16_t x63 = INT16_MIN;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 36840351;

	t15 = (x61+(x62*(x63==x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = -1;
	static volatile uint32_t t16 = 9931U;

	t16 = (x65+(x66*(x67==x68)));

	if (t16 != 509983343U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	int8_t x72 = 5;
	int32_t t17 = -73725;

	t17 = (x69+(x70*(x71==x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 3;
	uint64_t x74 = 6378427689317880LLU;
	volatile uint32_t x75 = UINT32_MAX;
	uint8_t x76 = 12U;
	static volatile uint64_t t18 = 10415LLU;

	t18 = (x73+(x74*(x75==x76)));

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x79 = UINT32_MAX;
	int64_t x80 = -1LL;
	volatile int64_t t19 = 1LL;

	t19 = (x77+(x78*(x79==x80)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 242;
	int8_t x82 = INT8_MIN;
	volatile int32_t t20 = -1684579;

	t20 = (x81+(x82*(x83==x84)));

	if (t20 != 242) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -3429;
	static uint16_t x87 = UINT16_MAX;
	static uint8_t x88 = 13U;

	t21 = (x85+(x86*(x87==x88)));

	if (t21 != 18446744073709548187LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 3490375U;
	uint32_t x90 = 14448610U;
	static volatile uint64_t x92 = UINT64_MAX;
	uint32_t t22 = 15608U;

	t22 = (x89+(x90*(x91==x92)));

	if (t22 != 3490375U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int64_t x94 = INT64_MIN;
	static int16_t x95 = INT16_MIN;
	static int64_t t23 = 1409101317LL;

	t23 = (x93+(x94*(x95==x96)));

	if (t23 != 255LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	static uint16_t x100 = 10830U;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x97+(x98*(x99==x100)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	volatile int8_t x103 = 14;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x101+(x102*(x103==x104)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 24876U;
	int64_t x106 = INT64_MIN;
	int64_t t26 = -3776354875224LL;

	t26 = (x105+(x106*(x107==x108)));

	if (t26 != 24876LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	uint64_t x110 = 153495996860738LLU;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = 3;
	uint64_t t27 = 862375507LLU;

	t27 = (x109+(x110*(x111==x112)));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	volatile uint32_t x114 = 1688554U;
	int32_t x115 = -1;
	volatile int16_t x116 = -6;
	uint32_t t28 = 1U;

	t28 = (x113+(x114*(x115==x116)));

	if (t28 != 127U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t29 = -3;

	t29 = (x117+(x118*(x119==x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	static int16_t x124 = -1;
	int32_t t30 = -368870457;

	t30 = (x121+(x122*(x123==x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	volatile uint32_t x126 = UINT32_MAX;
	volatile int32_t x127 = -1948871;
	static volatile uint32_t t31 = 15586U;

	t31 = (x125+(x126*(x127==x128)));

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 121U;
	static volatile int64_t x131 = -1LL;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x129+(x130*(x131==x132)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 107264289U;
	uint8_t x134 = UINT8_MAX;
	uint64_t x135 = 9289999870993LLU;
	int16_t x136 = -1;
	volatile uint32_t t33 = 224479355U;

	t33 = (x133+(x134*(x135==x136)));

	if (t33 != 107264289U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x140 = 0U;

	t34 = (x137+(x138*(x139==x140)));

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	int32_t x142 = INT32_MAX;
	volatile int16_t x144 = INT16_MAX;

	t35 = (x141+(x142*(x143==x144)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 110U;
	uint16_t x146 = 1U;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = INT16_MAX;

	t36 = (x145+(x146*(x147==x148)));

	if (t36 != 110) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint32_t x150 = UINT32_MAX;
	uint32_t t37 = UINT32_MAX;

	t37 = (x149+(x150*(x151==x152)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 0LL;
	volatile int64_t x154 = INT64_MIN;
	uint32_t x155 = UINT32_MAX;
	volatile int16_t x156 = INT16_MAX;

	t38 = (x153+(x154*(x155==x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = INT16_MIN;
	volatile int32_t t39 = 22;

	t39 = (x157+(x158*(x159==x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile int16_t x162 = INT16_MIN;
	static volatile int32_t x163 = INT32_MIN;
	int32_t t40 = -56;

	t40 = (x161+(x162*(x163==x164)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = 11U;
	static uint64_t x166 = UINT64_MAX;
	int8_t x167 = -1;
	int16_t x168 = 997;

	t41 = (x165+(x166*(x167==x168)));

	if (t41 != 11LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint64_t x170 = 249038925266051338LLU;
	int32_t x171 = INT32_MIN;
	static volatile uint64_t x172 = 1889546820LLU;
	volatile uint64_t t42 = 5366LLU;

	t42 = (x169+(x170*(x171==x172)));

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = 57;
	uint8_t x176 = UINT8_MAX;

	t43 = (x173+(x174*(x175==x176)));

	if (t43 != 120) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = UINT8_MAX;
	int16_t x180 = -8;
	int32_t t44 = 133849445;

	t44 = (x177+(x178*(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x183 = 19U;
	static int16_t x184 = INT16_MIN;
	int32_t t45 = 459;

	t45 = (x181+(x182*(x183==x184)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 7977611U;
	static volatile int64_t x186 = -276012039748666606LL;
	uint32_t x188 = UINT32_MAX;
	volatile int64_t t46 = -1669910595903236773LL;

	t46 = (x185+(x186*(x187==x188)));

	if (t46 != 7977611LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = -17642025828138613LL;
	uint8_t x192 = 11U;

	t47 = (x189+(x190*(x191==x192)));

	if (t47 != 4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	uint32_t x194 = 17101533U;
	static volatile uint64_t x195 = UINT64_MAX;
	int32_t x196 = INT32_MIN;
	uint32_t t48 = 531418284U;

	t48 = (x193+(x194*(x195==x196)));

	if (t48 != 4294967168U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 0U;
	int16_t x198 = INT16_MIN;
	int32_t x199 = -7;
	uint32_t x200 = 31491U;
	volatile uint32_t t49 = 708834U;

	t49 = (x197+(x198*(x199==x200)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint32_t x202 = 53U;
	static volatile uint32_t t50 = UINT32_MAX;

	t50 = (x201+(x202*(x203==x204)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -3;
	volatile uint16_t x206 = 42U;
	int8_t x207 = -1;
	volatile int16_t x208 = -1;
	int32_t t51 = -44035765;

	t51 = (x205+(x206*(x207==x208)));

	if (t51 != 39) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = 2693;
	static int8_t x211 = INT8_MIN;
	static uint8_t x212 = 11U;
	uint64_t t52 = UINT64_MAX;

	t52 = (x209+(x210*(x211==x212)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 1;
	int8_t x214 = 17;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 436156;

	t53 = (x213+(x214*(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 1U;
	volatile int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	static int32_t t54 = 469445141;

	t54 = (x217+(x218*(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -20;
	int64_t x222 = INT64_MAX;
	static uint16_t x223 = 1U;
	uint16_t x224 = 166U;
	static int64_t t55 = -162482057751LL;

	t55 = (x221+(x222*(x223==x224)));

	if (t55 != -20LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MAX;
	static uint8_t x227 = 3U;
	int16_t x228 = INT16_MAX;
	int32_t t56 = -2991;

	t56 = (x225+(x226*(x227==x228)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 557327U;
	uint32_t x230 = 110400041U;
	static uint16_t x231 = UINT16_MAX;
	volatile int64_t x232 = INT64_MAX;
	uint32_t t57 = 1750512U;

	t57 = (x229+(x230*(x231==x232)));

	if (t57 != 557327U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x234 = 0U;
	int32_t x235 = 21;
	uint16_t x236 = UINT16_MAX;
	static volatile int32_t t58 = -378378;

	t58 = (x233+(x234*(x235==x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MIN;
	int64_t x239 = 50687762LL;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x237+(x238*(x239==x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -19;
	int16_t x242 = -1;
	uint32_t x243 = 1827U;
	int8_t x244 = -14;
	static volatile int32_t t60 = -1;

	t60 = (x241+(x242*(x243==x244)));

	if (t60 != -19) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int64_t x247 = INT64_MAX;
	uint32_t x248 = 34067U;
	int32_t t61 = -1;

	t61 = (x245+(x246*(x247==x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = INT16_MIN;
	int64_t x251 = -1LL;
	static uint32_t x252 = 3378595U;
	int32_t t62 = 1796;

	t62 = (x249+(x250*(x251==x252)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -179399706004LL;
	uint16_t x254 = 705U;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	static int64_t t63 = 471297LL;

	t63 = (x253+(x254*(x255==x256)));

	if (t63 != -179399706004LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x258 = INT32_MIN;
	int16_t x259 = -507;
	static int8_t x260 = -1;
	int32_t t64 = -84939;

	t64 = (x257+(x258*(x259==x260)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int64_t x262 = 924LL;
	int8_t x263 = INT8_MIN;
	int16_t x264 = 94;
	volatile int64_t t65 = 89783230455LL;

	t65 = (x261+(x262*(x263==x264)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = -3;
	int64_t x270 = -16333LL;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MAX;

	t66 = (x269+(x270*(x271==x272)));

	if (t66 != -3LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = INT64_MIN;
	static int32_t x276 = INT32_MIN;
	int64_t t67 = 3073878LL;

	t67 = (x273+(x274*(x275==x276)));

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MIN;
	uint8_t x278 = 0U;
	static int16_t x279 = INT16_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t68 = INT32_MIN;

	t68 = (x277+(x278*(x279==x280)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = 12;
	volatile uint8_t x282 = 100U;
	int64_t x284 = 143674888006LL;
	volatile int32_t t69 = 1;

	t69 = (x281+(x282*(x283==x284)));

	if (t69 != 12) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -44;
	uint32_t x287 = 66056049U;
	int32_t t70 = -1;

	t70 = (x285+(x286*(x287==x288)));

	if (t70 != -44) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	static int16_t x291 = 19;
	int32_t t71 = 14044634;

	t71 = (x289+(x290*(x291==x292)));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 13U;
	int64_t x294 = -1LL;
	volatile uint8_t x295 = 36U;
	uint64_t x296 = UINT64_MAX;

	t72 = (x293+(x294*(x295==x296)));

	if (t72 != 13LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x297 = -35;
	volatile int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MAX;
	volatile int32_t t73 = -74413;

	t73 = (x297+(x298*(x299==x300)));

	if (t73 != -35) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 19U;
	static uint8_t x302 = UINT8_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	int32_t x304 = -21;

	t74 = (x301+(x302*(x303==x304)));

	if (t74 != 19U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x306 = 127LLU;
	uint64_t x307 = UINT64_MAX;
	static int8_t x308 = INT8_MIN;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x305+(x306*(x307==x308)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MAX;
	int64_t x310 = -1LL;
	uint16_t x311 = 126U;

	t76 = (x309+(x310*(x311==x312)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = 24304452;
	int32_t x314 = 7;
	int8_t x315 = INT8_MIN;

	t77 = (x313+(x314*(x315==x316)));

	if (t77 != 24304452) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = 178084255454LL;
	int8_t x318 = INT8_MIN;
	int16_t x320 = INT16_MIN;

	t78 = (x317+(x318*(x319==x320)));

	if (t78 != 178084255454LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x322 = -1LL;
	int8_t x323 = INT8_MIN;
	int32_t x324 = -1;
	volatile int64_t t79 = -1LL;

	t79 = (x321+(x322*(x323==x324)));

	if (t79 != 255LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int32_t x326 = INT32_MAX;
	int16_t x327 = 9;

	t80 = (x325+(x326*(x327==x328)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x329 = INT8_MAX;
	volatile int16_t x330 = INT16_MAX;
	volatile uint32_t x332 = 1U;

	t81 = (x329+(x330*(x331==x332)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = -1LL;
	int8_t x335 = -10;
	volatile int64_t t82 = 89743LL;

	t82 = (x333+(x334*(x335==x336)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	int64_t x338 = 1288607LL;
	uint16_t x339 = 1U;
	int64_t x340 = 172605866443824LL;
	volatile int64_t t83 = 304541835LL;

	t83 = (x337+(x338*(x339==x340)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x342 = INT64_MIN;
	uint32_t x343 = UINT32_MAX;
	static uint16_t x344 = 971U;
	volatile int64_t t84 = -14055016731606200LL;

	t84 = (x341+(x342*(x343==x344)));

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x345 = INT8_MAX;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t85 = -38718553;

	t85 = (x345+(x346*(x347==x348)));

	if (t85 != 65662) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x350 = -1LL;
	uint32_t x351 = 432U;
	int64_t x352 = -1LL;
	volatile int64_t t86 = -107019569743LL;

	t86 = (x349+(x350*(x351==x352)));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = INT8_MIN;
	uint64_t x354 = 13977LLU;
	int8_t x355 = INT8_MAX;
	volatile uint64_t x356 = 278265617593711741LLU;
	volatile uint64_t t87 = 4802LLU;

	t87 = (x353+(x354*(x355==x356)));

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = 41654U;
	static int8_t x360 = 28;
	volatile uint32_t t88 = 29U;

	t88 = (x357+(x358*(x359==x360)));

	if (t88 != 41654U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -1LL;
	int8_t x362 = -1;
	int8_t x364 = -1;
	int64_t t89 = 41639863LL;

	t89 = (x361+(x362*(x363==x364)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x366 = -1;
	int16_t x368 = INT16_MIN;
	int32_t t90 = 1;

	t90 = (x365+(x366*(x367==x368)));

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	int64_t t91 = INT64_MIN;

	t91 = (x369+(x370*(x371==x372)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = 19867889;
	static uint16_t x374 = 6016U;
	int8_t x375 = 18;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t92 = 72524;

	t92 = (x373+(x374*(x375==x376)));

	if (t92 != 19867889) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int8_t x378 = INT8_MAX;
	static int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MIN;

	t93 = (x377+(x378*(x379==x380)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x381 = 31;
	int8_t x383 = -1;
	static uint8_t x384 = 2U;
	static uint32_t t94 = 221910619U;

	t94 = (x381+(x382*(x383==x384)));

	if (t94 != 31U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MIN;
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = -32268328722796LL;
	int32_t x388 = INT32_MIN;
	int64_t t95 = INT64_MIN;

	t95 = (x385+(x386*(x387==x388)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	int16_t x392 = INT16_MIN;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x389+(x390*(x391==x392)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 888412291LLU;
	int32_t x394 = INT32_MIN;
	static volatile int32_t x396 = 1;

	t97 = (x393+(x394*(x395==x396)));

	if (t97 != 888412291LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x398 = 968U;
	int32_t x399 = -6;
	int8_t x400 = INT8_MAX;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x397+(x398*(x399==x400)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x403 = INT64_MAX;
	uint32_t t99 = 43622U;

	t99 = (x401+(x402*(x403==x404)));

	if (t99 != 255U) { NG(); } else { ; }
	
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

