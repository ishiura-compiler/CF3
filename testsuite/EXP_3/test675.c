#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t1 = 5343LL;
static int64_t x9 = INT64_MIN;
int64_t x22 = INT64_MIN;
static uint32_t x32 = 53754090U;
uint32_t x33 = UINT32_MAX;
static volatile int32_t x36 = -5062110;
volatile uint32_t t8 = 4991U;
int16_t x40 = -3943;
uint8_t x41 = 26U;
volatile int16_t x60 = -1;
static volatile int64_t x69 = INT64_MAX;
uint64_t t16 = 116970885756LLU;
int8_t x76 = INT8_MAX;
volatile uint32_t t19 = 240U;
int8_t x88 = 1;
int16_t x93 = INT16_MAX;
uint32_t x94 = 72858U;
int16_t x100 = -1;
int16_t x110 = INT16_MIN;
uint32_t x113 = 13015U;
int16_t x114 = INT16_MAX;
uint64_t x115 = UINT64_MAX;
volatile uint64_t t27 = 12190658290062312LLU;
uint8_t x123 = UINT8_MAX;
int64_t t29 = 20LL;
int16_t x125 = -1;
int64_t x129 = -1LL;
static int8_t x136 = -30;
volatile int32_t x139 = -481;
volatile uint16_t x142 = UINT16_MAX;
int8_t x144 = INT8_MAX;
static uint32_t x145 = 846706U;
static uint8_t x146 = 22U;
static uint16_t x149 = 11U;
static volatile int64_t t36 = 1047245LL;
int64_t t38 = 13LL;
uint64_t x167 = 44105LLU;
uint32_t x170 = UINT32_MAX;
int32_t x172 = -521627368;
int32_t x179 = -1;
volatile int64_t t44 = -88131LL;
uint8_t x187 = 0U;
volatile int32_t t46 = -169386;
volatile int32_t x201 = 11562;
int32_t x206 = INT32_MIN;
int8_t x210 = INT8_MAX;
volatile int64_t x212 = INT64_MAX;
volatile uint64_t x220 = 192083LLU;
static uint64_t x232 = UINT64_MAX;
static int64_t x234 = 388090950LL;
volatile uint16_t x240 = 5U;
int32_t t57 = -76428468;
int16_t x241 = -1;
int64_t x242 = INT64_MIN;
int32_t x244 = INT32_MIN;
int64_t t59 = -30LL;
volatile int64_t x252 = INT64_MAX;
uint32_t x260 = 85186U;
volatile int64_t x262 = INT64_MAX;
volatile int64_t t64 = -75LL;
int32_t x271 = 860;
int64_t x273 = INT64_MAX;
static volatile int64_t t66 = -2546372740LL;
int8_t x287 = -1;
uint64_t x290 = 8913077LLU;
uint64_t t70 = 3109797LLU;
int16_t x295 = 881;
int8_t x298 = -1;
volatile uint64_t t72 = 706LLU;
uint64_t x301 = UINT64_MAX;
static uint64_t x306 = 0LLU;
int32_t x307 = 224;
volatile uint64_t t74 = 51840684438LLU;
int32_t x309 = -782200996;
int16_t x310 = 6;
volatile int8_t x325 = INT8_MIN;
uint32_t x336 = 6156U;
int32_t x344 = 13488;
int8_t x345 = INT8_MIN;
uint8_t x351 = 127U;
volatile int16_t x353 = -4243;
int64_t x354 = INT64_MAX;
static volatile uint8_t x357 = 49U;
int32_t t86 = -353;
volatile uint16_t x369 = 19U;
uint64_t t89 = 97539264661LLU;
static volatile int32_t t90 = -6;
int64_t t92 = -1376630962030971687LL;
static int32_t t93 = -19680388;
uint16_t x391 = 7515U;
uint8_t x396 = UINT8_MAX;
static uint16_t x402 = 113U;


