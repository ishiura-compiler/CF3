#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 3388623LL;
int64_t x17 = INT64_MIN;
int16_t x22 = INT16_MIN;
uint16_t x24 = 343U;
uint16_t x25 = UINT16_MAX;
uint64_t t8 = 1415105LLU;
int32_t x45 = INT32_MIN;
int8_t x49 = INT8_MAX;
int64_t t13 = 1334526275163LL;
int64_t t14 = 599034454110LL;
static int32_t x70 = 31;
int8_t x72 = INT8_MAX;
volatile int32_t t15 = -480;
static uint32_t t17 = 491938U;
uint64_t x81 = UINT64_MAX;
uint64_t t18 = 223LLU;
uint8_t x88 = 102U;
int64_t x90 = -25698084LL;
static volatile int32_t x91 = 24029795;
uint8_t x92 = 52U;
int64_t t20 = 143045686239677808LL;
uint8_t x95 = UINT8_MAX;
volatile int32_t x99 = 180;
uint32_t x102 = UINT32_MAX;
volatile uint32_t t23 = 31804U;
volatile int32_t x108 = -43233777;
int32_t t24 = -462067;
int32_t x112 = INT32_MAX;
uint16_t x113 = UINT16_MAX;
volatile int32_t t26 = 1;
volatile int64_t x120 = INT64_MAX;
static int32_t x128 = -62;
volatile int64_t x131 = 1356944126928LL;
int64_t x132 = 471792911736129233LL;
static int32_t x134 = INT32_MAX;
int8_t x135 = INT8_MIN;
volatile int32_t t32 = -326669230;
static int64_t x141 = INT64_MIN;
int16_t x142 = INT16_MIN;
static int64_t t34 = 9058582351869LL;
volatile int32_t t36 = 13;
volatile uint64_t t37 = 108659568181792LLU;
uint8_t x165 = UINT8_MAX;
static int64_t x175 = INT64_MIN;
int8_t x177 = -1;
int16_t x188 = -1;
volatile uint32_t x192 = UINT32_MAX;
volatile uint32_t x199 = UINT32_MAX;
static int32_t x202 = INT32_MIN;
volatile int16_t x205 = INT16_MAX;
static int32_t t48 = 0;
volatile int16_t x215 = INT16_MIN;
int64_t x223 = 50506LL;
static volatile uint64_t t52 = 2886868496655426802LLU;
int32_t x238 = 2861885;
volatile uint32_t t56 = 2349U;
volatile int64_t t58 = 1599277428LL;
volatile int8_t x250 = -57;
volatile uint8_t x266 = 5U;
volatile int64_t x268 = INT64_MIN;
int64_t x269 = 14841979168LL;
int8_t x270 = INT8_MAX;
int64_t x275 = -214757646094029LL;
int64_t x278 = -1LL;
uint8_t x295 = 6U;
int32_t x325 = INT32_MIN;
uint32_t x326 = 774U;
volatile uint16_t x330 = 451U;
int16_t x332 = INT16_MAX;
int16_t x333 = INT16_MIN;
int64_t x336 = 7580LL;
static volatile int16_t x339 = 138;
uint32_t t80 = 5U;
int64_t x345 = INT64_MAX;
static int8_t x350 = -1;
static volatile int8_t x351 = INT8_MIN;
int8_t x352 = -1;
int16_t x353 = INT16_MIN;
static int64_t t84 = 739LL;
static int32_t x358 = 177420808;
volatile int32_t t85 = 7496738;
int8_t x365 = -2;
volatile int32_t x371 = 12103386;
uint8_t x374 = 18U;
int64_t x375 = INT64_MAX;
int64_t x381 = INT64_MIN;
int8_t x393 = INT8_MIN;
int8_t x394 = 47;
volatile int32_t t93 = -2045287;
volatile int64_t t96 = -47025LL;
volatile int64_t x414 = INT64_MIN;


