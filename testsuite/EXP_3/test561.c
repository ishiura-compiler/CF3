#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 54;
static int8_t x6 = -12;
static uint32_t x8 = 80912874U;
uint64_t t1 = 2603303LLU;
int32_t x10 = INT32_MIN;
int16_t x19 = INT16_MIN;
int8_t x20 = 13;
volatile int64_t t4 = -27785987LL;
volatile int8_t x26 = -1;
volatile int64_t t6 = 1875323098160303880LL;
uint64_t t7 = 2022922632LLU;
static uint32_t x33 = 25619321U;
uint8_t x35 = 0U;
int64_t x36 = 29939165877100LL;
uint16_t x44 = 44U;
static int16_t x45 = INT16_MAX;
static int8_t x51 = -3;
static volatile int64_t x56 = -250191471739859LL;
int64_t x57 = INT64_MIN;
volatile uint64_t t14 = 61663122079LLU;
int32_t x66 = -213034272;
static volatile int64_t x79 = INT64_MIN;
uint8_t x85 = UINT8_MAX;
uint32_t x90 = UINT32_MAX;
uint64_t t20 = 1632719239LLU;
int16_t x102 = 8846;
static int32_t x104 = -1;
volatile uint32_t t22 = 6843U;
int32_t x107 = 0;
int32_t t23 = 817441;
int32_t x109 = -44187070;
int32_t x110 = INT32_MIN;
int64_t x111 = INT64_MIN;
static int64_t t24 = 490990865829639LL;
volatile uint32_t t25 = 6030U;
uint16_t x123 = 8U;
int8_t x124 = INT8_MAX;
int8_t x125 = -25;
int8_t x126 = INT8_MIN;
int16_t x130 = -1;
int64_t x134 = INT64_MIN;
static uint64_t x136 = 9LLU;
static volatile uint64_t t30 = 131LLU;
uint16_t x141 = UINT16_MAX;
volatile int8_t x142 = -25;
volatile uint64_t t32 = UINT64_MAX;
uint8_t x149 = 0U;
uint8_t x159 = 9U;
static volatile uint64_t x162 = 46LLU;
volatile int64_t x167 = -386234858LL;
int64_t x168 = INT64_MIN;
int64_t t38 = 15403368414801041LL;
volatile uint64_t x179 = 288237940081LLU;
static uint64_t x191 = UINT64_MAX;
int16_t x194 = INT16_MIN;
static int32_t x199 = INT32_MIN;
volatile int8_t x205 = INT8_MIN;
static int64_t x209 = INT64_MIN;
volatile uint16_t x210 = 39U;
int32_t x217 = INT32_MIN;
volatile uint32_t t50 = 214U;
int32_t x222 = INT32_MIN;
int8_t x229 = INT8_MIN;
volatile int32_t t53 = 2387423;
static uint64_t x233 = 9199652640LLU;
static volatile int64_t x242 = -1LL;
int64_t t56 = -439891515829647522LL;
static int64_t x254 = 114251629905LL;
int64_t x256 = -1LL;
int64_t x259 = 3523LL;
static volatile int8_t x263 = -1;
static volatile uint64_t t60 = 230119LLU;
int16_t x280 = INT16_MIN;
static uint8_t x287 = 14U;
int16_t x288 = -12;
int16_t x294 = INT16_MAX;
int16_t x297 = -1;
int64_t x300 = -821542LL;
static int16_t x302 = INT16_MIN;
int8_t x306 = INT8_MIN;
static volatile int32_t x315 = INT32_MIN;
volatile int8_t x329 = INT8_MIN;
volatile int64_t x337 = INT64_MIN;
int32_t x341 = INT32_MIN;
static uint32_t x343 = UINT32_MAX;
uint32_t x344 = 205479110U;
uint16_t x347 = 0U;
int8_t x350 = -1;
volatile uint16_t x358 = 2U;
static int16_t x359 = -45;
static int32_t x362 = -1;
volatile int32_t x363 = INT32_MAX;
volatile int8_t x364 = INT8_MIN;
static int8_t x365 = 11;
volatile int64_t t82 = -1LL;
volatile uint64_t t83 = 133632361243273LLU;
int32_t x382 = INT32_MIN;
uint32_t x385 = UINT32_MAX;
int32_t x399 = 0;
volatile uint64_t t89 = 16149724765800003LLU;
int16_t x402 = INT16_MIN;
uint32_t x413 = UINT32_MAX;
uint64_t x414 = 105LLU;
uint64_t t93 = 143214830923943LLU;
volatile int8_t x418 = -8;
int8_t x424 = -3;
volatile uint32_t t95 = 105U;
uint8_t x428 = UINT8_MAX;
int8_t x430 = INT8_MIN;
int16_t x432 = INT16_MAX;
volatile uint64_t t97 = 364817453174567862LLU;


