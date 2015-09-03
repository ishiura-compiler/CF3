#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 1U;
static volatile int8_t x4 = -2;
int16_t x7 = INT16_MAX;
int64_t t1 = 11LL;
static uint64_t x12 = 1052091780LLU;
static int32_t t3 = -154887;
static uint16_t x22 = 1U;
static int16_t x27 = 54;
uint32_t x31 = 155540441U;
uint64_t x35 = UINT64_MAX;
uint64_t t7 = 12284247716077759LLU;
uint64_t x38 = 251LLU;
int16_t x39 = INT16_MIN;
uint32_t x41 = UINT32_MAX;
int64_t x46 = INT64_MAX;
uint64_t t10 = 27LLU;
int64_t x49 = INT64_MAX;
volatile int64_t t11 = 10579332580LL;
int32_t x55 = INT32_MIN;
volatile uint64_t x60 = UINT64_MAX;
uint16_t x63 = UINT16_MAX;
int64_t x64 = 134062908LL;
int8_t x82 = INT8_MAX;
static int8_t x87 = -1;
volatile uint32_t t20 = 2U;
int16_t x89 = INT16_MIN;
static uint32_t t21 = 248497U;
uint8_t x93 = UINT8_MAX;
volatile uint64_t x94 = 120LLU;
static int8_t x97 = -1;
uint8_t x98 = 7U;
static int64_t t23 = -2573LL;
int8_t x120 = INT8_MIN;
volatile int32_t t27 = 3520492;
int16_t x121 = INT16_MIN;
volatile int8_t x122 = INT8_MIN;
int16_t x123 = INT16_MIN;
static int32_t x125 = INT32_MIN;
int64_t x127 = -1LL;
int16_t x129 = INT16_MAX;
uint8_t x131 = UINT8_MAX;
volatile int64_t t32 = -51739LL;
int8_t x142 = -1;
volatile uint32_t x148 = 772U;
int8_t x154 = INT8_MAX;
static uint32_t x159 = 331336U;
static int64_t x160 = INT64_MIN;
volatile uint64_t t37 = 513670LLU;
int64_t x169 = -1LL;
uint8_t x170 = 1U;
volatile uint64_t t39 = 934961619614138836LLU;
static int8_t x173 = INT8_MIN;
int8_t x180 = INT8_MIN;
uint32_t x187 = UINT32_MAX;
volatile uint64_t x193 = UINT64_MAX;
static uint16_t x194 = UINT16_MAX;
int8_t x201 = INT8_MAX;
volatile int8_t x203 = INT8_MAX;
volatile int32_t t47 = 361;
int8_t x205 = INT8_MIN;
static int16_t x207 = INT16_MIN;
int32_t t49 = 77526022;
int64_t x219 = INT64_MAX;
static uint32_t x222 = 20927U;
uint8_t x230 = 0U;
volatile uint8_t x232 = 15U;
int64_t x233 = -1LL;
volatile int64_t x248 = -26705674LL;
static volatile int32_t x257 = -1;
volatile uint64_t x264 = UINT64_MAX;
volatile uint8_t x271 = UINT8_MAX;
static uint32_t x295 = 605U;
volatile int64_t t68 = 26816058348562LL;
volatile int16_t x301 = INT16_MAX;
static volatile int64_t t69 = -5LL;
static int16_t x306 = INT16_MAX;
int8_t x307 = INT8_MIN;
int16_t x328 = INT16_MIN;
static int64_t x337 = 211300396962146LL;
static volatile int64_t x342 = INT64_MIN;
int8_t x353 = INT8_MIN;
int32_t x355 = INT32_MIN;
int32_t x356 = INT32_MIN;
int64_t x361 = -6335467489015LL;
volatile uint16_t x366 = 1243U;
int32_t t82 = 625390387;
volatile int16_t x372 = -16297;
volatile int64_t t84 = -6108869170LL;
int8_t x386 = 11;
static volatile uint64_t t88 = 212838LLU;
int32_t x400 = -1;
static volatile int8_t x409 = -1;
int16_t x415 = INT16_MIN;
volatile int16_t x419 = INT16_MAX;
int32_t x424 = -1;
int64_t t95 = -1071622939511667LL;
static int64_t x439 = INT64_MIN;
uint64_t t96 = 430995182LLU;
int64_t x443 = INT64_MIN;
int64_t t97 = -53681764585LL;
int32_t x454 = INT32_MIN;
int64_t x455 = -463LL;