void f0(void) {
	int16_t x1 = -5123;
	int64_t x2 = 3635LL;
	uint32_t x3 = 2U;
	int8_t x4 = -9;

	t0 = (((x1^x2)%x3)-x4);

	if (t0 != 9LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MIN;
	static uint16_t x7 = UINT16_MAX;
	uint32_t x8 = 104280824U;
	volatile int64_t t1 = 20LL;

	t1 = (((x5^x6)%x7)-x8);

	if (t1 != -104280824LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 7444630636LLU;
	int8_t x10 = -1;
	uint16_t x11 = 42U;
	volatile uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 272LLU;

	t2 = (((x9^x10)%x11)-x12);

	if (t2 != 42LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 13888053235075LLU;
	uint64_t x14 = 165372348914010183LLU;
	static volatile int32_t x15 = INT32_MIN;
	volatile uint8_t x16 = 8U;
	volatile uint64_t t3 = 516335851LLU;

	t3 = (((x13^x14)%x15)-x16);

	if (t3 != 165377440331056572LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 6;
	int8_t x19 = -1;
	int8_t x20 = -38;
	volatile int64_t t4 = -6566LL;

	t4 = (((x17^x18)%x19)-x20);

	if (t4 != 38LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 64257LLU;
	volatile int16_t x23 = 1;
	static volatile uint64_t t5 = 4333272264054057LLU;

	t5 = (((x21^x22)%x23)-x24);

	if (t5 != 18446744073709551273LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 1;
	int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	static int64_t t6 = 2313LL;

	t6 = (((x25^x26)%x27)-x28);

	if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -466;
	uint32_t x30 = UINT32_MAX;
	static int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;
	uint32_t t7 = 6584U;

	t7 = (((x29^x30)%x31)-x32);

	if (t7 != 2147484113U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = 97228LLU;

	t8 = (((x33^x34)%x35)-x36);

	if (t8 != 18446744073709454387LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -965;
	static int64_t x38 = INT64_MAX;
	int16_t x39 = INT16_MAX;
	int8_t x40 = 1;
	static int64_t t9 = 3228217175278LL;

	t9 = (((x37^x38)%x39)-x40);

	if (t9 != -31812LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x46 = 249984981U;
	int64_t x47 = -261953119696199LL;
	static int32_t x48 = -327822;
	int64_t t10 = -2LL;

	t10 = (((x45^x46)%x47)-x48);

	if (t10 != 2397796451LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 35161106570053LLU;
	int16_t x51 = INT16_MIN;
	int8_t x52 = 1;
	uint64_t t11 = 1009922485384869LLU;

	t11 = (((x49^x50)%x51)-x52);

	if (t11 != 35161106570041LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 0U;
	uint8_t x54 = 2U;
	uint32_t x55 = 85U;
	int32_t x56 = INT32_MIN;
	uint32_t t12 = 24066U;

	t12 = (((x53^x54)%x55)-x56);

	if (t12 != 2147483650U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -62;
	static uint32_t x58 = 4569582U;
	volatile int64_t x59 = -1LL;
	int8_t x60 = -1;

	t13 = (((x57^x58)%x59)-x60);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = 0;
	volatile uint32_t x66 = 1884U;
	static volatile int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;

	t14 = (((x65^x66)%x67)-x68);

	if (t14 != 1757LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = INT32_MIN;
	static int8_t x71 = INT8_MAX;

	t15 = (((x69^x70)%x71)-x72);

	if (t15 != -231) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MAX;
	int32_t x75 = -1;
	volatile int32_t x76 = 0;
	int32_t t16 = -19;

	t16 = (((x73^x74)%x75)-x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	volatile int16_t x78 = -193;
	int16_t x79 = 1;
	static uint32_t x80 = UINT32_MAX;

	t17 = (((x77^x78)%x79)-x80);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x82 = 0;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MAX;

	t18 = (((x81^x82)%x83)-x84);

	if (t18 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = UINT16_MAX;
	static int8_t x87 = INT8_MIN;
	static volatile uint64_t t19 = 30549748801887LLU;

	t19 = (((x85^x86)%x87)-x88);

	if (t19 != 18446744073709485978LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;

	t20 = (((x89^x90)%x91)-x92);

	if (t20 != 1668293LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = 25U;
	int32_t x94 = 3942;
	volatile uint16_t x96 = 29U;
	static uint32_t t21 = 120851U;

	t21 = (((x93^x94)%x95)-x96);

	if (t21 != 113U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x97 = 4U;
	int16_t x98 = -1;
	uint8_t x100 = 1U;
	int32_t t22 = 3296;

	t22 = (((x97^x98)%x99)-x100);

	if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = -1;
	int8_t x103 = INT8_MIN;
	int8_t x104 = -1;

	t23 = (((x101^x102)%x103)-x104);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x105 = -1;
	volatile uint8_t x106 = 0U;
	int8_t x107 = INT8_MAX;

	t24 = (((x105^x106)%x107)-x108);

	if (t24 != 43233776) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = -11673LL;
	volatile int8_t x110 = INT8_MAX;
	volatile int16_t x111 = -6700;
	volatile int64_t t25 = 6202370405LL;

	t25 = (((x109^x110)%x111)-x112);

	if (t25 != -2147488699LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = -11;
	int8_t x116 = INT8_MAX;

	t26 = (((x113^x114)%x115)-x116);

	if (t26 != -132) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	static int16_t x119 = INT16_MIN;
	int64_t t27 = 993419725433632LL;

	t27 = (((x117^x118)%x119)-x120);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = -46;
	int8_t x122 = -1;
	volatile uint32_t x123 = 250760U;
	int8_t x124 = -10;
	volatile uint32_t t28 = 5463226U;

	t28 = (((x121^x122)%x123)-x124);

	if (t28 != 55U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 50798023U;
	uint8_t x126 = 58U;
	int8_t x127 = INT8_MIN;
	uint32_t t29 = 24U;

	t29 = (((x125^x126)%x127)-x128);

	if (t29 != 50798139U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -1;
	int32_t x130 = INT32_MIN;
	int64_t t30 = -11412LL;

	t30 = (((x129^x130)%x131)-x132);

	if (t30 != -471792909588645586LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 6U;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t31 = 96419;

	t31 = (((x133^x134)%x135)-x136);

	if (t31 != -134) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x137 = 4824U;
	static int16_t x138 = -13;
	int32_t x139 = INT32_MIN;
	volatile uint16_t x140 = 236U;

	t32 = (((x137^x138)%x139)-x140);

	if (t32 != -5057) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x143 = INT16_MIN;
	static volatile uint8_t x144 = 3U;
	int64_t t33 = -10LL;

	t33 = (((x141^x142)%x143)-x144);

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 82642U;
	int64_t x146 = INT64_MIN;
	int32_t x147 = 26;
	uint32_t x148 = UINT32_MAX;

	t34 = (((x145^x146)%x147)-x148);

	if (t34 != -4294967315LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = INT16_MAX;
	volatile int64_t t35 = 11542349LL;

	t35 = (((x149^x150)%x151)-x152);

	if (t35 != -32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = -14;
	volatile uint8_t x155 = 25U;
	int16_t x156 = INT16_MIN;

	t36 = (((x153^x154)%x155)-x156);

	if (t36 != 32772) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	static volatile uint16_t x158 = 4U;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = UINT64_MAX;

	t37 = (((x157^x158)%x159)-x160);

	if (t37 != 124LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -28013;
	volatile int16_t x162 = -1;
	int64_t x163 = -1LL;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t38 = 61LLU;

	t38 = (((x161^x162)%x163)-x164);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x166 = -5;
	volatile uint64_t x167 = 3703LLU;
	volatile int32_t x168 = INT32_MIN;
	uint64_t t39 = 3961979LLU;

	t39 = (((x165^x166)%x167)-x168);

	if (t39 != 2147484483LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MAX;
	static int64_t x170 = INT64_MAX;
	int16_t x171 = -875;
	static uint32_t x172 = UINT32_MAX;
	volatile int64_t t40 = -990LL;

	t40 = (((x169^x170)%x171)-x172);

	if (t40 != -4294967240LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 0U;
	volatile int32_t x174 = INT32_MIN;
	static volatile int16_t x176 = -6397;
	volatile int64_t t41 = 227LL;

	t41 = (((x173^x174)%x175)-x176);

	if (t41 != -2147477251LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MIN;
	static int32_t x179 = -1;
	uint64_t x180 = 93913LLU;
	static volatile uint64_t t42 = 56785572841LLU;

	t42 = (((x177^x178)%x179)-x180);

	if (t42 != 18446744073709457703LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -1;
	int64_t x186 = -1LL;
	int16_t x187 = -1;
	int64_t t43 = 10LL;

	t43 = (((x185^x186)%x187)-x188);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 8989U;
	int8_t x190 = 2;
	static uint16_t x191 = 22199U;
	volatile uint32_t t44 = 17205941U;

	t44 = (((x189^x190)%x191)-x192);

	if (t44 != 8992U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	static int16_t x194 = -1;
	uint8_t x195 = 17U;
	int64_t x196 = INT64_MAX;
	int64_t t45 = 85215781984099009LL;

	t45 = (((x193^x194)%x195)-x196);

	if (t45 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = -656899292;
	int16_t x198 = -1;
	static int16_t x200 = INT16_MAX;
	volatile uint32_t t46 = 8U;

	t46 = (((x197^x198)%x199)-x200);

	if (t46 != 656866524U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x201 = UINT8_MAX;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = 49U;
	static volatile int32_t t47 = -27;

	t47 = (((x201^x202)%x203)-x204);

	if (t47 != -50) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x206 = 699393315;
	int16_t x207 = 8;
	volatile int16_t x208 = INT16_MIN;

	t48 = (((x205^x206)%x207)-x208);

	if (t48 != 32772) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = 3549291;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -82;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t49 = -63349289;

	t49 = (((x209^x210)%x211)-x212);

	if (t49 != -179) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 2716LLU;
	static int16_t x214 = -1;
	static int16_t x216 = -1;
	volatile uint64_t t50 = 12103LLU;

	t50 = (((x213^x214)%x215)-x216);

	if (t50 != 30052LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -15;
	static uint8_t x218 = UINT8_MAX;
	uint8_t x219 = 116U;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t51 = -65790800;

	t51 = (((x217^x218)%x219)-x220);

	if (t51 != 32758) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 259424819978748378LLU;
	int8_t x222 = 1;
	volatile int32_t x224 = -1;

	t52 = (((x221^x222)%x223)-x224);

	if (t52 != 34286LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x225 = -81614407LL;
	int16_t x226 = 55;
	static int32_t x227 = -1;
	uint64_t x228 = 1090734LLU;
	uint64_t t53 = 60869LLU;

	t53 = (((x225^x226)%x227)-x228);

	if (t53 != 18446744073708460882LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = 96;
	int8_t x230 = -12;
	int8_t x231 = -3;
	int16_t x232 = INT16_MAX;
	int32_t t54 = -22;

	t54 = (((x229^x230)%x231)-x232);

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	static int64_t x234 = -1LL;
	static uint64_t x235 = UINT64_MAX;
	int32_t x236 = -1;
	volatile uint64_t t55 = 29121856436665047LLU;

	t55 = (((x233^x234)%x235)-x236);

	if (t55 != 128LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	static int16_t x239 = INT16_MIN;
	static int32_t x240 = -1;

	t56 = (((x237^x238)%x239)-x240);

	if (t56 != 4292105411U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 33U;
	int16_t x242 = -135;
	static int32_t x243 = -145458931;
	int16_t x244 = -17;
	int32_t t57 = 1;

	t57 = (((x241^x242)%x243)-x244);

	if (t57 != -151) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x245 = INT64_MAX;
	uint8_t x246 = 60U;
	int32_t x247 = INT32_MAX;
	int8_t x248 = 0;

	t58 = (((x245^x246)%x247)-x248);

	if (t58 != 2147483588LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 12708;
	int64_t x251 = -62027938LL;
	int32_t x252 = INT32_MAX;
	volatile int64_t t59 = -1300708LL;

	t59 = (((x249^x250)%x251)-x252);

	if (t59 != -2147496348LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = INT8_MIN;
	static int8_t x254 = INT8_MIN;
	uint32_t x255 = 3336217U;
	int16_t x256 = 1;
	uint32_t t60 = UINT32_MAX;

	t60 = (((x253^x254)%x255)-x256);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = -285;
	static int16_t x259 = -1;
	int64_t x260 = -7149676699835398LL;
	int64_t t61 = -39002LL;

	t61 = (((x257^x258)%x259)-x260);

	if (t61 != 7149676699835398LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -1;
	int32_t x267 = -5;
	static int64_t t62 = INT64_MAX;

	t62 = (((x265^x266)%x267)-x268);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x271 = 8908327104146LL;
	static int32_t x272 = -8294798;
	static int64_t t63 = -33LL;

	t63 = (((x269^x270)%x271)-x272);

	if (t63 != 14850274029LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 16U;
	int16_t x274 = INT16_MIN;
	uint8_t x276 = 0U;
	volatile int64_t t64 = -786372881152LL;

	t64 = (((x273^x274)%x275)-x276);

	if (t64 != -32752LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MAX;
	int16_t x279 = -1;
	uint16_t x280 = 106U;
	int64_t t65 = -8LL;

	t65 = (((x277^x278)%x279)-x280);

	if (t65 != -106LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	volatile int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;
	uint64_t x284 = 10089033578439556LLU;
	static uint64_t t66 = 66241522059LLU;

	t66 = (((x281^x282)%x283)-x284);

	if (t66 != 18436655040131112180LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x285 = -1;
	int8_t x286 = -2;
	uint32_t x287 = 5U;
	static uint8_t x288 = 1U;
	uint32_t t67 = 258487U;

	t67 = (((x285^x286)%x287)-x288);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x289 = 4882559706232LLU;
	int8_t x290 = INT8_MIN;
	static int64_t x291 = INT64_MAX;
	static int16_t x292 = INT16_MIN;
	uint64_t t68 = 497844LLU;

	t68 = (((x289^x290)%x291)-x292);

	if (t68 != 9223367154295102457LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x293 = 424921U;
	int64_t x294 = 213474367735331LL;
	int32_t x296 = -1;
	volatile int64_t t69 = 172726529873LL;

	t69 = (((x293^x294)%x295)-x296);

	if (t69 != 3LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MIN;
	static volatile int64_t t70 = 6LL;

	t70 = (((x297^x298)%x299)-x300);

	if (t70 != 128LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	static volatile int8_t x303 = INT8_MIN;
	static int16_t x304 = INT16_MAX;
	volatile int64_t t71 = -172191175248563523LL;

	t71 = (((x301^x302)%x303)-x304);

	if (t71 != -32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x305 = 11U;
	int32_t x306 = -1;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 0U;
	volatile int64_t t72 = -1698LL;

	t72 = (((x305^x306)%x307)-x308);

	if (t72 != -12LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	volatile int64_t x312 = INT64_MAX;
	static int64_t t73 = 1645667272955030LL;

	t73 = (((x309^x310)%x311)-x312);

	if (t73 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x313 = 1979537;
	static int32_t x314 = INT32_MAX;
	static int16_t x315 = 51;
	uint64_t x316 = 3005096327219862270LLU;
	uint64_t t74 = 49198338LLU;

	t74 = (((x313^x314)%x315)-x316);

	if (t74 != 15441647746489689348LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = UINT8_MAX;
	static uint16_t x318 = UINT16_MAX;
	static int8_t x319 = -13;
	int8_t x320 = -1;
	volatile int32_t t75 = -21168;

	t75 = (((x317^x318)%x319)-x320);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MAX;
	int64_t x323 = -18315389738264280LL;
	uint32_t x324 = UINT32_MAX;
	volatile uint64_t t76 = 3108145698394LLU;

	t76 = (((x321^x322)%x323)-x324);

	if (t76 != 18315385443264217LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x327 = INT16_MIN;
	uint8_t x328 = 10U;
	volatile uint32_t t77 = 309U;

	t77 = (((x325^x326)%x327)-x328);

	if (t77 != 2147484412U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int16_t x331 = 1;
	int32_t t78 = 62112333;

	t78 = (((x329^x330)%x331)-x332);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x334 = 67U;
	uint16_t x335 = 14777U;
	volatile int64_t t79 = -15340081177LL;

	t79 = (((x333^x334)%x335)-x336);

	if (t79 != 6742LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MAX;
	uint32_t x340 = 1451285062U;

	t80 = (((x337^x338)%x339)-x340);

	if (t80 != 2843682346U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x341 = INT32_MIN;
	uint8_t x342 = 10U;
	int16_t x343 = INT16_MAX;
	int64_t x344 = -117520232LL;
	int64_t t81 = -28550268054372577LL;

	t81 = (((x341^x342)%x343)-x344);

	if (t81 != 117487473LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x346 = INT64_MIN;
	static uint32_t x347 = 34U;
	uint32_t x348 = 15713015U;
	volatile int64_t t82 = -49073957941LL;

	t82 = (((x345^x346)%x347)-x348);

	if (t82 != -15713016LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t t83 = 112629441U;

	t83 = (((x349^x350)%x351)-x352);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = -201LL;
	volatile int8_t x356 = -1;

	t84 = (((x353^x354)%x355)-x356);

	if (t84 != -5LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = 26U;
	static int16_t x359 = -1;
	uint8_t x360 = 24U;

	t85 = (((x357^x358)%x359)-x360);

	if (t85 != -24) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x361 = UINT32_MAX;
	static uint8_t x362 = 104U;
	volatile uint32_t x363 = 61U;
	uint32_t x364 = 8753719U;
	uint32_t t86 = 2098239630U;

	t86 = (((x361^x362)%x363)-x364);

	if (t86 != 4286213590U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 75U;
	volatile int32_t t87 = -416550476;

	t87 = (((x365^x366)%x367)-x368);

	if (t87 != 51) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x369 = 1908697LLU;
	int64_t x370 = INT64_MAX;
	int8_t x372 = INT8_MIN;
	volatile uint64_t t88 = 1053901793465LLU;

	t88 = (((x369^x370)%x371)-x372);

	if (t88 != 4582832LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int8_t x376 = -1;
	volatile int64_t t89 = -210LL;

	t89 = (((x373^x374)%x375)-x376);

	if (t89 != -109LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	static uint16_t x378 = UINT16_MAX;
	volatile int32_t x379 = INT32_MIN;
	static uint8_t x380 = 77U;
	volatile int32_t t90 = 11368;

	t90 = (((x377^x378)%x379)-x380);

	if (t90 != -2147418190) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x382 = 9LL;
	volatile uint16_t x383 = UINT16_MAX;
	uint32_t x384 = UINT32_MAX;
	static volatile int64_t t91 = 19814607844503899LL;

	t91 = (((x381^x382)%x383)-x384);

	if (t91 != -4295000054LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = INT16_MAX;
	uint32_t x386 = 0U;
	uint32_t x387 = 1786284874U;
	int64_t x388 = 1803162445235409LL;
	volatile int64_t t92 = 1566475LL;

	t92 = (((x385^x386)%x387)-x388);

	if (t92 != -1803162445202642LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x395 = INT32_MIN;
	int8_t x396 = 0;

	t93 = (((x393^x394)%x395)-x396);

	if (t93 != -81) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MAX;
	static volatile int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 30247U;
	volatile int64_t t94 = -185792LL;

	t94 = (((x397^x398)%x399)-x400);

	if (t94 != 2147453273LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 3715U;
	volatile uint64_t x402 = UINT64_MAX;
	volatile int16_t x403 = 3678;
	static int64_t x404 = INT64_MIN;
	uint64_t t95 = 6LLU;

	t95 = (((x401^x402)%x403)-x404);

	if (t95 != 9223372036854777370LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 81U;
	volatile int16_t x406 = -1;
	int32_t x407 = INT32_MAX;
	volatile int64_t x408 = INT64_MAX;

	t96 = (((x405^x406)%x407)-x408);

	if (t96 != -9223372034707292240LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = 327LLU;
	uint32_t x410 = 1052409U;
	volatile uint16_t x411 = 12U;
	int8_t x412 = -1;
	uint64_t t97 = 2740260294294443LLU;

	t97 = (((x409^x410)%x411)-x412);

	if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x413 = 38U;
	uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = -170;
	volatile uint64_t t98 = 659608548LLU;

	t98 = (((x413^x414)%x415)-x416);

	if (t98 != 9223372036854776016LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MAX;
	static int64_t x418 = -1LL;
	static int8_t x419 = 27;
	static uint8_t x420 = UINT8_MAX;
	int64_t t99 = -28696430112115548LL;

	t99 = (((x417^x418)%x419)-x420);

	if (t99 != -266LL) { NG(); } else { ; }
	
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