void f0(void) {
	uint32_t x1 = 2005302U;
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	int64_t t0 = -120015672711864LL;

	t0 = ((x1^x2)|(x3/x4));

	if (t0 != -9223372032557803210LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 8U;
	int64_t x6 = -970530722741LL;
	static int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;

	t1 = ((x5^x6)|(x7/x8));

	if (t1 != -970530722749LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 338LLU;
	int32_t x11 = -1;
	uint8_t x12 = UINT8_MAX;
	uint64_t t2 = 4LLU;

	t2 = ((x9^x10)|(x11/x12));

	if (t2 != 9223372036854776146LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2764712U;
	static int64_t x14 = -1LL;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = 51LL;
	int64_t t3 = -244796LL;

	t3 = ((x13^x14)|(x15/x16));

	if (t3 != -2764713LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 11U;
	int32_t x18 = -77996;
	int64_t x19 = -63LL;
	volatile int16_t x20 = INT16_MIN;
	int64_t t4 = -7423240388LL;

	t4 = ((x17^x18)|(x19/x20));

	if (t4 != -77985LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	volatile int32_t x23 = INT32_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = -22LL;

	t5 = ((x21^x22)|(x23/x24));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;
	static uint16_t x28 = UINT16_MAX;
	volatile uint32_t t6 = 916U;

	t6 = ((x25^x26)|(x27/x28));

	if (t6 != 98177U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 1;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	volatile uint32_t t7 = 1U;

	t7 = ((x29^x30)|(x31/x32));

	if (t7 != 4294967247U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MIN;
	volatile uint32_t x35 = UINT32_MAX;

	t8 = ((x33^x34)|(x35/x36));

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 5U;
	int16_t x38 = INT16_MAX;
	int32_t x39 = -79803;
	uint32_t t9 = 68373U;

	t9 = ((x37^x38)|(x39/x40));

	if (t9 != 32766U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MAX;
	int16_t x43 = 125;
	uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 0U;

	t10 = ((x41^x42)|(x43/x44));

	if (t10 != 32741U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	int32_t x47 = 1022;
	uint32_t x48 = 74586031U;
	uint32_t t11 = 12760U;

	t11 = ((x45^x46)|(x47/x48));

	if (t11 != 2147549183U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static int8_t x50 = 29;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = 175118132;
	volatile int32_t t12 = 530;

	t12 = ((x49^x50)|(x51/x52));

	if (t12 != -99) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 6;
	int64_t x54 = -1LL;
	uint8_t x55 = 9U;
	int32_t x56 = INT32_MAX;
	int64_t t13 = -7392082031LL;

	t13 = ((x53^x54)|(x55/x56));

	if (t13 != -7LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 0;
	int64_t x58 = INT64_MIN;
	uint16_t x59 = 7U;
	int64_t t14 = -14LL;

	t14 = ((x57^x58)|(x59/x60));

	if (t14 != -7LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 2U;
	int8_t x67 = -1;
	int64_t x68 = -1417583067712LL;
	volatile int64_t t15 = 11LL;

	t15 = ((x65^x66)|(x67/x68));

	if (t15 != 253LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MAX;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = -157018LL;

	t16 = ((x69^x70)|(x71/x72));

	if (t16 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	static int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	static volatile uint32_t t17 = 95940U;

	t17 = ((x73^x74)|(x75/x76));

	if (t17 != 383U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -1;
	volatile int16_t x78 = INT16_MAX;
	uint16_t x79 = 3U;
	int32_t x80 = -1;
	static int32_t t18 = 111978;

	t18 = ((x77^x78)|(x79/x80));

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 72U;
	static int16_t x82 = -1;
	uint16_t x83 = 445U;
	static uint32_t x84 = 1U;

	t19 = ((x81^x82)|(x83/x84));

	if (t19 != 4294967231U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 32088139130LLU;
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x85^x86)|(x87/x88));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = INT16_MAX;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t21 = 63;

	t21 = ((x89^x90)|(x91/x92));

	if (t21 != 32512) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x95 = INT16_MIN;
	static volatile int8_t x96 = INT8_MIN;
	static uint32_t t22 = 1249450U;

	t22 = ((x93^x94)|(x95/x96));

	if (t22 != 90981U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 690LLU;
	uint32_t x99 = UINT32_MAX;
	volatile uint64_t t23 = 271262529007204743LLU;

	t23 = ((x97^x98)|(x99/x100));

	if (t23 != 64845LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = 117U;
	static volatile uint64_t x102 = UINT64_MAX;
	int16_t x103 = 5;
	int8_t x104 = 8;
	static volatile uint64_t t24 = 76602860264292112LLU;

	t24 = ((x101^x102)|(x103/x104));

	if (t24 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -417;
	uint64_t x106 = 28592LLU;
	static volatile int16_t x107 = -1;
	static volatile int16_t x108 = -1;
	uint64_t t25 = 4327275895201LLU;

	t25 = ((x105^x106)|(x107/x108));

	if (t25 != 18446744073709523439LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 303U;
	int64_t x111 = INT64_MIN;
	volatile int16_t x112 = INT16_MAX;
	int64_t t26 = -1223312087757LL;

	t26 = ((x109^x110)|(x111/x112));

	if (t26 != -281483566645249LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x116 = INT8_MIN;

	t27 = ((x113^x114)|(x115/x116));

	if (t27 != 19753LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -16312;
	static int32_t x118 = 255419857;
	static uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MAX;
	volatile uint32_t t28 = 96194501U;

	t28 = ((x117^x118)|(x119/x120));

	if (t28 != 4039550363U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	int64_t x124 = INT64_MIN;

	t29 = ((x121^x122)|(x123/x124));

	if (t29 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x126 = 12U;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	int64_t t30 = -700435653022910LL;

	t30 = ((x125^x126)|(x127/x128));

	if (t30 != -140737488355341LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = -234342663;
	int8_t x131 = -1;
	int8_t x132 = 41;
	int64_t t31 = 7LL;

	t31 = ((x129^x130)|(x131/x132));

	if (t31 != 234342662LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -1;
	int64_t x134 = 14024648491778LL;
	int32_t x135 = INT32_MIN;
	int64_t t32 = 183LL;

	t32 = ((x133^x134)|(x135/x136));

	if (t32 != -14024581382915LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 10711U;
	volatile int8_t x138 = 0;
	uint32_t x140 = 133037U;
	static uint32_t t33 = 701340U;

	t33 = ((x137^x138)|(x139/x140));

	if (t33 != 32735U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = INT8_MAX;
	static int64_t x143 = 14563024241LL;
	int64_t t34 = 9647824LL;

	t34 = ((x141^x142)|(x143/x144));

	if (t34 != 114687914LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x147 = -1;
	static int32_t x148 = INT32_MIN;
	uint32_t t35 = 444U;

	t35 = ((x145^x146)|(x147/x148));

	if (t35 != 846692U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x150 = INT64_MAX;
	int16_t x151 = 0;
	int32_t x152 = INT32_MIN;

	t36 = ((x149^x150)|(x151/x152));

	if (t36 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x153 = INT8_MIN;
	static uint8_t x154 = 7U;
	uint16_t x155 = 153U;
	int64_t x156 = INT64_MIN;
	static int64_t t37 = 50931LL;

	t37 = ((x153^x154)|(x155/x156));

	if (t37 != -121LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 139277;
	int32_t x158 = -1;
	static uint8_t x159 = UINT8_MAX;
	int64_t x160 = -413557594LL;

	t38 = ((x157^x158)|(x159/x160));

	if (t38 != -139278LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	volatile uint64_t x164 = 3582728682LLU;
	static volatile uint64_t t39 = 2537908652737LLU;

	t39 = ((x161^x162)|(x163/x164));

	if (t39 != 127LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 6469;
	int8_t x166 = -1;
	int16_t x168 = -385;
	uint64_t t40 = 11508555LLU;

	t40 = ((x165^x166)|(x167/x168));

	if (t40 != 18446744073709545146LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 51U;
	int32_t x171 = INT32_MAX;
	volatile uint32_t t41 = 14240952U;

	t41 = ((x169^x170)|(x171/x172));

	if (t41 != 4294967292U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -1LL;
	int8_t x175 = -7;
	uint32_t x176 = 131408066U;
	volatile int64_t t42 = 297LL;

	t42 = ((x173^x174)|(x175/x176));

	if (t42 != -4294967264LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 5LLU;
	int8_t x178 = -1;
	static uint16_t x180 = UINT16_MAX;
	volatile uint64_t t43 = 27513449412377270LLU;

	t43 = ((x177^x178)|(x179/x180));

	if (t43 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	int32_t x182 = 4006059;
	int64_t x183 = INT64_MAX;
	static int64_t x184 = -4449LL;

	t44 = ((x181^x182)|(x183/x184));

	if (t44 != -73763LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = INT8_MIN;
	uint32_t x188 = 2U;
	volatile uint32_t t45 = 1668U;

	t45 = ((x185^x186)|(x187/x188));

	if (t45 != 2147483520U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = 1;
	volatile int32_t x190 = INT32_MIN;
	static int8_t x191 = INT8_MIN;
	uint16_t x192 = 13986U;

	t46 = ((x189^x190)|(x191/x192));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MAX;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -51;
	static int32_t t47 = -1502240;

	t47 = ((x193^x194)|(x195/x196));

	if (t47 != -2147450881) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x202 = 1;
	int8_t x203 = INT8_MIN;
	int32_t x204 = 131264847;
	volatile int32_t t48 = 3;

	t48 = ((x201^x202)|(x203/x204));

	if (t48 != 11563) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = INT16_MIN;
	int32_t t49 = 5846011;

	t49 = ((x205^x206)|(x207/x208));

	if (t49 != 2147483520) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = -22;
	static int64_t x211 = INT64_MAX;
	static volatile int64_t t50 = 1011757540950493884LL;

	t50 = ((x209^x210)|(x211/x212));

	if (t50 != -107LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = INT16_MIN;
	volatile int64_t x214 = INT64_MIN;
	static int16_t x215 = -1;
	int16_t x216 = INT16_MIN;
	int64_t t51 = 975406008481LL;

	t51 = ((x213^x214)|(x215/x216));

	if (t51 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x217 = 3232223808985098LL;
	volatile int8_t x218 = INT8_MIN;
	static int16_t x219 = INT16_MIN;
	static uint64_t t52 = 186479127021LLU;

	t52 = ((x217^x218)|(x219/x220));

	if (t52 != 18443603181113960383LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = 54U;
	int64_t x222 = INT64_MIN;
	int64_t x223 = 14925850183LL;
	int64_t x224 = INT64_MAX;
	static int64_t t53 = -20498407022LL;

	t53 = ((x221^x222)|(x223/x224));

	if (t53 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 3758U;
	uint8_t x226 = UINT8_MAX;
	static volatile uint16_t x227 = 78U;
	uint16_t x228 = 16483U;
	volatile int32_t t54 = -10;

	t54 = ((x225^x226)|(x227/x228));

	if (t54 != 3665) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 10U;
	volatile uint8_t x230 = 36U;
	static uint32_t x231 = 1397084U;
	volatile uint64_t t55 = 22582835738253874LLU;

	t55 = ((x229^x230)|(x231/x232));

	if (t55 != 46LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x235 = 1;
	int32_t x236 = -1030098;
	volatile int64_t t56 = -1518152293848359587LL;

	t56 = ((x233^x234)|(x235/x236));

	if (t56 != -9223372036466684858LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x237 = 85U;
	static volatile int8_t x238 = -1;
	static int32_t x239 = INT32_MIN;

	t57 = ((x237^x238)|(x239/x240));

	if (t57 != -17) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x243 = INT8_MIN;
	static int64_t t58 = INT64_MAX;

	t58 = ((x241^x242)|(x243/x244));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = 203;
	int8_t x246 = -3;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 26791U;

	t59 = ((x245^x246)|(x247/x248));

	if (t59 != -73LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = 0;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int64_t t60 = -8485356910721LL;

	t60 = ((x249^x250)|(x251/x252));

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x253 = -1;
	int16_t x254 = INT16_MAX;
	volatile int64_t x255 = INT64_MIN;
	static int8_t x256 = INT8_MIN;
	volatile int64_t t61 = -9698329150987LL;

	t61 = ((x253^x254)|(x255/x256));

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MAX;
	int8_t x258 = 12;
	int64_t x259 = INT64_MAX;
	static volatile int64_t t62 = -9643LL;

	t62 = ((x257^x258)|(x259/x260));

	if (t62 != 108273978048507LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	static int64_t x263 = INT64_MIN;
	int16_t x264 = 9;
	static int64_t t63 = 44349223204903LL;

	t63 = ((x261^x262)|(x263/x264));

	if (t63 != -56LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = -1;
	volatile int64_t x266 = -12283LL;
	volatile int16_t x267 = INT16_MIN;
	static int64_t x268 = INT64_MAX;

	t64 = ((x265^x266)|(x267/x268));

	if (t64 != 12282LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	static int64_t x270 = INT64_MIN;
	volatile uint16_t x272 = 8U;
	int64_t t65 = 7LL;

	t65 = ((x269^x270)|(x271/x272));

	if (t65 != 107LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x274 = UINT8_MAX;
	volatile uint8_t x275 = 5U;
	static uint16_t x276 = UINT16_MAX;

	t66 = ((x273^x274)|(x275/x276));

	if (t66 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = INT16_MIN;
	volatile int16_t x278 = -1;
	int64_t x279 = INT64_MIN;
	static volatile uint32_t x280 = 2127459643U;
	int64_t t67 = 1742355606533327LL;

	t67 = ((x277^x278)|(x279/x280));

	if (t67 != -4335370241LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -95LL;
	volatile uint16_t x282 = UINT16_MAX;
	static uint8_t x283 = 3U;
	volatile int64_t x284 = -1613LL;
	static int64_t t68 = -48244623724424LL;

	t68 = ((x281^x282)|(x283/x284));

	if (t68 != -65442LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = UINT8_MAX;
	static int32_t x286 = -1;
	static int8_t x288 = 1;
	int32_t t69 = -18;

	t69 = ((x285^x286)|(x287/x288));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = UINT64_MAX;

	t70 = ((x289^x290)|(x291/x292));

	if (t70 != 18446744071570981045LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x293 = 1U;
	int32_t x294 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;
	static int32_t t71 = -18619020;

	t71 = ((x293^x294)|(x295/x296));

	if (t71 != -2147483645) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x297 = 30U;
	uint64_t x299 = UINT64_MAX;
	uint16_t x300 = 1523U;

	t72 = ((x297^x298)|(x299/x300));

	if (t72 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x302 = 1299882LLU;
	static int64_t x303 = 12427159551350LL;
	volatile int8_t x304 = INT8_MIN;
	uint64_t t73 = 220557125523LLU;

	t73 = ((x301^x302)|(x303/x304));

	if (t73 != 18446744073708448727LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	int64_t x308 = INT64_MIN;

	t74 = ((x305^x306)|(x307/x308));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x311 = INT32_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t75 = -122221170;

	t75 = ((x309^x310)|(x311/x312));

	if (t75 != -8388646) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = -105;
	uint32_t x314 = 1190855225U;
	int32_t x315 = -23878;
	static volatile int32_t x316 = -1;
	volatile uint32_t t76 = 46U;

	t76 = ((x313^x314)|(x315/x316));

	if (t76 != 3104112110U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = 61U;
	int8_t x318 = -1;
	volatile int32_t x319 = INT32_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t77 = -292114372;

	t77 = ((x317^x318)|(x319/x320));

	if (t77 != -62) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x321 = 44792U;
	int32_t x322 = INT32_MAX;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 16U;
	volatile uint32_t t78 = 370U;

	t78 = ((x321^x322)|(x323/x324));

	if (t78 != 4294922503U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = INT16_MIN;
	volatile int8_t x327 = INT8_MIN;
	volatile uint32_t x328 = 8984576U;
	volatile uint32_t t79 = 6318U;

	t79 = ((x325^x326)|(x327/x328));

	if (t79 != 32734U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MAX;
	int16_t x330 = -1;
	int64_t x331 = INT64_MAX;
	volatile int16_t x332 = -1;
	volatile int64_t t80 = -5605573026354939LL;

	t80 = ((x329^x330)|(x331/x332));

	if (t80 != -2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x333 = INT32_MIN;
	uint16_t x334 = 15U;
	static int64_t x335 = INT64_MIN;
	int64_t t81 = -44862436902LL;

	t81 = ((x333^x334)|(x335/x336));

	if (t81 != -2136320625LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = 30776LL;
	volatile int8_t x342 = 1;
	static int8_t x343 = INT8_MAX;
	int64_t t82 = -2521014LL;

	t82 = ((x341^x342)|(x343/x344));

	if (t82 != 30777LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x346 = INT64_MIN;
	int32_t x347 = -193712;
	int8_t x348 = -1;
	int64_t t83 = 243LL;

	t83 = ((x345^x346)|(x347/x348));

	if (t83 != 9223372036854775728LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x349 = INT64_MIN;
	int64_t x350 = 42LL;
	static int32_t x352 = 31016;
	int64_t t84 = -230672779905LL;

	t84 = ((x349^x350)|(x351/x352));

	if (t84 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x355 = 12U;
	uint16_t x356 = 5598U;
	static int64_t t85 = -333480150363384470LL;

	t85 = ((x353^x354)|(x355/x356));

	if (t85 != -9223372036854771566LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x358 = 1;
	volatile uint16_t x359 = 1U;
	int32_t x360 = INT32_MAX;

	t86 = ((x357^x358)|(x359/x360));

	if (t86 != 48) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x361 = 15692404U;
	static volatile int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 64U;
	uint32_t t87 = 32335U;

	t87 = ((x361^x362)|(x363/x364));

	if (t87 != 4279274891U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x365 = -1;
	int8_t x366 = -9;
	static uint16_t x367 = 3548U;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t88 = -4857;

	t88 = ((x365^x366)|(x367/x368));

	if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MAX;
	int16_t x372 = -1;

	t89 = ((x369^x370)|(x371/x372));

	if (t89 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x373 = -7;
	int32_t x374 = -1;
	volatile int8_t x375 = -1;
	static int8_t x376 = INT8_MAX;

	t90 = ((x373^x374)|(x375/x376));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 3U;
	volatile int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;
	int64_t t91 = 1773LL;

	t91 = ((x377^x378)|(x379/x380));

	if (t91 != -125LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = 1;
	uint16_t x383 = 21U;
	uint8_t x384 = UINT8_MAX;

	t92 = ((x381^x382)|(x383/x384));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 80U;
	uint8_t x386 = 18U;
	int32_t x387 = INT32_MAX;
	int16_t x388 = INT16_MIN;

	t93 = ((x385^x386)|(x387/x388));

	if (t93 != -65469) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x390 = 11;
	int16_t x392 = INT16_MIN;
	int32_t t94 = 0;

	t94 = ((x389^x390)|(x391/x392));

	if (t94 != 65524) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x393 = 15U;
	uint8_t x394 = 91U;
	static volatile int16_t x395 = INT16_MAX;
	uint32_t t95 = 153U;

	t95 = ((x393^x394)|(x395/x396));

	if (t95 != 212U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x397 = 43U;
	int16_t x398 = INT16_MIN;
	volatile uint16_t x399 = 247U;
	int32_t x400 = -49035329;
	uint32_t t96 = 6004U;

	t96 = ((x397^x398)|(x399/x400));

	if (t96 != 4294934571U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MAX;
	int16_t x403 = 1;
	int64_t x404 = INT64_MIN;
	volatile int64_t t97 = 48169147397LL;

	t97 = ((x401^x402)|(x403/x404));

	if (t97 != 9223372036854775694LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x405 = INT64_MIN;
	int64_t x406 = 7LL;
	uint16_t x407 = UINT16_MAX;
	uint32_t x408 = 166924U;
	volatile int64_t t98 = 56247853LL;

	t98 = ((x405^x406)|(x407/x408));

	if (t98 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = UINT16_MAX;
	uint16_t x410 = 184U;
	uint16_t x411 = 2U;
	int8_t x412 = INT8_MAX;
	int32_t t99 = -51;

	t99 = ((x409^x410)|(x411/x412));

	if (t99 != 65351) { NG(); } else { ; }
	
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

