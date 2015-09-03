#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 1U;
static int64_t t0 = 186495822776LL;
uint64_t x5 = 25741945LLU;
int16_t x10 = INT16_MIN;
int16_t x12 = INT16_MIN;
static uint32_t x14 = UINT32_MAX;
volatile int64_t t3 = -2757058622986039LL;
static int8_t x18 = 2;
int8_t x20 = INT8_MIN;
volatile int32_t t5 = 14063807;
int16_t x26 = INT16_MIN;
int16_t x28 = 15;
uint16_t x31 = UINT16_MAX;
int32_t x35 = INT32_MIN;
static int8_t x37 = INT8_MIN;
volatile int64_t x46 = INT64_MIN;
static uint32_t x50 = 222U;
volatile int64_t x51 = -131260624LL;
int8_t x52 = INT8_MIN;
int8_t x61 = INT8_MIN;
int16_t x63 = 2;
uint32_t t15 = 3845U;
static volatile int32_t x81 = 0;
uint8_t x83 = 3U;
int8_t x87 = INT8_MAX;
volatile uint64_t t20 = 239259LLU;
int32_t x92 = INT32_MIN;
uint8_t x95 = 84U;
uint32_t t23 = 1U;
uint16_t x112 = 4110U;
volatile uint16_t x116 = 2U;
uint32_t x117 = 375377U;
int16_t x122 = INT16_MIN;
int64_t x129 = INT64_MAX;
int64_t x133 = INT64_MAX;
volatile int64_t x134 = 2753567LL;
uint32_t x143 = 13U;
volatile uint64_t x150 = 29730LLU;
static int32_t x154 = 7;
int64_t t37 = 34867491LL;
volatile int8_t x161 = INT8_MAX;
uint32_t t38 = 4U;
uint32_t x165 = 39457U;
volatile int16_t x167 = 31;
static int64_t x168 = -1LL;
int64_t x170 = -1LL;
static int16_t x180 = INT16_MIN;
int64_t x186 = INT64_MAX;
int8_t x196 = INT8_MIN;
static uint8_t x208 = 5U;
int16_t x214 = INT16_MAX;
int16_t x216 = 2;
int32_t x223 = INT32_MIN;
static int8_t x225 = INT8_MIN;
int64_t t53 = 836415516LL;
static uint64_t t54 = 80652166712539LLU;
volatile uint32_t x245 = 413332U;
int32_t x247 = INT32_MIN;
volatile int64_t x252 = INT64_MIN;
uint32_t x263 = 29U;
int64_t x266 = -1LL;
uint8_t x271 = 3U;
int64_t t64 = 1146441889053975526LL;
uint64_t x282 = 607LLU;
volatile int8_t x283 = INT8_MIN;
static uint32_t x285 = UINT32_MAX;
int32_t x286 = INT32_MIN;
volatile uint64_t t69 = 1LLU;
uint32_t x301 = 38956014U;
static int32_t x305 = INT32_MIN;
int8_t x308 = -1;
uint32_t x316 = 4106276U;
int32_t x317 = INT32_MIN;
int8_t x322 = -1;
int64_t t76 = -130643837410LL;
int32_t x326 = INT32_MAX;
int64_t x332 = -4416165458835737LL;
uint64_t x333 = 37884923LLU;
int8_t x335 = 27;
int64_t x338 = -521786650033633LL;
static int64_t x343 = -1LL;
volatile uint8_t x350 = UINT8_MAX;
int32_t x351 = 185;
uint16_t x353 = UINT16_MAX;
int16_t x354 = 1;
static volatile int64_t t84 = -899188684626914468LL;
static uint64_t t85 = 14352715LLU;
volatile int64_t t86 = INT64_MIN;
int8_t x372 = 45;
uint32_t t90 = 12706400U;
uint8_t x384 = UINT8_MAX;
int32_t x385 = INT32_MAX;
volatile uint16_t x389 = 10U;
volatile uint32_t x390 = UINT32_MAX;
volatile int16_t x391 = -1;
uint16_t x396 = UINT16_MAX;
int64_t t95 = INT64_MIN;
int16_t x403 = -1;
static volatile int64_t t96 = -5LL;
int64_t x413 = 1952941899805112174LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = -514335190709LL;

	t0 = ((x1+(x2/x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -5395;
	uint16_t x7 = 15U;
	int64_t x8 = 6LL;
	uint64_t t1 = 70430294LLU;

	t1 = ((x5+(x6/x7))&x8);

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = ((x9+(x10/x11))&x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3U;
	static uint8_t x15 = UINT8_MAX;
	int64_t x16 = -1LL;

	t3 = ((x13+(x14/x15))&x16);

	if (t3 != 16843012LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int8_t x19 = INT8_MIN;
	volatile int32_t t4 = 87114087;

	t4 = ((x17+(x18/x19))&x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 252;
	uint8_t x22 = 56U;
	uint16_t x23 = 1160U;
	uint8_t x24 = 9U;

	t5 = ((x21+(x22/x23))&x24);

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 22839154396LLU;
	uint16_t x27 = UINT16_MAX;
	uint64_t t6 = 43162525801541076LLU;

	t6 = ((x25+(x26/x27))&x28);

	if (t6 != 12LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 2891U;
	int16_t x30 = INT16_MIN;
	static uint8_t x32 = 105U;
	uint32_t t7 = 0U;

	t7 = ((x29+(x30/x31))&x32);

	if (t7 != 73U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint64_t x34 = 3857LLU;
	int16_t x36 = 458;
	volatile uint64_t t8 = 186799252702068307LLU;

	t8 = ((x33+(x34/x35))&x36);

	if (t8 != 458LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -346;
	volatile int16_t x39 = INT16_MIN;
	volatile int32_t x40 = 15944229;
	int32_t t9 = -49179;

	t9 = ((x37+(x38/x39))&x40);

	if (t9 != 15944192) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 2U;
	int32_t x42 = INT32_MIN;
	int64_t x43 = 3597LL;
	volatile int16_t x44 = -1;
	int64_t t10 = 286075726571964231LL;

	t10 = ((x41+(x42/x43))&x44);

	if (t10 != -597018LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -289544026504114LL;
	static int64_t x47 = 674260566929687LL;
	int8_t x48 = INT8_MIN;
	static int64_t t11 = -3464817492923993LL;

	t11 = ((x45+(x46/x47))&x48);

	if (t11 != -289544026517888LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t t12 = -3856LL;

	t12 = ((x49+(x50/x51))&x52);

	if (t12 != 65408LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1069524165U;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 9972U;
	static volatile int64_t x56 = INT64_MIN;
	static int64_t t13 = 324536090LL;

	t13 = ((x53+(x54/x55))&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = ((x61+(x62/x63))&x64);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x65 = 7U;
	int32_t x66 = INT32_MIN;
	static uint32_t x67 = 15U;
	int32_t x68 = -1;

	t15 = ((x65+(x66/x67))&x68);

	if (t15 != 143165583U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	volatile int32_t x70 = INT32_MIN;
	static int8_t x71 = INT8_MAX;
	static volatile uint32_t x72 = 39U;
	uint32_t t16 = 2957209U;

	t16 = ((x69+(x70/x71))&x72);

	if (t16 != 39U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1145;
	int16_t x74 = INT16_MIN;
	static int32_t x75 = -510612;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -2;

	t17 = ((x73+(x74/x75))&x76);

	if (t17 != -1152) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -236951349600LL;
	int64_t x78 = 1543530028606262843LL;
	int64_t x79 = INT64_MAX;
	int64_t x80 = -1LL;
	volatile int64_t t18 = -95926LL;

	t18 = ((x77+(x78/x79))&x80);

	if (t18 != -236951349600LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x82 = 493382597816876452LLU;
	int16_t x84 = INT16_MIN;
	uint64_t t19 = 130941441789LLU;

	t19 = ((x81+(x82/x83))&x84);

	if (t19 != 164460865938948096LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	uint64_t x86 = 1694LLU;
	int32_t x88 = -3270;

	t20 = ((x85+(x86/x87))&x88);

	if (t20 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -4143LL;
	uint32_t x90 = 3699710U;
	int16_t x91 = INT16_MIN;
	int64_t t21 = -16LL;

	t21 = ((x89+(x90/x91))&x92);

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MAX;
	static uint32_t x94 = 1718008939U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t22 = -938534426032LL;

	t22 = ((x93+(x94/x95))&x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x101 = UINT32_MAX;
	static int8_t x102 = INT8_MAX;
	int32_t x103 = -90;
	static uint16_t x104 = 4777U;

	t23 = ((x101+(x102/x103))&x104);

	if (t23 != 4776U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = -1LL;
	uint32_t x107 = 76341U;
	int8_t x108 = INT8_MAX;
	int64_t t24 = 113668835718029LL;

	t24 = ((x105+(x106/x107))&x108);

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = 5622580U;
	int8_t x110 = INT8_MIN;
	volatile uint8_t x111 = 1U;
	volatile uint32_t t25 = 183251107U;

	t25 = ((x109+(x110/x111))&x112);

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	int64_t x115 = INT64_MAX;
	static int64_t t26 = -422332163643LL;

	t26 = ((x113+(x114/x115))&x116);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x118 = UINT8_MAX;
	int8_t x119 = 1;
	uint16_t x120 = UINT16_MAX;
	static volatile uint32_t t27 = 759198U;

	t27 = ((x117+(x118/x119))&x120);

	if (t27 != 47952U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x121 = INT64_MIN;
	uint32_t x123 = 24753005U;
	uint16_t x124 = 17841U;
	volatile int64_t t28 = 885214085210LL;

	t28 = ((x121+(x122/x123))&x124);

	if (t28 != 161LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x125 = UINT16_MAX;
	uint8_t x126 = 95U;
	static int32_t x127 = 11;
	int8_t x128 = INT8_MIN;
	int32_t t29 = -990733788;

	t29 = ((x125+(x126/x127))&x128);

	if (t29 != 65536) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x130 = 10;
	int32_t x131 = -9563;
	volatile int16_t x132 = -1;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x129+(x130/x131))&x132);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x135 = -1482;
	uint8_t x136 = 0U;
	static int64_t t31 = -919LL;

	t31 = ((x133+(x134/x135))&x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 19181U;
	static int16_t x138 = -1;
	static int8_t x139 = INT8_MAX;
	int16_t x140 = -4981;
	static volatile int32_t t32 = -1;

	t32 = ((x137+(x138/x139))&x140);

	if (t32 != 18569) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 410649534899691LLU;
	int64_t x142 = -1LL;
	int16_t x144 = 124;
	volatile uint64_t t33 = 14LLU;

	t33 = ((x141+(x142/x143))&x144);

	if (t33 != 104LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 2;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t34 = 155108LLU;

	t34 = ((x145+(x146/x147))&x148);

	if (t34 != 562967133814802LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = 12454LL;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 3568951U;
	volatile uint64_t t35 = 109781641562330002LLU;

	t35 = ((x149+(x150/x151))&x152);

	if (t35 != 12326LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x155 = 16547U;
	uint32_t x156 = 576068U;
	int64_t t36 = -133347750LL;

	t36 = ((x153+(x154/x155))&x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = 26263544LL;
	uint8_t x158 = 32U;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = -2;

	t37 = ((x157+(x158/x159))&x160);

	if (t37 != 26263544LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x162 = INT32_MIN;
	volatile int8_t x163 = -27;
	uint32_t x164 = 10699U;

	t38 = ((x161+(x162/x163))&x164);

	if (t38 != 8586U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = -1250077LL;
	volatile int64_t t39 = -16168744LL;

	t39 = ((x165+(x166/x167))&x168);

	if (t39 != -868LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 4092851;
	static int16_t x171 = INT16_MAX;
	static volatile int64_t x172 = INT64_MIN;
	int64_t t40 = -31961LL;

	t40 = ((x169+(x170/x171))&x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	static int8_t x174 = -2;
	static volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	int32_t t41 = INT32_MAX;

	t41 = ((x173+(x174/x175))&x176);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 17522119U;
	int64_t x178 = 29433805785806LL;
	int8_t x179 = INT8_MIN;
	int64_t t42 = -1732LL;

	t42 = ((x177+(x178/x179))&x180);

	if (t42 != -229934104576LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x187 = -30;
	static int64_t x188 = INT64_MAX;
	volatile int64_t t43 = 2665484995LL;

	t43 = ((x185+(x186/x187))&x188);

	if (t43 != 8915926306587917243LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x189 = 88U;
	volatile uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 1LLU;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t44 = 103LLU;

	t44 = ((x189+(x190/x191))&x192);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	volatile int32_t t45 = 2031;

	t45 = ((x193+(x194/x195))&x196);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -103;
	static int16_t x198 = INT16_MIN;
	int8_t x199 = -13;
	int64_t x200 = 190776475988748891LL;
	static int64_t t46 = -132LL;

	t46 = ((x197+(x198/x199))&x200);

	if (t46 != 2129LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	static uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 853LLU;
	uint64_t x204 = 39444236259LLU;
	static volatile uint64_t t47 = 2156639894801LLU;

	t47 = ((x201+(x202/x203))&x204);

	if (t47 != 39444217920LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = UINT8_MAX;
	static int8_t x206 = 1;
	static int32_t x207 = INT32_MIN;
	int32_t t48 = 1011264;

	t48 = ((x205+(x206/x207))&x208);

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x215 = 4U;
	uint32_t t49 = 30869165U;

	t49 = ((x213+(x214/x215))&x216);

	if (t49 != 2U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x217 = 3U;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = -31;
	static int32_t t50 = -747;

	t50 = ((x217+(x218/x219))&x220);

	if (t50 != 16777217) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 1U;
	static int16_t x224 = 44;
	static uint64_t t51 = 375627285637LLU;

	t51 = ((x221+(x222/x223))&x224);

	if (t51 != 44LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x226 = INT64_MAX;
	uint16_t x227 = 15564U;
	int64_t x228 = -180LL;
	static int64_t t52 = -21662838426358419LL;

	t52 = ((x225+(x226/x227))&x228);

	if (t52 != 592609357289292LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = INT64_MIN;
	int16_t x230 = -1;
	volatile int8_t x231 = INT8_MIN;
	uint16_t x232 = 282U;

	t53 = ((x229+(x230/x231))&x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 2269576028934904LLU;
	static int16_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MAX;

	t54 = ((x233+(x234/x235))&x236);

	if (t54 != 21241LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MAX;
	int8_t x239 = -1;
	int16_t x240 = INT16_MIN;
	volatile int32_t t55 = 7221;

	t55 = ((x237+(x238/x239))&x240);

	if (t55 != 2147450880) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = INT8_MAX;
	volatile int64_t x242 = 168656844298LL;
	static uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MAX;
	int64_t t56 = 352321LL;

	t56 = ((x241+(x242/x243))&x244);

	if (t56 != 17761LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x246 = 1461U;
	volatile int8_t x248 = INT8_MIN;
	volatile uint32_t t57 = 1656105U;

	t57 = ((x245+(x246/x247))&x248);

	if (t57 != 413312U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 8305538416189LLU;
	static uint16_t x250 = UINT16_MAX;
	int64_t x251 = INT64_MAX;
	uint64_t t58 = 17550105153604LLU;

	t58 = ((x249+(x250/x251))&x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 759U;
	volatile uint16_t x254 = 6U;
	uint8_t x255 = UINT8_MAX;
	volatile int8_t x256 = -13;
	volatile int32_t t59 = -63426513;

	t59 = ((x253+(x254/x255))&x256);

	if (t59 != 755) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 2012354LLU;
	uint8_t x258 = 12U;
	static volatile int32_t x259 = INT32_MIN;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t60 = 8094LLU;

	t60 = ((x257+(x258/x259))&x260);

	if (t60 != 2012354LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x261 = UINT32_MAX;
	int64_t x262 = INT64_MIN;
	int16_t x264 = INT16_MIN;
	int64_t t61 = 104841108170621040LL;

	t61 = ((x261+(x262/x263))&x264);

	if (t61 != -318047307320721408LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x265 = 0LLU;
	uint8_t x267 = 45U;
	uint64_t x268 = 7604790608079358LLU;
	volatile uint64_t t62 = 195357924117097LLU;

	t62 = ((x265+(x266/x267))&x268);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = 0;
	static int8_t x270 = -52;
	int16_t x272 = INT16_MIN;
	int32_t t63 = 1185;

	t63 = ((x269+(x270/x271))&x272);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = -381;
	int64_t x274 = -943LL;
	int32_t x275 = -5407;
	static uint16_t x276 = UINT16_MAX;

	t64 = ((x273+(x274/x275))&x276);

	if (t64 != 65155LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x277 = 12U;
	int16_t x278 = 10664;
	int32_t x279 = -1;
	int16_t x280 = 1;
	volatile uint32_t t65 = 21584125U;

	t65 = ((x277+(x278/x279))&x280);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MIN;
	static volatile int32_t x284 = INT32_MIN;
	uint64_t t66 = 3940267825464756LLU;

	t66 = ((x281+(x282/x283))&x284);

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x287 = INT16_MAX;
	int16_t x288 = INT16_MIN;
	uint32_t t67 = 10U;

	t67 = ((x285+(x286/x287))&x288);

	if (t67 != 4294868992U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x289 = 329923LLU;
	uint64_t x290 = UINT64_MAX;
	static volatile int8_t x291 = INT8_MIN;
	uint32_t x292 = UINT32_MAX;
	volatile uint64_t t68 = 31595376569390LLU;

	t68 = ((x289+(x290/x291))&x292);

	if (t68 != 329924LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x293 = UINT8_MAX;
	int16_t x294 = 0;
	volatile uint64_t x295 = 129904LLU;
	int64_t x296 = 0LL;

	t69 = ((x293+(x294/x295))&x296);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int8_t x299 = 57;
	volatile int16_t x300 = INT16_MAX;
	static volatile int32_t t70 = -300455;

	t70 = ((x297+(x298/x299))&x300);

	if (t70 != 32765) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x302 = 1625935U;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t71 = 1LL;

	t71 = ((x301+(x302/x303))&x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MAX;
	volatile int32_t t72 = 14431;

	t72 = ((x305+(x306/x307))&x308);

	if (t72 != -2147483132) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = 4621;
	uint32_t x310 = 31951122U;
	volatile int8_t x311 = INT8_MIN;
	static uint32_t x312 = UINT32_MAX;
	volatile uint32_t t73 = 6335572U;

	t73 = ((x309+(x310/x311))&x312);

	if (t73 != 4621U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = INT32_MIN;
	volatile uint32_t x314 = 18U;
	int8_t x315 = INT8_MAX;
	static volatile uint32_t t74 = 406U;

	t74 = ((x313+(x314/x315))&x316);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = -1;
	static volatile int8_t x319 = INT8_MIN;
	int8_t x320 = -1;
	int32_t t75 = INT32_MIN;

	t75 = ((x317+(x318/x319))&x320);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -237616;
	int64_t x323 = INT64_MAX;
	volatile int64_t x324 = 16518440609703430LL;

	t76 = ((x321+(x322/x323))&x324);

	if (t76 != 16518440609662464LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int64_t x327 = -349417593LL;
	static uint8_t x328 = 15U;
	uint64_t t77 = 43LLU;

	t77 = ((x325+(x326/x327))&x328);

	if (t77 != 9LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = -192408185LL;
	uint32_t x330 = 4996U;
	int16_t x331 = INT16_MAX;
	int64_t t78 = -161292515565LL;

	t78 = ((x329+(x330/x331))&x332);

	if (t78 != -4416165627034489LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x334 = -7322;
	static int16_t x336 = 309;
	volatile uint64_t t79 = 27561795804LLU;

	t79 = ((x333+(x334/x335))&x336);

	if (t79 != 36LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -1;
	volatile uint16_t x339 = UINT16_MAX;
	static int32_t x340 = 1261507;
	int64_t t80 = -3668798511155750LL;

	t80 = ((x337+(x338/x339))&x340);

	if (t80 != 145793LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x341 = 5U;
	uint16_t x342 = 16192U;
	static uint8_t x344 = UINT8_MAX;
	int64_t t81 = 191207191888627014LL;

	t81 = ((x341+(x342/x343))&x344);

	if (t81 != 197LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x345 = 163213373;
	volatile int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile int64_t t82 = 732932083LL;

	t82 = ((x345+(x346/x347))&x348);

	if (t82 != -140739472687104LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t83 = INT32_MIN;

	t83 = ((x349+(x350/x351))&x352);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x355 = INT32_MIN;
	volatile int64_t x356 = -1LL;

	t84 = ((x353+(x354/x355))&x356);

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x357 = -1;
	static volatile int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 1355795157909378LLU;

	t85 = ((x357+(x358/x359))&x360);

	if (t85 != 1355795157909378LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -7634092835LL;
	static int64_t x363 = INT64_MAX;
	int64_t x364 = INT64_MIN;

	t86 = ((x361+(x362/x363))&x364);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MIN;
	static volatile int32_t x366 = -723;
	uint64_t x367 = 149299LLU;
	int64_t x368 = INT64_MIN;
	volatile uint64_t t87 = 96201525408152LLU;

	t87 = ((x365+(x366/x367))&x368);

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = -1;
	static uint64_t x370 = 1856LLU;
	int32_t x371 = -1;
	uint64_t t88 = 2LLU;

	t88 = ((x369+(x370/x371))&x372);

	if (t88 != 45LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x373 = -9;
	static volatile uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MIN;
	uint64_t x376 = 10723526031932157LLU;
	volatile uint64_t t89 = 889342713354335LLU;

	t89 = ((x373+(x374/x375))&x376);

	if (t89 != 10723526031932148LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -1;
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = -1;
	volatile uint32_t x380 = 6U;

	t90 = ((x377+(x378/x379))&x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = 6614323148863LL;
	static int64_t x382 = INT64_MIN;
	volatile int8_t x383 = -9;
	int64_t t91 = -87102074LL;

	t91 = ((x381+(x382/x383))&x384);

	if (t91 != 119LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x386 = 82LL;
	int8_t x387 = INT8_MIN;
	int64_t x388 = 112020LL;
	int64_t t92 = 1LL;

	t92 = ((x385+(x386/x387))&x388);

	if (t92 != 112020LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x392 = INT8_MIN;
	volatile uint32_t t93 = 241410032U;

	t93 = ((x389+(x390/x391))&x392);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = 646623785U;
	int16_t x395 = INT16_MIN;
	volatile int64_t t94 = -2213658756338655LL;

	t94 = ((x393+(x394/x395))&x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	static uint16_t x398 = 162U;
	int8_t x399 = 1;
	static int64_t x400 = INT64_MIN;

	t95 = ((x397+(x398/x399))&x400);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = 0;
	int64_t x402 = -8163692908LL;
	volatile int32_t x404 = INT32_MAX;

	t96 = ((x401+(x402/x403))&x404);

	if (t96 != 1721241964LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 15735U;
	static uint8_t x406 = 31U;
	static volatile uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = INT64_MAX;
	int64_t t97 = 0LL;

	t97 = ((x405+(x406/x407))&x408);

	if (t97 != 15735LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x410 = 30U;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = -1LL;
	volatile uint64_t t98 = 0LLU;

	t98 = ((x409+(x410/x411))&x412);

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x414 = INT64_MIN;
	volatile uint64_t x415 = 680004428133LLU;
	int8_t x416 = -1;
	uint64_t t99 = 140557844967158691LLU;

	t99 = ((x413+(x414/x415))&x416);

	if (t99 != 1952941899818675868LLU) { NG(); } else { ; }
	
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