void f0(void) {
	static uint8_t x1 = 30U;
	uint64_t x3 = 2LLU;
	static uint64_t t0 = 3LLU;

	t0 = (((x1^x2)-x3)^x4);

	if (t0 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int64_t x6 = -186439664LL;
	int32_t x8 = INT32_MIN;

	t1 = (((x5^x6)-x7)^x8);

	if (t1 != 1961023472LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2724LL;
	int16_t x10 = INT16_MIN;
	static volatile uint64_t x11 = 1047880813666320LLU;
	volatile uint64_t t2 = 464986808LLU;

	t2 = (((x9^x10)-x11)^x12);

	if (t2 != 18445696191932117192LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int8_t x18 = -1;
	int16_t x19 = -4107;
	int32_t x20 = 570941148;

	t3 = (((x17^x18)-x19)^x20);

	if (t3 != 570937047) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	volatile uint64_t x23 = 2202712751622LLU;
	int64_t x24 = INT64_MAX;
	volatile uint64_t t4 = 97736448364689271LLU;

	t4 = (((x21^x22)-x23)^x24);

	if (t4 != 9223374239567560196LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static uint64_t x26 = 79118LLU;
	int8_t x28 = INT8_MIN;
	static uint64_t t5 = 1196490475272LLU;

	t5 = (((x25^x26)-x27)^x28);

	if (t5 != 79320LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = 1949LLU;
	int32_t x32 = 24039044;
	uint64_t t6 = 3310266LLU;

	t6 = (((x29^x30)-x31)^x32);

	if (t6 != 2010403341LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int64_t x34 = INT64_MIN;
	int32_t x36 = INT32_MAX;

	t7 = (((x33^x34)-x35)^x36);

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 143U;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t8 = 849877LLU;

	t8 = (((x37^x38)-x39)^x40);

	if (t8 != 18446744073709486196LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = 9888U;
	int8_t x43 = -1;
	int64_t x44 = -8275610367002026LL;
	static int64_t t9 = 58947LL;

	t9 = (((x41^x42)-x43)^x44);

	if (t9 != -8275608748842186LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	uint64_t x47 = 1888938136LLU;
	int8_t x48 = INT8_MIN;

	t10 = (((x45^x46)-x47)^x48);

	if (t10 != 9223372038743714022LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = 1304873597U;
	static int32_t x51 = -1;
	static int32_t x52 = -1;

	t11 = (((x49^x50)-x51)^x52);

	if (t11 != -9223372035549902212LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = 476887;
	static int32_t x56 = INT32_MAX;
	int32_t t12 = 1880369;

	t12 = (((x53^x54)-x55)^x56);

	if (t12 != 473384) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	uint32_t x58 = 111192699U;
	volatile uint64_t x59 = 129342115556931LLU;
	static uint64_t t13 = 4148094410678220LLU;

	t13 = (((x57^x58)-x59)^x60);

	if (t13 != 129337931782215LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 2741953538159642068LLU;
	uint8_t x62 = 6U;
	volatile uint64_t t14 = 3335528LLU;

	t14 = (((x61^x62)-x63)^x64);

	if (t14 != 2741953538272601839LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = -2;
	uint16_t x67 = 341U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 7972;

	t15 = (((x65^x66)-x67)^x68);

	if (t15 != -343) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 1U;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = -7;
	uint16_t x72 = 1949U;
	static volatile int32_t t16 = 680;

	t16 = (((x69^x70)-x71)^x72);

	if (t16 != 67480) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1LL;
	uint8_t x74 = 49U;
	int8_t x75 = 3;
	int8_t x76 = 3;
	int64_t t17 = -108510773810LL;

	t17 = (((x73^x74)-x75)^x76);

	if (t17 != -56LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 84488995159963LL;
	int16_t x78 = -1;
	int8_t x79 = -1;
	int32_t x80 = -11950693;
	int64_t t18 = -15LL;

	t18 = (((x77^x78)-x79)^x80);

	if (t18 != 84488990057982LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 9U;
	static volatile int16_t x83 = -5;
	int8_t x84 = -1;
	static volatile uint32_t t19 = 231U;

	t19 = (((x81^x82)-x83)^x84);

	if (t19 != 4294967172U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 470U;
	volatile int32_t x86 = INT32_MIN;
	static int16_t x88 = INT16_MIN;

	t20 = (((x85^x86)-x87)^x88);

	if (t20 != 2147451351U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = 13245U;
	volatile int8_t x91 = 1;
	int16_t x92 = INT16_MIN;

	t21 = (((x89^x90)-x91)^x92);

	if (t21 != 13244U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x95 = 99;
	uint16_t x96 = UINT16_MAX;
	static uint64_t t22 = 9941299013640228LLU;

	t22 = (((x93^x94)-x95)^x96);

	if (t22 != 65499LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x99 = 63973158U;
	static volatile int64_t x100 = INT64_MAX;

	t23 = (((x97^x98)-x99)^x100);

	if (t23 != 9223372032623781677LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	volatile int64_t x106 = 2LL;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -388LL;
	volatile int64_t t24 = -43334LL;

	t24 = (((x105^x106)-x107)^x108);

	if (t24 != -9223372036854743426LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -22;
	static int64_t x110 = -83537340948703LL;
	uint32_t x111 = 9800U;
	int32_t x112 = -754692;
	volatile int64_t t25 = 876789821753740LL;

	t25 = (((x109^x110)-x111)^x112);

	if (t25 != -83537340644993LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = 28561U;
	int8_t x114 = 35;
	int64_t x115 = INT64_MAX;
	int64_t x116 = -32237566LL;
	int64_t t26 = -10771011401600LL;

	t26 = (((x113^x114)-x115)^x116);

	if (t26 != 9223372036822562737LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x117 = 411;
	uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MAX;

	t27 = (((x117^x118)-x119)^x120);

	if (t27 != -155) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x124 = 4U;
	static int32_t t28 = 45450;

	t28 = (((x121^x122)-x123)^x124);

	if (t28 != 65412) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = INT64_MAX;
	int8_t x128 = -1;
	static volatile int64_t t29 = 471900159644LL;

	t29 = (((x125^x126)-x127)^x128);

	if (t29 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = -1LL;
	int16_t x132 = INT16_MAX;
	int64_t t30 = 2130648074176243247LL;

	t30 = (((x129^x130)-x131)^x132);

	if (t30 != -65282LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 298U;
	static uint64_t x134 = UINT64_MAX;
	static int16_t x135 = INT16_MAX;
	static uint8_t x136 = UINT8_MAX;
	volatile uint64_t t31 = 1501958681256LLU;

	t31 = (((x133^x134)-x135)^x136);

	if (t31 != 18446744073709518377LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = 9935U;
	volatile int32_t x139 = -1;
	int8_t x140 = INT8_MIN;

	t32 = (((x137^x138)-x139)^x140);

	if (t32 != 9223372036854765904LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = 0;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = 456U;
	int32_t t33 = 5;

	t33 = (((x141^x142)-x143)^x144);

	if (t33 != 439) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 8286U;
	uint16_t x146 = 21735U;
	volatile uint64_t x147 = UINT64_MAX;
	volatile uint64_t t34 = 7173501LLU;

	t34 = (((x145^x146)-x147)^x148);

	if (t34 != 30654LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 1407U;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 0U;
	volatile uint64_t t35 = 6219LLU;

	t35 = (((x149^x150)-x151)^x152);

	if (t35 != 18446744073709484673LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = -108;
	static int16_t x155 = 241;
	int16_t x156 = -1;
	int32_t t36 = 33;

	t36 = (((x153^x154)-x155)^x156);

	if (t36 != 261) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x157 = UINT64_MAX;
	volatile uint16_t x158 = 1U;

	t37 = (((x157^x158)-x159)^x160);

	if (t37 != 9223372036854444470LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x165 = 6U;
	uint64_t x166 = 1LLU;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t38 = 40365349039LLU;

	t38 = (((x165^x166)-x167)^x168);

	if (t38 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x171 = 73232U;
	volatile uint64_t x172 = 3714418994961624LLU;

	t39 = (((x169^x170)-x171)^x172);

	if (t39 != 18443029654714662198LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x174 = 1LL;
	static uint64_t x175 = UINT64_MAX;
	uint16_t x176 = UINT16_MAX;
	uint64_t t40 = 1775434520980756LLU;

	t40 = (((x173^x174)-x175)^x176);

	if (t40 != 18446744073709486205LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 41U;
	static uint8_t x178 = UINT8_MAX;
	static uint8_t x179 = UINT8_MAX;
	int32_t t41 = -472534;

	t41 = (((x177^x178)-x179)^x180);

	if (t41 != 87) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	volatile int64_t x184 = INT64_MAX;
	static int64_t t42 = 592898747385921122LL;

	t42 = (((x181^x182)-x183)^x184);

	if (t42 != 9223372034707292031LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	static int16_t x186 = INT16_MIN;
	static int8_t x188 = -1;
	volatile uint32_t t43 = 38U;

	t43 = (((x185^x186)-x187)^x188);

	if (t43 != 4294934654U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -1LL;
	volatile uint32_t x190 = UINT32_MAX;
	volatile int8_t x191 = 0;
	volatile int16_t x192 = INT16_MAX;
	int64_t t44 = 247172295152336LL;

	t44 = (((x189^x190)-x191)^x192);

	if (t44 != -4294934529LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x195 = 371602424U;
	static volatile int64_t x196 = -1LL;
	volatile uint64_t t45 = 68623LLU;

	t45 = (((x193^x194)-x195)^x196);

	if (t45 != 371667959LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = -1;
	uint8_t x198 = 52U;
	static uint16_t x199 = UINT16_MAX;
	volatile int32_t x200 = -1;
	int32_t t46 = -953766662;

	t46 = (((x197^x198)-x199)^x200);

	if (t46 != 65587) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x202 = INT16_MIN;
	static uint16_t x204 = 1006U;

	t47 = (((x201^x202)-x203)^x204);

	if (t47 != -31762) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x206 = INT8_MIN;
	int16_t x208 = -872;
	static int32_t t48 = 1790;

	t48 = (((x205^x206)-x207)^x208);

	if (t48 != -33640) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 9U;
	static uint16_t x210 = 7313U;
	int16_t x211 = -1;
	int8_t x212 = INT8_MIN;

	t49 = (((x209^x210)-x211)^x212);

	if (t49 != -7399) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile int64_t t50 = -466LL;

	t50 = (((x217^x218)-x219)^x220);

	if (t50 != -2147483650LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x221 = INT32_MIN;
	uint32_t x223 = 800572U;
	int64_t x224 = -1LL;
	int64_t t51 = -1LL;

	t51 = (((x221^x222)-x223)^x224);

	if (t51 != -2146704004LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = -11;
	int32_t x231 = INT32_MIN;
	int32_t t52 = 7549;

	t52 = (((x229^x230)-x231)^x232);

	if (t52 != 2147483642) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 60U;
	volatile int64_t t53 = 10549368047806LL;

	t53 = (((x233^x234)-x235)^x236);

	if (t53 != 32700LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x238 = 2U;
	static int64_t x239 = INT64_MIN;
	uint16_t x240 = 1U;
	int64_t t54 = -1188LL;

	t54 = (((x237^x238)-x239)^x240);

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x241 = INT16_MIN;
	int16_t x242 = 372;
	static int32_t x243 = -1;
	static uint64_t x244 = 2421175633107517692LLU;
	uint64_t t55 = 204LLU;

	t55 = (((x241^x242)-x243)^x244);

	if (t55 != 16025568440602001801LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MIN;
	static int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	int64_t t56 = 1341899228LL;

	t56 = (((x245^x246)-x247)^x248);

	if (t56 != -26705673LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = -1993914397316000445LL;
	static int32_t x250 = -415;
	int64_t x251 = INT64_MAX;
	volatile int64_t x252 = -1LL;
	int64_t t57 = 7582027773LL;

	t57 = (((x249^x250)-x251)^x252);

	if (t57 != 7229457639538775260LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -56;
	uint8_t x254 = UINT8_MAX;
	volatile uint16_t x255 = UINT16_MAX;
	volatile int8_t x256 = INT8_MAX;
	static volatile int32_t t58 = -820525215;

	t58 = (((x253^x254)-x255)^x256);

	if (t58 != -65721) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x258 = 6U;
	volatile uint16_t x259 = UINT16_MAX;
	volatile uint16_t x260 = 1431U;
	static volatile int32_t t59 = -11;

	t59 = (((x257^x258)-x259)^x260);

	if (t59 != -66963) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -1;
	static uint8_t x262 = UINT8_MAX;
	int8_t x263 = -1;
	static uint64_t t60 = 12LLU;

	t60 = (((x261^x262)-x263)^x264);

	if (t60 != 254LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = 5U;
	volatile uint8_t x266 = UINT8_MAX;
	int64_t x267 = -85973289656LL;
	int64_t x268 = 1187484891848LL;
	static volatile int64_t t61 = 949168520123LL;

	t61 = (((x265^x266)-x267)^x268);

	if (t61 != 1101658403194LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = INT64_MIN;
	static int8_t x272 = INT8_MIN;
	static volatile uint64_t t62 = 7051396LLU;

	t62 = (((x269^x270)-x271)^x272);

	if (t62 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x273 = 11780869LLU;
	static int16_t x274 = INT16_MAX;
	uint64_t x275 = 2LLU;
	int32_t x276 = -122;
	volatile uint64_t t63 = 3944820715LLU;

	t63 = (((x273^x274)-x275)^x276);

	if (t63 != 18446744073697772414LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x281 = INT8_MIN;
	int8_t x282 = -1;
	int32_t x283 = INT32_MAX;
	static int16_t x284 = -1;
	int32_t t64 = -881815;

	t64 = (((x281^x282)-x283)^x284);

	if (t64 != 2147483519) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	int64_t t65 = 8176239634553LL;

	t65 = (((x285^x286)-x287)^x288);

	if (t65 != 9223372034707259519LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = 44LLU;
	int32_t x291 = INT32_MIN;
	static int32_t x292 = INT32_MIN;
	volatile uint64_t t66 = 5256LLU;

	t66 = (((x289^x290)-x291)^x292);

	if (t66 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = 2658880LL;
	int32_t x296 = INT32_MAX;
	volatile int64_t t67 = -7LL;

	t67 = (((x293^x294)-x295)^x296);

	if (t67 != -2144824164LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -3;
	volatile int64_t x298 = -1LL;
	static volatile int32_t x299 = -6809722;
	uint32_t x300 = UINT32_MAX;

	t68 = (((x297^x298)-x299)^x300);

	if (t68 != 4288157571LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x302 = INT64_MIN;
	uint8_t x303 = 1U;
	static uint8_t x304 = UINT8_MAX;

	t69 = (((x301^x302)-x303)^x304);

	if (t69 != -9223372036854743295LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = 7U;
	static int64_t x308 = INT64_MAX;
	volatile int64_t t70 = -75062LL;

	t70 = (((x305^x306)-x307)^x308);

	if (t70 != 9223372036854742919LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = -1;
	int16_t x311 = -29;
	static int8_t x312 = -16;
	int32_t t71 = -3;

	t71 = (((x309^x310)-x311)^x312);

	if (t71 != 109) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = UINT32_MAX;
	static int32_t x314 = INT32_MIN;
	int32_t x315 = -1;
	int64_t x316 = INT64_MAX;
	int64_t t72 = 26045267LL;

	t72 = (((x313^x314)-x315)^x316);

	if (t72 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = 40U;
	static volatile int8_t x318 = INT8_MIN;
	volatile int8_t x319 = 0;
	volatile int16_t x320 = -55;
	volatile int32_t t73 = 3385652;

	t73 = (((x317^x318)-x319)^x320);

	if (t73 != 97) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x325 = -48;
	static int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	volatile int32_t t74 = 0;

	t74 = (((x325^x326)-x327)^x328);

	if (t74 != -32593) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MIN;
	volatile int16_t x336 = INT16_MAX;
	volatile int64_t t75 = -7132623312166LL;

	t75 = (((x333^x334)-x335)^x336);

	if (t75 != 4294934528LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x338 = 2LL;
	static int16_t x339 = -143;
	volatile int32_t x340 = -71570;
	int64_t t76 = -5879240344LL;

	t76 = (((x337^x338)-x339)^x340);

	if (t76 != -211300397024895LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = 238;
	int64_t x343 = INT64_MIN;
	int16_t x344 = -1;
	volatile int64_t t77 = 625394012LL;

	t77 = (((x341^x342)-x343)^x344);

	if (t77 != -239LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = 1;
	uint16_t x346 = UINT16_MAX;
	static int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MAX;
	static int32_t t78 = -54268;

	t78 = (((x345^x346)-x347)^x348);

	if (t78 != 65537) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = 52;
	int32_t x350 = INT32_MAX;
	int16_t x351 = 3;
	int16_t x352 = INT16_MIN;
	volatile int32_t t79 = -7;

	t79 = (((x349^x350)-x351)^x352);

	if (t79 != -2147450936) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x354 = UINT32_MAX;
	uint32_t t80 = 35707U;

	t80 = (((x353^x354)-x355)^x356);

	if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x362 = 747325103U;
	volatile uint32_t x363 = 455787U;
	volatile int32_t x364 = -1732;
	int64_t t81 = -36677253402573724LL;

	t81 = (((x361^x362)-x363)^x364);

	if (t81 != 6336079737351LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x365 = UINT8_MAX;
	int16_t x367 = -1;
	uint8_t x368 = 4U;

	t82 = (((x365^x366)-x367)^x368);

	if (t82 != 1057) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 15U;
	int32_t x371 = INT32_MIN;
	uint64_t t83 = 12775542LLU;

	t83 = (((x369^x370)-x371)^x372);

	if (t83 != 18446744071562084263LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -1LL;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;

	t84 = (((x373^x374)-x375)^x376);

	if (t84 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 2U;
	static volatile int64_t x382 = -171926252319154LL;
	static int64_t x383 = -1LL;
	int16_t x384 = -1;
	int64_t t85 = -60776203866LL;

	t85 = (((x381^x382)-x383)^x384);

	if (t85 != 171926252319154LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x385 = UINT16_MAX;
	int64_t x387 = 384979431143LL;
	volatile int32_t x388 = 927140;
	int64_t t86 = -365LL;

	t86 = (((x385^x386)-x387)^x388);

	if (t86 != -384978438999LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x389 = UINT32_MAX;
	volatile int16_t x390 = 13878;
	volatile uint8_t x391 = UINT8_MAX;
	volatile int32_t x392 = INT32_MAX;
	volatile uint32_t t87 = 239013U;

	t87 = (((x389^x390)-x391)^x392);

	if (t87 != 2147497781U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x393 = UINT16_MAX;
	volatile uint64_t x394 = UINT64_MAX;
	int8_t x395 = INT8_MIN;
	static int64_t x396 = -1LL;

	t88 = (((x393^x394)-x395)^x396);

	if (t88 != 65407LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x397 = -1;
	int64_t x398 = INT64_MAX;
	uint64_t x399 = 2023611LLU;
	volatile uint64_t t89 = 6478851949612LLU;

	t89 = (((x397^x398)-x399)^x400);

	if (t89 != 9223372036856799418LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MAX;
	static uint64_t x402 = 19714197267LLU;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -1;
	volatile uint64_t t90 = 810327514107141281LLU;

	t90 = (((x401^x402)-x403)^x404);

	if (t90 != 18446744052621526803LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x410 = 35201165LL;
	volatile uint32_t x411 = 33284U;
	uint16_t x412 = 898U;
	volatile int64_t t91 = -5LL;

	t91 = (((x409^x410)-x411)^x412);

	if (t91 != -35234068LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x413 = INT16_MAX;
	int64_t x414 = -1LL;
	int8_t x416 = 1;
	int64_t t92 = 27654078089122LL;

	t92 = (((x413^x414)-x415)^x416);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = 30;
	int16_t x418 = -1;
	int64_t x420 = 102694846192003LL;
	volatile int64_t t93 = -13521LL;

	t93 = (((x417^x418)-x419)^x420);

	if (t93 != -102694846159263LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = INT64_MIN;
	uint8_t x422 = 44U;
	static uint64_t x423 = UINT64_MAX;
	uint64_t t94 = 1510LLU;

	t94 = (((x421^x422)-x423)^x424);

	if (t94 != 9223372036854775762LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = -1LL;
	int16_t x434 = 1515;
	int16_t x435 = -1216;
	static uint8_t x436 = UINT8_MAX;

	t95 = (((x433^x434)-x435)^x436);

	if (t95 != -469LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x437 = -1;
	volatile uint64_t x438 = 2634774452751LLU;
	int64_t x440 = 406993971760239234LL;

	t96 = (((x437^x438)-x439)^x440);

	if (t96 != 8816380415713146738LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MIN;
	int8_t x444 = -1;

	t97 = (((x441^x442)-x443)^x444);

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = -3;
	static int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	int8_t x448 = -1;
	int32_t t98 = -1053859830;

	t98 = (((x445^x446)-x447)^x448);

	if (t98 != 2147450877) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x453 = UINT16_MAX;
	uint64_t x456 = 1625963200472371LLU;
	uint64_t t99 = 6931576499871LLU;

	t99 = (((x453^x454)-x455)^x456);

	if (t99 != 18445118108864242941LLU) { NG(); } else { ; }
	
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

