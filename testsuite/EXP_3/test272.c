#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 0;
static volatile int32_t x3 = INT32_MIN;
uint64_t t5 = 1468382688906LLU;
int16_t x29 = -3917;
int8_t x32 = -1;
int16_t x33 = -1;
static volatile int64_t t8 = 3640683831923659LL;
volatile int16_t x51 = -1;
volatile int32_t t11 = 9524;
uint8_t x56 = 8U;
static uint8_t x57 = UINT8_MAX;
volatile uint32_t t13 = 888487U;
static int16_t x64 = INT16_MAX;
uint64_t x67 = 540864043189491656LLU;
static uint64_t x76 = 14405806997176LLU;
int32_t x78 = -1;
int64_t t17 = -4199847533944647714LL;
volatile int8_t x82 = INT8_MIN;
uint8_t x87 = 0U;
volatile int8_t x97 = 0;
volatile int64_t t22 = -6068877443914660LL;
uint16_t x103 = 16501U;
static volatile uint8_t x109 = 40U;
int32_t x110 = INT32_MIN;
uint32_t x111 = 33138938U;
volatile uint32_t t25 = 22434536U;
int16_t x115 = INT16_MIN;
uint8_t x122 = UINT8_MAX;
int64_t x124 = -354690678505LL;
uint8_t x128 = UINT8_MAX;
volatile uint32_t t30 = 326631168U;
static int8_t x136 = INT8_MIN;
int32_t x138 = INT32_MIN;
static volatile int64_t x139 = -1LL;
uint8_t x149 = 5U;
uint8_t x159 = 2U;
static int32_t x160 = -1;
int8_t x162 = INT8_MIN;
uint64_t x163 = 656031LLU;
uint64_t t36 = 511555561656LLU;
int32_t x168 = INT32_MIN;
int16_t x169 = -1;
int16_t x178 = INT16_MAX;
int32_t x182 = INT32_MIN;
static int64_t x189 = 882101689662LL;
int32_t t41 = 11;
static volatile int8_t x193 = 1;
static uint32_t x196 = 1U;
volatile uint16_t x201 = 145U;
int16_t x203 = -1;
static int32_t t44 = 480;
uint64_t x205 = UINT64_MAX;
int32_t t45 = 821144419;
uint32_t x212 = UINT32_MAX;
static volatile uint32_t x228 = 57956U;
int32_t t51 = -6830;
volatile int16_t x245 = INT16_MAX;
uint8_t x247 = 0U;
int16_t x251 = INT16_MAX;
static int32_t t53 = -3923;
int8_t x255 = INT8_MIN;
static volatile uint32_t x263 = 261189U;
int32_t x264 = -69895133;
volatile int16_t x268 = INT16_MIN;
int64_t x273 = INT64_MIN;
uint16_t x278 = 12U;
int64_t x286 = INT64_MIN;
int32_t x287 = INT32_MAX;
uint16_t x288 = UINT16_MAX;
int32_t t61 = 6468628;
volatile int8_t x289 = 13;
int32_t x290 = -804866611;
int32_t t62 = 33;
int16_t x295 = -1;
int16_t x299 = INT16_MAX;
uint64_t x300 = 11373512075LLU;
static int64_t x305 = 2087534284886027LL;
volatile int32_t t66 = 75073;
volatile uint64_t t67 = 21948LLU;
int8_t x314 = 15;
int32_t t68 = -31314155;
int32_t t69 = -114390211;
int64_t x322 = 626320360685052LL;
int32_t x325 = INT32_MIN;
volatile uint64_t t73 = 98660184122689LLU;
volatile uint32_t x351 = 1273753814U;
volatile int32_t t76 = 1329724;
uint8_t x359 = 1U;
int64_t x360 = 80487607803284712LL;
int32_t x365 = -1;
int16_t x366 = -4192;
static uint32_t t79 = 1U;
static int16_t x370 = -1732;
uint64_t x380 = 326822635064912384LLU;
uint8_t x382 = 51U;
int64_t x383 = -287921781329584074LL;
static int32_t t84 = -30;
volatile int32_t t85 = -3743;
uint32_t x401 = 1U;
static volatile uint16_t x408 = UINT16_MAX;
static int64_t x415 = INT64_MIN;
volatile int8_t x416 = -6;
uint8_t x428 = 1U;
uint32_t x431 = UINT32_MAX;
volatile int16_t x438 = 3;
int64_t x442 = 43986061LL;
static volatile uint32_t x444 = 31038U;
int32_t x446 = -1;
volatile int8_t x449 = INT8_MIN;
int64_t x451 = -260743370LL;
uint8_t x462 = UINT8_MAX;