void f0(void) {
	volatile int32_t x1 = -1;
	int64_t x2 = INT64_MAX;
	volatile uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = 394284698070101LL;

	t0 = ((x1%x2)-(x3/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x7 = 1451163219166315577LLU;

	t1 = ((x5%x6)-(x7/x8));

	if (t1 != 18446744055774665015LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 15801052LLU;
	volatile int16_t x11 = -5;
	int8_t x12 = INT8_MAX;
	uint64_t t2 = 4420LLU;

	t2 = ((x9%x10)-(x11/x12));

	if (t2 != 15801052LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint32_t x14 = 22439U;
	volatile int16_t x15 = INT16_MAX;
	volatile int16_t x16 = INT16_MIN;
	static volatile uint32_t t3 = 309780U;

	t3 = ((x13%x14)-(x15/x16));

	if (t3 != 7934U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int64_t x18 = -1LL;

	t4 = ((x17%x18)-(x19/x20));

	if (t4 != 2520LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int8_t x22 = INT8_MAX;
	volatile int8_t x23 = -8;
	static volatile uint64_t x24 = 14595LLU;
	uint64_t t5 = 20LLU;

	t5 = ((x21%x22)-(x23/x24));

	if (t5 != 18445480165242699304LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 5U;
	static int16_t x27 = -1;
	int64_t x28 = 310LL;

	t6 = ((x25%x26)-(x27/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 15U;
	static int32_t x30 = INT32_MIN;
	volatile int16_t x31 = INT16_MAX;
	volatile uint64_t x32 = 720137498LLU;

	t7 = ((x29%x30)-(x31/x32));

	if (t7 != 15LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	int64_t t8 = 3712733LL;

	t8 = ((x33%x34)-(x35/x36));

	if (t8 != 25619321LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	static volatile uint32_t x38 = 3683U;
	int16_t x39 = INT16_MIN;
	volatile int32_t x40 = INT32_MIN;
	volatile int64_t t9 = -21553881363008LL;

	t9 = ((x37%x38)-(x39/x40));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	static int16_t x43 = 53;
	uint64_t t10 = 2LLU;

	t10 = ((x41%x42)-(x43/x44));

	if (t10 != 2147483646LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = 25609597683827617LLU;
	int64_t x48 = INT64_MIN;
	volatile uint64_t t11 = 30461284789LLU;

	t11 = ((x45%x46)-(x47/x48));

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint64_t x50 = 1644927LLU;
	int16_t x52 = -58;
	uint64_t t12 = 2520271942882LLU;

	t12 = ((x49%x50)-(x51/x52));

	if (t12 != 234765LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = UINT32_MAX;
	uint64_t t13 = 1340543382741336LLU;

	t13 = ((x53%x54)-(x55/x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 4U;

	t14 = ((x57%x58)-(x59/x60));

	if (t14 != 13835058055282163713LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = -101067311;
	static uint16_t x67 = 2428U;
	int32_t x68 = -1;
	int32_t t15 = 1;

	t15 = ((x65%x66)-(x67/x68));

	if (t15 != -101064883) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x70 = -36296506;
	int8_t x71 = INT8_MIN;
	int16_t x72 = -1;
	volatile int32_t t16 = 9;

	t16 = ((x69%x70)-(x71/x72));

	if (t16 != -5989922) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = 519U;
	static volatile int16_t x80 = INT16_MIN;
	int64_t t17 = 22792LL;

	t17 = ((x77%x78)-(x79/x80));

	if (t17 != -281474976710727LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x86 = -970131;
	int16_t x87 = 903;
	uint16_t x88 = 1615U;
	static int32_t t18 = 56;

	t18 = ((x85%x86)-(x87/x88));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	uint32_t x91 = 996U;
	int32_t x92 = INT32_MIN;
	volatile int64_t t19 = 2278993LL;

	t19 = ((x89%x90)-(x91/x92));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = -1LL;
	volatile uint64_t x95 = 319175354321360LLU;
	int64_t x96 = -1LL;

	t20 = ((x93%x94)-(x95/x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = 3;
	uint64_t x99 = 1899543264LLU;
	int16_t x100 = INT16_MAX;
	volatile uint64_t t21 = 1437225LLU;

	t21 = ((x97%x98)-(x99/x100));

	if (t21 != 18446744073709493646LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x103 = -33;

	t22 = ((x101%x102)-(x103/x104));

	if (t22 != 4266U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x105 = UINT16_MAX;
	static uint16_t x106 = UINT16_MAX;
	static int8_t x108 = INT8_MIN;

	t23 = ((x105%x106)-(x107/x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x112 = INT32_MAX;

	t24 = ((x109%x110)-(x111/x112));

	if (t24 != 4250780228LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = UINT32_MAX;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = 1;

	t25 = ((x113%x114)-(x115/x116));

	if (t25 != 4294967041U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = 1941;
	int16_t x122 = INT16_MIN;
	static volatile int32_t t26 = -43554;

	t26 = ((x121%x122)-(x123/x124));

	if (t26 != 1941) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x127 = 83LLU;
	int32_t x128 = INT32_MAX;
	uint64_t t27 = 1425897625859839LLU;

	t27 = ((x125%x126)-(x127/x128));

	if (t27 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x131 = 1033106LLU;
	int8_t x132 = INT8_MIN;
	static uint64_t t28 = 22637745252LLU;

	t28 = ((x129%x130)-(x131/x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = INT16_MAX;
	int64_t x135 = 29967LL;
	uint64_t t29 = 1796LLU;

	t29 = ((x133%x134)-(x135/x136));

	if (t29 != 29438LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	uint64_t x138 = 62298848458432279LLU;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;

	t30 = ((x137%x138)-(x139/x140));

	if (t30 != 6284930022018535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x143 = -209699391847LL;
	volatile uint64_t x144 = 79692582548LLU;
	static volatile uint64_t t31 = 137039LLU;

	t31 = ((x141%x142)-(x143/x144));

	if (t31 != 18446744073478077840LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = 44246317LL;
	int8_t x146 = -1;
	int64_t x147 = -1LL;
	volatile uint64_t x148 = UINT64_MAX;

	t32 = ((x145%x146)-(x147/x148));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x150 = 32U;
	int8_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t33 = 99624;

	t33 = ((x149%x150)-(x151/x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile int16_t x154 = 11171;
	static uint64_t x155 = 959168172649367LLU;
	int16_t x156 = 67;
	uint64_t t34 = 14498143LLU;

	t34 = ((x153%x154)-(x155/x156));

	if (t34 != 18446729757766685933LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 6242U;
	uint32_t x158 = 1U;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t35 = 1196491730U;

	t35 = ((x157%x158)-(x159/x160));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x163 = INT8_MIN;
	uint32_t x164 = 44006585U;
	volatile uint64_t t36 = 252685934992744846LLU;

	t36 = ((x161%x162)-(x163/x164));

	if (t36 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = 11U;
	static int64_t t37 = -159LL;

	t37 = ((x165%x166)-(x167/x168));

	if (t37 != -10LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = 0;
	volatile int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	volatile int64_t x172 = INT64_MIN;

	t38 = ((x169%x170)-(x171/x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 32771867402301LLU;
	static int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	volatile int64_t x176 = INT64_MIN;
	volatile uint64_t t39 = 598589LLU;

	t39 = ((x173%x174)-(x175/x176));

	if (t39 != 1266949080LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1;
	int32_t x178 = -1;
	static volatile uint64_t x180 = 28908863752673840LLU;
	uint64_t t40 = 250265587455LLU;

	t40 = ((x177%x178)-(x179/x180));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -59;
	int64_t x182 = 13803536085LL;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t41 = -7524963LL;

	t41 = ((x181%x182)-(x183/x184));

	if (t41 != -59LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = -11253;
	uint8_t x187 = 2U;
	static int32_t x188 = -8868;
	int32_t t42 = 409;

	t42 = ((x185%x186)-(x187/x188));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 0U;
	int16_t x190 = INT16_MAX;
	int8_t x192 = INT8_MIN;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x189%x190)-(x191/x192));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -3;
	int8_t x195 = -42;
	uint64_t x196 = 9673069231279299LLU;
	volatile uint64_t t44 = 3795066LLU;

	t44 = ((x193%x194)-(x195/x196));

	if (t44 != 18446744073709549706LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = -1;
	int16_t x198 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	static int64_t t45 = 27629279LL;

	t45 = ((x197%x198)-(x199/x200));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 3U;
	static volatile int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MAX;
	static volatile int32_t x204 = INT32_MIN;
	int64_t t46 = 27268172376440466LL;

	t46 = ((x201%x202)-(x203/x204));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = INT64_MIN;
	uint64_t x207 = 17389137822604LLU;
	int8_t x208 = INT8_MIN;
	uint64_t t47 = 122737768LLU;

	t47 = ((x205%x206)-(x207/x208));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x211 = 15188413U;
	uint32_t x212 = UINT32_MAX;
	static volatile int64_t t48 = 2975LL;

	t48 = ((x209%x210)-(x211/x212));

	if (t48 != -8LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = -3679;
	uint8_t x216 = 6U;
	uint32_t t49 = 5U;

	t49 = ((x213%x214)-(x215/x216));

	if (t49 != 4294935141U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x218 = 32U;
	int32_t x219 = 369977179;
	int32_t x220 = -10764;

	t50 = ((x217%x218)-(x219/x220));

	if (t50 != 34371U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = -1;
	static int8_t x223 = 62;
	static uint8_t x224 = UINT8_MAX;
	int32_t t51 = 26;

	t51 = ((x221%x222)-(x223/x224));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x225 = INT32_MAX;
	static volatile uint8_t x226 = 69U;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t52 = -6375464LL;

	t52 = ((x225%x226)-(x227/x228));

	if (t52 != 28LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x230 = INT16_MIN;
	int8_t x231 = 0;
	int8_t x232 = -1;

	t53 = ((x229%x230)-(x231/x232));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = 1;
	static int32_t x236 = INT32_MIN;
	uint64_t t54 = 343041335785802LLU;

	t54 = ((x233%x234)-(x235/x236));

	if (t54 != 9199652640LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -51108932570798LL;
	volatile int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	uint64_t x240 = 2528085097450168LLU;
	static volatile uint64_t t55 = 64681242059337855LLU;

	t55 = ((x237%x238)-(x239/x240));

	if (t55 != 18446692964776973522LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x241 = -1LL;
	volatile uint32_t x243 = UINT32_MAX;
	int16_t x244 = -3;

	t56 = ((x241%x242)-(x243/x244));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = 265921U;
	static int16_t x255 = -1;
	static volatile int64_t t57 = -2210760665334294793LL;

	t57 = ((x253%x254)-(x255/x256));

	if (t57 != 265920LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x257 = INT32_MAX;
	static int8_t x258 = -1;
	uint64_t x260 = 2374771LLU;
	volatile uint64_t t58 = 17844771LLU;

	t58 = ((x257%x258)-(x259/x260));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = -1;
	int32_t x264 = -1;
	int32_t t59 = 9528;

	t59 = ((x261%x262)-(x263/x264));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x273 = 1381173663782LLU;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 201136831632320LLU;
	int8_t x276 = INT8_MAX;

	t60 = ((x273%x274)-(x275/x276));

	if (t60 != 18446743871128635616LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = 671;
	int32_t x278 = -1;
	uint8_t x279 = 0U;
	int32_t t61 = 3;

	t61 = ((x277%x278)-(x279/x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 513078172646476456LLU;
	volatile int16_t x284 = INT16_MIN;
	volatile uint64_t t62 = 42407LLU;

	t62 = ((x281%x282)-(x283/x284));

	if (t62 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MAX;
	volatile int32_t x286 = -13382;
	static volatile int32_t t63 = 2;

	t63 = ((x285%x286)-(x287/x288));

	if (t63 != 7198) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x293 = 17959U;
	uint16_t x295 = 6U;
	volatile int8_t x296 = INT8_MAX;
	int32_t t64 = -26706;

	t64 = ((x293%x294)-(x295/x296));

	if (t64 != 17959) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x298 = 2188923692433528LLU;
	int8_t x299 = 2;
	uint64_t t65 = 989223709661490487LLU;

	t65 = ((x297%x298)-(x299/x300));

	if (t65 != 684117572211159LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = -20381570;
	int8_t x303 = INT8_MIN;
	volatile int32_t x304 = INT32_MAX;
	static volatile int32_t t66 = 1033805;

	t66 = ((x301%x302)-(x303/x304));

	if (t66 != -32642) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = -1;
	uint32_t x307 = 158U;
	volatile int32_t x308 = INT32_MIN;
	volatile uint32_t t67 = UINT32_MAX;

	t67 = ((x305%x306)-(x307/x308));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x309 = -7590978LL;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = -1;
	int32_t x312 = INT32_MAX;
	int64_t t68 = 5585139514267318LL;

	t68 = ((x309%x310)-(x311/x312));

	if (t68 != -66LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x313 = 22U;
	static int8_t x314 = INT8_MAX;
	volatile int8_t x316 = 9;
	volatile int32_t t69 = 358;

	t69 = ((x313%x314)-(x315/x316));

	if (t69 != 238609316) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = INT64_MAX;
	static uint64_t x318 = 1LLU;
	static uint32_t x319 = UINT32_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t70 = 2022188460LLU;

	t70 = ((x317%x318)-(x319/x320));

	if (t70 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = 6U;
	int32_t x322 = INT32_MAX;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -1LL;
	int64_t t71 = 1375LL;

	t71 = ((x321%x322)-(x323/x324));

	if (t71 != 65541LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x325 = 1;
	volatile int32_t x326 = 1952820;
	uint8_t x327 = UINT8_MAX;
	volatile int16_t x328 = INT16_MIN;
	int32_t t72 = 7756168;

	t72 = ((x325%x326)-(x327/x328));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x330 = -1;
	static uint8_t x331 = 24U;
	int16_t x332 = -1;
	volatile int32_t t73 = -194;

	t73 = ((x329%x330)-(x331/x332));

	if (t73 != 24) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x333 = INT8_MIN;
	static volatile int8_t x334 = -5;
	int16_t x335 = -1;
	int32_t x336 = 523;
	volatile int32_t t74 = -819;

	t74 = ((x333%x334)-(x335/x336));

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x338 = -1;
	uint64_t x339 = 89003890882431288LLU;
	static int64_t x340 = 1538864729781LL;
	uint64_t t75 = 115816761375012LLU;

	t75 = ((x337%x338)-(x339/x340));

	if (t75 != 18446744073709493779LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x342 = INT16_MAX;
	uint32_t t76 = 344093U;

	t76 = ((x341%x342)-(x343/x344));

	if (t76 != 4294967274U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	volatile int32_t x348 = INT32_MAX;
	static uint32_t t77 = 120U;

	t77 = ((x345%x346)-(x347/x348));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = INT64_MAX;
	static int32_t x351 = -2958529;
	int8_t x352 = INT8_MIN;
	int64_t t78 = 1347283904842471LL;

	t78 = ((x349%x350)-(x351/x352));

	if (t78 != -23113LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = -1;
	volatile int32_t x354 = INT32_MIN;
	int32_t x355 = -44894445;
	int32_t x356 = INT32_MIN;
	volatile int32_t t79 = -755148148;

	t79 = ((x353%x354)-(x355/x356));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = 2;
	int32_t x360 = INT32_MAX;
	volatile int32_t t80 = -72;

	t80 = ((x357%x358)-(x359/x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = -1;
	volatile int32_t t81 = -1817;

	t81 = ((x361%x362)-(x363/x364));

	if (t81 != 16777215) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x366 = 106081260;
	int64_t x367 = 1641LL;
	uint8_t x368 = UINT8_MAX;

	t82 = ((x365%x366)-(x367/x368));

	if (t82 != 5LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	int8_t x371 = INT8_MAX;
	volatile uint64_t x372 = UINT64_MAX;

	t83 = ((x369%x370)-(x371/x372));

	if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = INT32_MIN;
	volatile uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 24;
	volatile int32_t t84 = 50;

	t84 = ((x373%x374)-(x375/x376));

	if (t84 != -31403) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = 12U;
	volatile uint8_t x378 = 1U;
	int64_t x379 = 10960406075658LL;
	int32_t x380 = INT32_MIN;
	int64_t t85 = -15995285785LL;

	t85 = ((x377%x378)-(x379/x380));

	if (t85 != 5103LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x381 = -57;
	volatile uint32_t x383 = 114336872U;
	uint32_t x384 = 9046U;
	volatile uint32_t t86 = 9986330U;

	t86 = ((x381%x382)-(x383/x384));

	if (t86 != 4294954600U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x386 = 54LLU;
	static volatile int8_t x387 = INT8_MAX;
	uint32_t x388 = 3U;
	static uint64_t t87 = 4333LLU;

	t87 = ((x385%x386)-(x387/x388));

	if (t87 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = -899429;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = 58U;
	uint16_t x396 = 53U;
	int32_t t88 = 39104544;

	t88 = ((x393%x394)-(x395/x396));

	if (t88 != -14694) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x397 = -12076960610371415LL;
	uint64_t x398 = 1LLU;
	uint16_t x400 = 455U;

	t89 = ((x397%x398)-(x399/x400));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MIN;
	int64_t x403 = INT64_MAX;
	uint64_t x404 = 112930142470LLU;
	volatile uint64_t t90 = 11375LLU;

	t90 = ((x401%x402)-(x403/x404));

	if (t90 != 18446744073627878364LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -11989;
	volatile int32_t x406 = 145;
	uint32_t x407 = 456U;
	volatile uint64_t x408 = 52418LLU;
	static uint64_t t91 = 150LLU;

	t91 = ((x405%x406)-(x407/x408));

	if (t91 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x409 = UINT64_MAX;
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = 0;
	uint16_t x412 = 21U;
	static uint64_t t92 = 7842283LLU;

	t92 = ((x409%x410)-(x411/x412));

	if (t92 != 32767LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x415 = -1;
	volatile uint64_t x416 = 514LLU;

	t93 = ((x413%x414)-(x415/x416));

	if (t93 != 18410855466562256814LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = 1316;
	static int32_t x419 = -1;
	int32_t x420 = INT32_MAX;
	int32_t t94 = -75;

	t94 = ((x417%x418)-(x419/x420));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = INT32_MIN;
	uint32_t x422 = 75U;
	int16_t x423 = INT16_MIN;

	t95 = ((x421%x422)-(x423/x424));

	if (t95 != 4294956397U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = 1;
	volatile int32_t x426 = INT32_MIN;
	static int32_t x427 = INT32_MIN;
	volatile int32_t t96 = 110441889;

	t96 = ((x425%x426)-(x427/x428));

	if (t96 != 8421505) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = INT64_MIN;
	static uint64_t x431 = UINT64_MAX;

	t97 = ((x429%x430)-(x431/x432));

	if (t97 != 18446181106575736816LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x433 = -1LL;
	int16_t x434 = INT16_MIN;
	uint16_t x435 = 10575U;
	int8_t x436 = -1;
	static int64_t t98 = -3790LL;

	t98 = ((x433%x434)-(x435/x436));

	if (t98 != 10574LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = -3777688670831384LL;
	int16_t x438 = INT16_MIN;
	static volatile int32_t x439 = INT32_MIN;
	int32_t x440 = 58613502;
	int64_t t99 = -110LL;

	t99 = ((x437%x438)-(x439/x440));

	if (t99 != -756LL) { NG(); } else { ; }
	
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

