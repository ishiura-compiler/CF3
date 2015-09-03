#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint32_t x4 = UINT32_MAX;
int32_t x5 = -28741;
uint64_t x10 = 57LLU;
volatile int32_t x11 = -1;
uint64_t x14 = 998800252LLU;
volatile uint8_t x30 = 10U;
volatile uint64_t t7 = UINT64_MAX;
int16_t x34 = -54;
static volatile int64_t t8 = 1655022302164LL;
static uint16_t x41 = UINT16_MAX;
int16_t x43 = INT16_MIN;
static int64_t t12 = 131818352LL;
uint16_t x55 = UINT16_MAX;
int64_t t13 = -55102328170005LL;
volatile int8_t x58 = -2;
int8_t x64 = -7;
static uint64_t x69 = 3LLU;
uint8_t x73 = 10U;
int16_t x77 = -1;
int64_t t19 = -17436602250367LL;
uint32_t x82 = UINT32_MAX;
uint8_t x83 = 36U;
int8_t x87 = 60;
volatile int64_t t21 = -14686714866449289LL;
uint32_t x92 = 46U;
int64_t x95 = INT64_MIN;
static uint64_t x120 = UINT64_MAX;
volatile int32_t x121 = -2342;
uint32_t x122 = 98973941U;
uint32_t x132 = 2064925U;
uint32_t x133 = UINT32_MAX;
uint8_t x138 = 0U;
volatile uint64_t x140 = UINT64_MAX;
volatile uint64_t t34 = UINT64_MAX;
int8_t x141 = -33;
static int32_t x142 = INT32_MAX;
static int8_t x148 = -1;
int8_t x151 = INT8_MIN;
volatile int32_t x163 = -1;
int32_t t40 = 7918540;
volatile int32_t x166 = -1;
static int32_t t41 = -10723;
uint64_t t42 = UINT64_MAX;
static int8_t x175 = INT8_MIN;
volatile uint64_t t43 = UINT64_MAX;
int32_t x177 = -5479;
static volatile int32_t x190 = -1;
int8_t x192 = INT8_MIN;
int64_t x199 = -24585489765981813LL;
volatile uint16_t x200 = 920U;
volatile int8_t x215 = INT8_MIN;
static int16_t x219 = INT16_MIN;
static volatile uint64_t t57 = UINT64_MAX;
volatile uint8_t x233 = 74U;
static uint64_t t59 = UINT64_MAX;
volatile int8_t x247 = -1;
static uint16_t x248 = 6U;
int16_t x249 = 3;
int64_t x252 = -1LL;
int32_t x254 = INT32_MAX;
int16_t x259 = 11066;
uint64_t t66 = UINT64_MAX;
int32_t x272 = INT32_MIN;
int8_t x275 = -1;
uint8_t x279 = 19U;
uint64_t x282 = 4282925249987058140LLU;
int32_t x284 = INT32_MAX;
int16_t x286 = INT16_MIN;
int64_t x287 = -1LL;
volatile uint64_t t71 = UINT64_MAX;
int32_t x289 = 475164562;
static volatile uint16_t x291 = 49U;
volatile int32_t x296 = INT32_MIN;
volatile int32_t x300 = INT32_MIN;
int64_t t74 = 1898356147925536LL;
static int32_t x301 = INT32_MIN;
int16_t x303 = 0;
static int32_t t75 = -991843518;
int16_t x307 = -1;
uint8_t x308 = UINT8_MAX;
volatile int32_t t76 = -33014093;
volatile uint64_t x314 = 445697095007558LLU;
int32_t x318 = -1;
uint8_t x320 = 127U;
int8_t x323 = INT8_MIN;
volatile int64_t t80 = 144806922LL;
int8_t x340 = INT8_MIN;
int64_t x341 = INT64_MIN;
uint64_t x343 = 23967114291LLU;
static uint8_t x359 = 10U;
int64_t t93 = -1012958457LL;
int64_t x383 = -216120898210LL;
static uint8_t x384 = 126U;
volatile int16_t x386 = -1;
int64_t x389 = 234407704926813LL;
int32_t x390 = -1;
uint16_t x396 = 0U;
int8_t x398 = -8;
uint32_t x399 = 0U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x3 = -1;
	int64_t t0 = 1646538131003821LL;

	t0 = (((x1|x2)|x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	volatile int64_t x7 = -1LL;
	volatile uint16_t x8 = 5373U;
	static volatile int64_t t1 = 40198594596LL;

	t1 = (((x5|x6)|x7)|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -4169139LL;
	int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (((x9|x10)|x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	int32_t x15 = INT32_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (((x13|x14)|x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	uint32_t x18 = 46454U;
	int32_t x19 = INT32_MIN;
	static volatile int8_t x20 = 37;
	static uint32_t t4 = 0U;

	t4 = (((x17|x18)|x19)|x20);

	if (t4 != 2147530111U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	uint16_t x22 = 11U;
	uint16_t x23 = 180U;
	int32_t x24 = 93957;
	int64_t t5 = 2LL;

	t5 = (((x21|x22)|x23)|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 25928;
	int64_t x26 = INT64_MIN;
	static int16_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	int64_t t6 = -234900399175543LL;

	t6 = (((x25|x26)|x27)|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1085875;
	int64_t x31 = INT64_MIN;
	static uint64_t x32 = UINT64_MAX;

	t7 = (((x29|x30)|x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 3U;
	volatile int32_t x35 = -479734;
	int64_t x36 = INT64_MIN;

	t8 = (((x33|x34)|x35)|x36);

	if (t8 != -9223372032559808565LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 6;
	static int64_t x38 = 2890878027905018078LL;
	int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MAX;
	int64_t t9 = 26211600122LL;

	t9 = (((x37|x38)|x39)|x40);

	if (t9 != 2890878028068421631LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = 61507517LLU;
	int64_t x44 = INT64_MIN;
	static uint64_t t10 = UINT64_MAX;

	t10 = (((x41|x42)|x43)|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 6;
	static int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MAX;
	int64_t t11 = -15LL;

	t11 = (((x45|x46)|x47)|x48);

	if (t11 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static int64_t x50 = INT64_MAX;
	static volatile int8_t x51 = 1;
	int32_t x52 = INT32_MIN;

	t12 = (((x49|x50)|x51)|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	static uint32_t x54 = UINT32_MAX;
	volatile int64_t x56 = -3264843719398379LL;

	t13 = (((x53|x54)|x55)|x56);

	if (t13 != -3264840864890881LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -1;
	static uint64_t x59 = 1620LLU;
	static int8_t x60 = 1;
	uint64_t t14 = UINT64_MAX;

	t14 = (((x57|x58)|x59)|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -6451603LL;
	volatile int64_t x62 = -1LL;
	uint8_t x63 = 56U;
	volatile int64_t t15 = -2LL;

	t15 = (((x61|x62)|x63)|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MIN;
	static uint8_t x67 = 84U;
	uint32_t x68 = 1090303170U;
	uint32_t t16 = 1021843U;

	t16 = (((x65|x66)|x67)|x68);

	if (t16 != 3237786879U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 0;
	volatile int16_t x71 = 49;
	static int8_t x72 = 61;
	static uint64_t t17 = 11LLU;

	t17 = (((x69|x70)|x71)|x72);

	if (t17 != 63LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = -40944421;

	t18 = (((x73|x74)|x75)|x76);

	if (t18 != -118) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -1;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MAX;

	t19 = (((x77|x78)|x79)|x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x84 = 354686;
	uint32_t t20 = UINT32_MAX;

	t20 = (((x81|x82)|x83)|x84);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -27;
	static int64_t x86 = INT64_MIN;
	volatile int16_t x88 = -13612;

	t21 = (((x85|x86)|x87)|x88);

	if (t21 != -3LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	uint32_t x90 = 6U;
	int32_t x91 = -177047074;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (((x89|x90)|x91)|x92);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int8_t x94 = 44;
	int32_t x96 = INT32_MIN;
	volatile int64_t t23 = -19912605863349468LL;

	t23 = (((x93|x94)|x95)|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	int32_t x99 = INT32_MAX;
	uint32_t x100 = 25551420U;
	int64_t t24 = 23809679LL;

	t24 = (((x97|x98)|x99)|x100);

	if (t24 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	static int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	uint16_t x104 = 53U;
	volatile int32_t t25 = 0;

	t25 = (((x101|x102)|x103)|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = -1;
	int64_t x107 = 10LL;
	int16_t x108 = -1;
	int64_t t26 = 22079LL;

	t26 = (((x105|x106)|x107)|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 0LL;
	int16_t x110 = INT16_MAX;
	uint8_t x111 = 1U;
	static int8_t x112 = -1;
	volatile int64_t t27 = -27647920314217231LL;

	t27 = (((x109|x110)|x111)|x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	int32_t x114 = 1799;
	uint16_t x115 = 95U;
	volatile int16_t x116 = -3705;
	static int32_t t28 = -2179060;

	t28 = (((x113|x114)|x115)|x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -52;
	static volatile uint16_t x118 = 7U;
	static uint32_t x119 = 227412205U;
	uint64_t t29 = UINT64_MAX;

	t29 = (((x117|x118)|x119)|x120);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x123 = INT32_MIN;
	volatile uint64_t x124 = 26657571LLU;
	uint64_t t30 = 8170860892582LLU;

	t30 = (((x121|x122)|x123)|x124);

	if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int32_t x126 = -270125897;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	static int64_t t31 = -72LL;

	t31 = (((x125|x126)|x127)|x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -11456;
	uint8_t x130 = 6U;
	int16_t x131 = -1;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x129|x130)|x131)|x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MAX;
	uint8_t x135 = 3U;
	static int8_t x136 = 18;
	uint32_t t33 = UINT32_MAX;

	t33 = (((x133|x134)|x135)|x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static int16_t x139 = -1;

	t34 = (((x137|x138)|x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x143 = 0;
	uint8_t x144 = 5U;
	volatile int32_t t35 = -209432314;

	t35 = (((x141|x142)|x143)|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -11LL;
	int32_t x146 = INT32_MIN;
	uint32_t x147 = 39320477U;
	static volatile int64_t t36 = -1295836LL;

	t36 = (((x145|x146)|x147)|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -14;
	int16_t x150 = INT16_MAX;
	static int64_t x152 = INT64_MIN;
	int64_t t37 = -61984070142228LL;

	t37 = (((x149|x150)|x151)|x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MAX;
	int16_t x155 = -1;
	static int64_t x156 = -231LL;
	volatile int64_t t38 = -6236569149703LL;

	t38 = (((x153|x154)|x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 29U;
	uint64_t x158 = 450397291304724LLU;
	uint64_t x159 = 13307536669724988LLU;
	int16_t x160 = 5663;
	static volatile uint64_t t39 = 6928268403LLU;

	t39 = (((x157|x158)|x159)|x160);

	if (t39 != 13475212369516351LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	int32_t x162 = INT32_MAX;
	int32_t x164 = INT32_MIN;

	t40 = (((x161|x162)|x163)|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -147487926;
	int32_t x167 = INT32_MIN;
	volatile uint16_t x168 = 3U;

	t41 = (((x165|x166)|x167)|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = UINT64_MAX;
	int32_t x172 = INT32_MAX;

	t42 = (((x169|x170)|x171)|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 70LLU;
	uint32_t x174 = 13U;
	volatile uint8_t x176 = 121U;

	t43 = (((x173|x174)|x175)|x176);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MAX;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;
	int64_t t44 = -134188609764959LL;

	t44 = (((x177|x178)|x179)|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int64_t x183 = -281025632476LL;
	int64_t x184 = -256456703LL;
	int64_t t45 = 971874266LL;

	t45 = (((x181|x182)|x183)|x184);

	if (t45 != -4315LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	int32_t x187 = -1;
	int16_t x188 = -1;
	volatile int64_t t46 = -5857590999LL;

	t46 = (((x185|x186)|x187)|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int32_t x191 = -1;
	int64_t t47 = 7720932864LL;

	t47 = (((x189|x190)|x191)|x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;
	uint32_t t48 = UINT32_MAX;

	t48 = (((x193|x194)|x195)|x196);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x197 = -1;
	uint32_t x198 = UINT32_MAX;
	int64_t t49 = -5440LL;

	t49 = (((x197|x198)|x199)|x200);

	if (t49 != -24585488018964481LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = 24137345293LL;
	uint16_t x204 = UINT16_MAX;
	volatile int64_t t50 = -4079754780LL;

	t50 = (((x201|x202)|x203)|x204);

	if (t50 != 25769803775LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = -346274208204816LL;
	volatile uint64_t x207 = UINT64_MAX;
	static volatile int16_t x208 = INT16_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x205|x206)|x207)|x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	volatile uint32_t x210 = 7U;
	static uint16_t x211 = UINT16_MAX;
	int16_t x212 = -1;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (((x209|x210)|x211)|x212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	static int64_t x214 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = (((x213|x214)|x215)|x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = UINT16_MAX;
	static volatile int64_t x218 = 1533LL;
	int8_t x220 = -42;
	int64_t t54 = -1743794606431LL;

	t54 = (((x217|x218)|x219)|x220);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = 946;
	volatile int64_t x223 = 7745529054309LL;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (((x221|x222)|x223)|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 21372367LL;
	static uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 4LLU;
	int8_t x228 = 0;
	uint64_t t56 = 42637LLU;

	t56 = (((x225|x226)|x227)|x228);

	if (t56 != 21372415LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 267504110LLU;
	int8_t x230 = INT8_MIN;
	volatile int64_t x231 = -6777LL;
	int16_t x232 = INT16_MAX;

	t57 = (((x229|x230)|x231)|x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = -1;
	int32_t x235 = INT32_MIN;
	volatile int32_t x236 = 6481666;
	static int32_t t58 = 296960;

	t58 = (((x233|x234)|x235)|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MAX;
	uint64_t x240 = UINT64_MAX;

	t59 = (((x237|x238)|x239)|x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	static int16_t x244 = 1;
	volatile int64_t t60 = 383655LL;

	t60 = (((x241|x242)|x243)|x244);

	if (t60 != -127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int32_t x246 = INT32_MIN;
	volatile int32_t t61 = -935573236;

	t61 = (((x245|x246)|x247)|x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	int8_t x251 = INT8_MIN;
	static volatile int64_t t62 = -1235821636761LL;

	t62 = (((x249|x250)|x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 3761160LL;
	volatile int16_t x255 = INT16_MIN;
	static volatile uint8_t x256 = UINT8_MAX;
	volatile int64_t t63 = -1028517977LL;

	t63 = (((x253|x254)|x255)|x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 2731;
	int16_t x258 = -872;
	uint64_t x260 = 2176127507710292580LLU;
	uint64_t t64 = UINT64_MAX;

	t64 = (((x257|x258)|x259)|x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = 113803;
	volatile int64_t x263 = -1LL;
	uint32_t x264 = 4U;
	int64_t t65 = -431308707943628LL;

	t65 = (((x261|x262)|x263)|x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 19LLU;
	static volatile int8_t x266 = INT8_MIN;
	uint64_t x267 = UINT64_MAX;
	static int8_t x268 = INT8_MAX;

	t66 = (((x265|x266)|x267)|x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (((x269|x270)|x271)|x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	static int32_t x274 = INT32_MIN;
	static int64_t x276 = -1LL;
	int64_t t68 = 1002380526625165LL;

	t68 = (((x273|x274)|x275)|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 496U;
	volatile int16_t x278 = 469;
	volatile int64_t x280 = INT64_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = (((x277|x278)|x279)|x280);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x281|x282)|x283)|x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint32_t x288 = 16912U;

	t71 = (((x285|x286)|x287)|x288);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x290 = UINT32_MAX;
	volatile int16_t x292 = INT16_MIN;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = (((x289|x290)|x291)|x292);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = -2242;
	int16_t x294 = INT16_MIN;
	int16_t x295 = -119;
	volatile int32_t t73 = 88503806;

	t73 = (((x293|x294)|x295)|x296);

	if (t73 != -65) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	static int64_t x299 = 269272241055LL;

	t74 = (((x297|x298)|x299)|x300);

	if (t74 != -11265LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = INT32_MIN;
	int16_t x304 = INT16_MAX;

	t75 = (((x301|x302)|x303)|x304);

	if (t75 != -2147450881) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	static int16_t x306 = -14078;

	t76 = (((x305|x306)|x307)|x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int64_t x310 = -1LL;
	static uint64_t x311 = UINT64_MAX;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (((x309|x310)|x311)|x312);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = -68LL;
	uint64_t t78 = UINT64_MAX;

	t78 = (((x313|x314)|x315)|x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint64_t x319 = 234249LLU;
	uint64_t t79 = UINT64_MAX;

	t79 = (((x317|x318)|x319)|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 2870094U;
	uint8_t x322 = UINT8_MAX;
	int64_t x324 = 292157087780112LL;

	t80 = (((x321|x322)|x323)|x324);

	if (t80 != 292160855343103LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	volatile uint32_t x327 = 504525U;
	int8_t x328 = INT8_MAX;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (((x325|x326)|x327)|x328);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int16_t x330 = 16;
	uint16_t x331 = 194U;
	static int8_t x332 = INT8_MIN;
	volatile int32_t t82 = 601628853;

	t82 = (((x329|x330)|x331)|x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MAX;
	volatile int64_t x335 = INT64_MIN;
	uint16_t x336 = UINT16_MAX;
	int64_t t83 = 132LL;

	t83 = (((x333|x334)|x335)|x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 74667576LLU;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 3494841364401LLU;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (((x337|x338)|x339)|x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x342 = 32112LLU;
	static int64_t x344 = INT64_MIN;
	uint64_t t85 = 10725LLU;

	t85 = (((x341|x342)|x343)|x344);

	if (t85 != 9223372060821912947LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	static int16_t x346 = 234;
	int32_t x347 = INT32_MAX;
	static volatile uint8_t x348 = 4U;
	volatile int64_t t86 = 2237LL;

	t86 = (((x345|x346)|x347)|x348);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1379;
	int32_t x350 = 94120;
	int16_t x351 = 4;
	static volatile int16_t x352 = -2;
	volatile int32_t t87 = -295;

	t87 = (((x349|x350)|x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 41833270U;
	volatile uint16_t x354 = 36U;
	int32_t x355 = 34330660;
	static uint16_t x356 = UINT16_MAX;
	uint32_t t88 = 4U;

	t88 = (((x353|x354)|x355)|x356);

	if (t88 != 41943039U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = 3940LL;
	static int8_t x358 = -5;
	uint8_t x360 = 16U;
	int64_t t89 = 2207170LL;

	t89 = (((x357|x358)|x359)|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -989602635436LL;
	int64_t x362 = -52741570222511LL;
	uint8_t x363 = 24U;
	int32_t x364 = INT32_MIN;
	volatile int64_t t90 = 49424424LL;

	t90 = (((x361|x362)|x363)|x364);

	if (t90 != -1216927907LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	uint32_t x366 = 16009108U;
	int64_t x367 = INT64_MAX;
	int16_t x368 = -1;
	int64_t t91 = 778185326479359LL;

	t91 = (((x365|x366)|x367)|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -7573636;
	volatile int8_t x370 = -31;
	volatile uint64_t x371 = UINT64_MAX;
	volatile int32_t x372 = INT32_MIN;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x369|x370)|x371)|x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 178LL;
	int32_t x374 = INT32_MIN;
	int16_t x375 = 0;
	int32_t x376 = -1;

	t93 = (((x373|x374)|x375)|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int64_t x378 = -50536011586668LL;
	int16_t x379 = 7;
	uint64_t x380 = 161442498308LLU;
	volatile uint64_t t94 = 16710363349095356LLU;

	t94 = (((x377|x378)|x379)|x380);

	if (t94 != 18446693692652332951LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 1U;
	static int32_t x382 = INT32_MAX;
	static int64_t t95 = 13938239LL;

	t95 = (((x381|x382)|x383)|x384);

	if (t95 != -214748364801LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	uint32_t x387 = 8106U;
	uint16_t x388 = 274U;
	uint32_t t96 = UINT32_MAX;

	t96 = (((x385|x386)|x387)|x388);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x391 = -230LL;
	uint64_t x392 = 14LLU;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x389|x390)|x391)|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 9U;
	int16_t x394 = -1;
	int64_t x395 = INT64_MIN;
	int64_t t98 = -1300764LL;

	t98 = (((x393|x394)|x395)|x396);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x400 = 1;
	static volatile uint32_t t99 = UINT32_MAX;

	t99 = (((x397|x398)|x399)|x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