void f0(void) {
	int32_t x2 = 4312777;
	static uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 13U;

	t0 = ((x1==x2)|(x3-x4));

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 499630284U;
	int16_t x6 = 1392;
	int8_t x7 = 0;
	int64_t x8 = 242188375140470LL;
	int64_t t1 = 7269754196LL;

	t1 = ((x5==x6)|(x7-x8));

	if (t1 != -242188375140470LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 4171U;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -72662;

	t2 = ((x9==x10)|(x11-x12));

	if (t2 != -98303) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 2013;
	volatile int32_t x14 = 10062;
	volatile uint8_t x15 = 125U;
	volatile int16_t x16 = -6;
	volatile int32_t t3 = -259422751;

	t3 = ((x13==x14)|(x15-x16));

	if (t3 != 131) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int16_t x18 = -20;
	uint16_t x19 = 7154U;
	uint16_t x20 = 51U;
	static int32_t t4 = -360079732;

	t4 = ((x17==x18)|(x19-x20));

	if (t4 != 7103) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint8_t x22 = 54U;
	volatile uint64_t x23 = UINT64_MAX;
	int16_t x24 = 3971;

	t5 = ((x21==x22)|(x23-x24));

	if (t5 != 18446744073709547644LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MIN;
	int8_t x27 = -1;
	int32_t x28 = -1;
	static volatile int32_t t6 = -1;

	t6 = ((x25==x26)|(x27-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 32U;
	int32_t t7 = 1;

	t7 = ((x29==x30)|(x31-x32));

	if (t7 != 33) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	volatile uint16_t x35 = 2466U;
	static int64_t x36 = -1LL;

	t8 = ((x33==x34)|(x35-x36));

	if (t8 != 2467LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 22809U;
	static int16_t x38 = INT16_MAX;
	int8_t x39 = -2;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 958159;

	t9 = ((x37==x38)|(x39-x40));

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	volatile int16_t x46 = -1;
	static uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MAX;
	int64_t t10 = -22LL;

	t10 = ((x45==x46)|(x47-x48));

	if (t10 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	static uint32_t x50 = UINT32_MAX;
	uint16_t x52 = 39U;

	t11 = ((x49==x50)|(x51-x52));

	if (t11 != -40) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = UINT64_MAX;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = 12;
	volatile int32_t t12 = -556922;

	t12 = ((x53==x54)|(x55-x56));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MIN;
	uint32_t x59 = 2U;
	int16_t x60 = INT16_MIN;

	t13 = ((x57==x58)|(x59-x60));

	if (t13 != 32770U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 1554199U;
	uint64_t x62 = UINT64_MAX;
	uint32_t x63 = 9U;
	volatile uint32_t t14 = 3U;

	t14 = ((x61==x62)|(x63-x64));

	if (t14 != 4294934538U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = UINT64_MAX;
	uint64_t x66 = UINT64_MAX;
	uint64_t x68 = 924426LLU;
	uint64_t t15 = 28LLU;

	t15 = ((x65==x66)|(x67-x68));

	if (t15 != 540864043188567231LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	static int16_t x75 = INT16_MIN;
	volatile uint64_t t16 = 457094910206540733LLU;

	t16 = ((x73==x74)|(x75-x76));

	if (t16 != 18446729667902521672LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static int64_t x79 = INT64_MAX;
	int16_t x80 = 766;

	t17 = ((x77==x78)|(x79-x80));

	if (t17 != 9223372036854775041LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 973;
	int8_t x83 = -1;
	int32_t x84 = -1;
	volatile int32_t t18 = -64;

	t18 = ((x81==x82)|(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x85 = INT16_MAX;
	uint16_t x86 = 12U;
	uint8_t x88 = 5U;
	volatile int32_t t19 = 5901613;

	t19 = ((x85==x86)|(x87-x88));

	if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x90 = -1LL;
	int8_t x91 = INT8_MAX;
	uint8_t x92 = 126U;
	static int32_t t20 = 15594;

	t20 = ((x89==x90)|(x91-x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = -7;
	static uint64_t x95 = UINT64_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t21 = 1750315LLU;

	t21 = ((x93==x94)|(x95-x96));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x98 = INT32_MIN;
	int64_t x99 = 492629204567488LL;
	int32_t x100 = INT32_MIN;

	t22 = ((x97==x98)|(x99-x100));

	if (t22 != 492631352051136LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = 63;
	int8_t x102 = 23;
	int8_t x104 = INT8_MIN;
	volatile int32_t t23 = -27856;

	t23 = ((x101==x102)|(x103-x104));

	if (t23 != 16629) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	volatile uint16_t x106 = 473U;
	int64_t x107 = -971LL;
	static uint8_t x108 = UINT8_MAX;
	static volatile int64_t t24 = 2897158547282925LL;

	t24 = ((x105==x106)|(x107-x108));

	if (t24 != -1226LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x112 = INT16_MIN;

	t25 = ((x109==x110)|(x111-x112));

	if (t25 != 33171706U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t26 = 243333LLU;

	t26 = ((x113==x114)|(x115-x116));

	if (t26 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 3U;
	int8_t x119 = INT8_MIN;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t27 = 560068236;

	t27 = ((x117==x118)|(x119-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	volatile int64_t x123 = 0LL;
	static int64_t t28 = 187635313LL;

	t28 = ((x121==x122)|(x123-x124));

	if (t28 != 354690678505LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = -89;
	int16_t x126 = -1;
	int8_t x127 = 0;
	volatile int32_t t29 = -74;

	t29 = ((x125==x126)|(x127-x128));

	if (t29 != -255) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	uint16_t x131 = 45U;
	uint32_t x132 = UINT32_MAX;

	t30 = ((x129==x130)|(x131-x132));

	if (t30 != 46U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 29074LLU;
	static volatile int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	volatile int32_t t31 = -1;

	t31 = ((x133==x134)|(x135-x136));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	static int32_t x140 = -1;
	int64_t t32 = -4LL;

	t32 = ((x137==x138)|(x139-x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	volatile int8_t x143 = INT8_MIN;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t33 = 31U;

	t33 = ((x141==x142)|(x143-x144));

	if (t33 != 4294967169U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	volatile int64_t t34 = -32532LL;

	t34 = ((x149==x150)|(x151-x152));

	if (t34 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 255741LLU;
	volatile int32_t t35 = -494564;

	t35 = ((x157==x158)|(x159-x160));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x164 = INT64_MAX;

	t36 = ((x161==x162)|(x163-x164));

	if (t36 != 9223372036855431840LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	static volatile int32_t x166 = INT32_MIN;
	volatile int32_t x167 = -655040382;
	static volatile int32_t t37 = 260583061;

	t37 = ((x165==x166)|(x167-x168));

	if (t37 != 1492443266) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 3765U;
	int16_t x172 = -9671;
	int32_t t38 = -370015;

	t38 = ((x169==x170)|(x171-x172));

	if (t38 != 13436) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x177 = INT64_MAX;
	uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = INT16_MIN;
	int32_t t39 = 7219821;

	t39 = ((x177==x178)|(x179-x180));

	if (t39 != 33023) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x183 = -1;
	uint32_t x184 = UINT32_MAX;
	uint32_t t40 = 15U;

	t40 = ((x181==x182)|(x183-x184));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x190 = 1131U;
	int32_t x191 = INT32_MAX;
	static int16_t x192 = INT16_MAX;

	t41 = ((x189==x190)|(x191-x192));

	if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x194 = -1LL;
	volatile uint16_t x195 = UINT16_MAX;
	volatile uint32_t t42 = 1491335U;

	t42 = ((x193==x194)|(x195-x196));

	if (t42 != 65534U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MIN;
	uint32_t x198 = 89U;
	int8_t x199 = 2;
	int16_t x200 = INT16_MIN;
	volatile int32_t t43 = -115;

	t43 = ((x197==x198)|(x199-x200));

	if (t43 != 32770) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x202 = UINT64_MAX;
	int16_t x204 = 0;

	t44 = ((x201==x202)|(x203-x204));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x206 = 3106297U;
	int16_t x207 = -35;
	int8_t x208 = INT8_MAX;

	t45 = ((x205==x206)|(x207-x208));

	if (t45 != -162) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = UINT64_MAX;
	static uint8_t x210 = UINT8_MAX;
	int64_t x211 = -1LL;
	volatile int64_t t46 = 1LL;

	t46 = ((x209==x210)|(x211-x212));

	if (t46 != -4294967296LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = INT16_MAX;
	static int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 17001072267500LLU;
	int32_t x220 = INT32_MIN;
	uint64_t t47 = 602LLU;

	t47 = ((x217==x218)|(x219-x220));

	if (t47 != 17003219751148LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = 27U;
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MAX;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t48 = -952882;

	t48 = ((x221==x222)|(x223-x224));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = 63;
	volatile int32_t x227 = INT32_MAX;
	uint32_t t49 = 0U;

	t49 = ((x225==x226)|(x227-x228));

	if (t49 != 2147425691U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x237 = 51U;
	int16_t x238 = 5322;
	static int16_t x239 = -2;
	static int64_t x240 = -1LL;
	static int64_t t50 = -908629449281LL;

	t50 = ((x237==x238)|(x239-x240));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x241 = 14U;
	int64_t x242 = -5820167LL;
	uint8_t x243 = 5U;
	static int8_t x244 = INT8_MIN;

	t51 = ((x241==x242)|(x243-x244));

	if (t51 != 133) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x246 = 53386919322888LLU;
	int8_t x248 = INT8_MAX;
	volatile int32_t t52 = 148174423;

	t52 = ((x245==x246)|(x247-x248));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = -1;
	volatile int16_t x250 = -6813;
	volatile int8_t x252 = -1;

	t53 = ((x249==x250)|(x251-x252));

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 441580LLU;
	static int8_t x254 = INT8_MIN;
	volatile int16_t x256 = -1;
	int32_t t54 = -391205153;

	t54 = ((x253==x254)|(x255-x256));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x257 = -1;
	int32_t x258 = INT32_MIN;
	volatile int8_t x259 = 3;
	uint16_t x260 = 5458U;
	volatile int32_t t55 = 17524;

	t55 = ((x257==x258)|(x259-x260));

	if (t55 != -5455) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x261 = INT64_MAX;
	static int8_t x262 = INT8_MIN;
	volatile uint32_t t56 = 16181U;

	t56 = ((x261==x262)|(x263-x264));

	if (t56 != 70156322U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = 1876;
	volatile uint64_t x266 = UINT64_MAX;
	static volatile int64_t x267 = INT64_MIN;
	volatile int64_t t57 = -15991428261600055LL;

	t57 = ((x265==x266)|(x267-x268));

	if (t57 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = 135;
	uint8_t x276 = 3U;
	int32_t t58 = -25334261;

	t58 = ((x273==x274)|(x275-x276));

	if (t58 != 132) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = INT16_MIN;
	static uint16_t x279 = 1U;
	int8_t x280 = 52;
	volatile int32_t t59 = -1475458;

	t59 = ((x277==x278)|(x279-x280));

	if (t59 != -51) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x281 = -1;
	static uint16_t x282 = UINT16_MAX;
	volatile int32_t x283 = INT32_MAX;
	uint16_t x284 = 129U;
	int32_t t60 = 30850;

	t60 = ((x281==x282)|(x283-x284));

	if (t60 != 2147483518) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x285 = 2943;

	t61 = ((x285==x286)|(x287-x288));

	if (t61 != 2147418112) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x291 = INT16_MIN;
	uint16_t x292 = 4U;

	t62 = ((x289==x290)|(x291-x292));

	if (t62 != -32772) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x293 = INT8_MIN;
	int8_t x294 = -1;
	uint16_t x296 = 57U;
	volatile int32_t t63 = -60930214;

	t63 = ((x293==x294)|(x295-x296));

	if (t63 != -58) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = -1;
	int8_t x298 = 32;
	volatile uint64_t t64 = 844210LLU;

	t64 = ((x297==x298)|(x299-x300));

	if (t64 != 18446744062336072308LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x301 = INT16_MIN;
	int32_t x302 = 135607696;
	int8_t x303 = INT8_MAX;
	static uint16_t x304 = 6U;
	int32_t t65 = 21695;

	t65 = ((x301==x302)|(x303-x304));

	if (t65 != 121) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x306 = INT32_MAX;
	int8_t x307 = 50;
	int16_t x308 = -1;

	t66 = ((x305==x306)|(x307-x308));

	if (t66 != 51) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = -33;
	int16_t x310 = -69;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = UINT64_MAX;

	t67 = ((x309==x310)|(x311-x312));

	if (t67 != 32768LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x313 = -563;
	volatile int32_t x315 = INT32_MAX;
	uint8_t x316 = 37U;

	t68 = ((x313==x314)|(x315-x316));

	if (t68 != 2147483610) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;

	t69 = ((x317==x318)|(x319-x320));

	if (t69 != 32640) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x321 = 337643060821668548LL;
	volatile int16_t x323 = INT16_MAX;
	volatile int8_t x324 = 49;
	int32_t t70 = 1;

	t70 = ((x321==x322)|(x323-x324));

	if (t70 != 32718) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x326 = 392U;
	int16_t x327 = -1;
	uint8_t x328 = 3U;
	volatile int32_t t71 = 860557354;

	t71 = ((x325==x326)|(x327-x328));

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = UINT16_MAX;
	static volatile uint16_t x334 = 31U;
	uint32_t x335 = 484679U;
	int16_t x336 = 1;
	uint32_t t72 = 2348870U;

	t72 = ((x333==x334)|(x335-x336));

	if (t72 != 484678U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x337 = 59U;
	uint64_t x338 = 121LLU;
	volatile uint64_t x339 = UINT64_MAX;
	volatile uint8_t x340 = 26U;

	t73 = ((x337==x338)|(x339-x340));

	if (t73 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = 1758471064803921LL;
	int64_t x346 = INT64_MIN;
	static int16_t x347 = INT16_MIN;
	static volatile uint64_t x348 = UINT64_MAX;
	uint64_t t74 = 487534LLU;

	t74 = ((x345==x346)|(x347-x348));

	if (t74 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = -60025356;
	static int16_t x352 = INT16_MIN;
	static volatile uint32_t t75 = 791U;

	t75 = ((x349==x350)|(x351-x352));

	if (t75 != 1273786582U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x353 = 1082U;
	int16_t x354 = -1;
	int8_t x355 = INT8_MAX;
	uint16_t x356 = 9U;

	t76 = ((x353==x354)|(x355-x356));

	if (t76 != 118) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x357 = INT32_MAX;
	static int8_t x358 = INT8_MAX;
	volatile int64_t t77 = -5581LL;

	t77 = ((x357==x358)|(x359-x360));

	if (t77 != -80487607803284711LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = 493509U;
	int8_t x362 = INT8_MIN;
	static uint64_t x363 = 177336LLU;
	static int32_t x364 = 1019242386;
	volatile uint64_t t78 = 1LLU;

	t78 = ((x361==x362)|(x363-x364));

	if (t78 != 18446744072690486566LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x367 = 1606961796U;
	int8_t x368 = 3;

	t79 = ((x365==x366)|(x367-x368));

	if (t79 != 1606961793U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x369 = 132884315U;
	static int16_t x371 = INT16_MAX;
	volatile int8_t x372 = INT8_MIN;
	int32_t t80 = 203;

	t80 = ((x369==x370)|(x371-x372));

	if (t80 != 32895) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x377 = 5736081LLU;
	static uint32_t x378 = 57096547U;
	volatile int16_t x379 = -145;
	volatile uint64_t t81 = 268595442LLU;

	t81 = ((x377==x378)|(x379-x380));

	if (t81 != 18119921438644639087LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x381 = -2837;
	int8_t x384 = INT8_MIN;
	volatile int64_t t82 = 90991LL;

	t82 = ((x381==x382)|(x383-x384));

	if (t82 != -287921781329583946LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x385 = 3U;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t83 = -6958;

	t83 = ((x385==x386)|(x387-x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x389 = INT64_MAX;
	int16_t x390 = 63;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;

	t84 = ((x389==x390)|(x391-x392));

	if (t84 != -65663) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 249703U;
	int16_t x394 = INT16_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	uint16_t x396 = 169U;

	t85 = ((x393==x394)|(x395-x396));

	if (t85 != 86) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x402 = 44;
	volatile int8_t x403 = INT8_MIN;
	int64_t x404 = 5639LL;
	int64_t t86 = 825122149957339545LL;

	t86 = ((x401==x402)|(x403-x404));

	if (t86 != -5767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -279673;
	int8_t x406 = INT8_MAX;
	volatile int8_t x407 = INT8_MIN;
	int32_t t87 = -2768301;

	t87 = ((x405==x406)|(x407-x408));

	if (t87 != -65663) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x409 = INT16_MIN;
	volatile int8_t x410 = -1;
	static uint64_t x411 = UINT64_MAX;
	static int32_t x412 = INT32_MAX;
	volatile uint64_t t88 = 46070844310LLU;

	t88 = ((x409==x410)|(x411-x412));

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x414 = 31210047LLU;
	static volatile int64_t t89 = 1LL;

	t89 = ((x413==x414)|(x415-x416));

	if (t89 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MAX;
	int32_t x423 = 135;
	int64_t x424 = -1LL;
	static volatile int64_t t90 = 5992LL;

	t90 = ((x421==x422)|(x423-x424));

	if (t90 != 136LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x425 = INT64_MAX;
	uint64_t x426 = UINT64_MAX;
	volatile uint32_t x427 = 21U;
	uint32_t t91 = 369249664U;

	t91 = ((x425==x426)|(x427-x428));

	if (t91 != 20U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MAX;
	volatile int64_t x430 = -1LL;
	volatile uint16_t x432 = UINT16_MAX;
	static uint32_t t92 = 21U;

	t92 = ((x429==x430)|(x431-x432));

	if (t92 != 4294901760U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x433 = 1U;
	volatile int64_t x434 = INT64_MIN;
	volatile int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	static volatile int32_t t93 = -16061;

	t93 = ((x433==x434)|(x435-x436));

	if (t93 != 32640) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x437 = UINT64_MAX;
	uint8_t x439 = UINT8_MAX;
	volatile int16_t x440 = -1;
	int32_t t94 = 117;

	t94 = ((x437==x438)|(x439-x440));

	if (t94 != 256) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x441 = -1;
	volatile int32_t x443 = -1;
	static volatile uint32_t t95 = 646481U;

	t95 = ((x441==x442)|(x443-x444));

	if (t95 != 4294936257U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = INT64_MIN;
	uint8_t x447 = 43U;
	int32_t x448 = 209;
	int32_t t96 = 145260;

	t96 = ((x445==x446)|(x447-x448));

	if (t96 != -166) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x450 = 21602406409463LL;
	volatile uint16_t x452 = UINT16_MAX;
	volatile int64_t t97 = -10417684379351561LL;

	t97 = ((x449==x450)|(x451-x452));

	if (t97 != -260808905LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = INT16_MAX;
	volatile int64_t x458 = INT64_MIN;
	int16_t x459 = -2;
	volatile uint16_t x460 = 115U;
	int32_t t98 = -1203055;

	t98 = ((x457==x458)|(x459-x460));

	if (t98 != -117) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = INT32_MAX;
	int32_t t99 = 376578070;

	t99 = ((x461==x462)|(x463-x464));

	if (t99 != -2147418112) { NG(); } else { ; }
	
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

