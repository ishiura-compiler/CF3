#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = UINT32_MAX;
volatile uint32_t t2 = 23403U;
volatile uint32_t x13 = 4U;
uint16_t x16 = UINT16_MAX;
int64_t x23 = -1LL;
static int64_t t4 = -69588736062790LL;
static int32_t x25 = INT32_MIN;
uint16_t x29 = 297U;
uint64_t x35 = 156053790LLU;
uint64_t t7 = 790434003331LLU;
static uint16_t x37 = UINT16_MAX;
static volatile uint64_t t8 = 201401357911193LLU;
int8_t x44 = -1;
volatile uint64_t t9 = 764528LLU;
int64_t x56 = -42045732017039LL;
volatile int64_t t11 = -27451LL;
static int8_t x60 = 0;
volatile int32_t t12 = -8;
uint32_t x61 = UINT32_MAX;
int64_t x64 = INT64_MAX;
int64_t x69 = 4808LL;
int64_t t15 = 4023528273562LL;
uint32_t x75 = 2U;
uint16_t x93 = 6959U;
int32_t x94 = INT32_MAX;
static uint32_t x96 = 1242U;
static int32_t x105 = INT32_MIN;
static volatile uint16_t x110 = 466U;
int64_t t25 = 52463790096263LL;
int32_t x127 = 50137;
int64_t x131 = 101300633LL;
int64_t t28 = 65282856778462940LL;
volatile int64_t t29 = 1LL;
int32_t x140 = INT32_MIN;
volatile uint64_t t30 = 15271878LLU;
uint32_t x141 = UINT32_MAX;
volatile uint8_t x146 = 3U;
static uint32_t x151 = 914235U;
int32_t x154 = 47067729;
int32_t x157 = 1;
static volatile int64_t t36 = -52678LL;
int32_t x175 = 8197;
volatile int16_t x177 = -5;
static volatile int16_t x180 = -226;
volatile int16_t x184 = 207;
static volatile int64_t x189 = -31299118LL;
int16_t x190 = 0;
static volatile uint64_t t42 = 128575941LLU;
int64_t x195 = 142444LL;
int64_t t43 = 55LL;
uint32_t x197 = 350849133U;
uint32_t x205 = 1180U;
uint16_t x208 = UINT16_MAX;
volatile uint32_t t46 = 1555428740U;
uint64_t t49 = 60471366670648040LLU;
volatile int16_t x222 = -1;
volatile uint64_t x223 = UINT64_MAX;
int32_t x224 = 54;
uint64_t t50 = 138049040323928LLU;
volatile uint32_t x227 = UINT32_MAX;
uint32_t x229 = 32U;
uint8_t x230 = UINT8_MAX;
int64_t x233 = INT64_MIN;
int64_t t53 = 2LL;
uint16_t x244 = UINT16_MAX;
uint64_t x246 = UINT64_MAX;
int16_t x249 = INT16_MIN;
volatile uint32_t t58 = 1U;
int8_t x261 = INT8_MIN;
volatile uint64_t t62 = 30039002753724158LLU;
int32_t x274 = -1;
int32_t x287 = INT32_MIN;
volatile int64_t x288 = -3LL;
int16_t x294 = -6363;
uint64_t x298 = 23277LLU;
volatile uint64_t t68 = 1888985LLU;
volatile uint64_t x302 = 12649LLU;
uint16_t x305 = 1013U;
int8_t x306 = INT8_MIN;
uint8_t x307 = 7U;
uint8_t x308 = UINT8_MAX;
static int64_t x309 = -1LL;
volatile int8_t x312 = INT8_MAX;
static uint32_t t72 = 34U;
static volatile uint32_t x319 = 307869U;
static volatile uint32_t t73 = 821U;
int16_t x322 = INT16_MIN;
static int16_t x324 = INT16_MIN;
static volatile uint64_t t74 = 5991632675180LLU;
uint64_t t75 = 9613LLU;
int32_t x331 = 1286;
volatile int16_t x334 = -1;
int32_t x336 = -1;
int64_t x337 = INT64_MAX;
int32_t x350 = INT32_MAX;
int16_t x359 = INT16_MAX;
int32_t t82 = -938725810;
uint64_t x376 = 0LLU;
static uint8_t x380 = UINT8_MAX;
int32_t x381 = -1;
volatile int16_t x386 = -292;
int8_t x389 = INT8_MAX;
int32_t x398 = INT32_MIN;
volatile int64_t x403 = -3426779458156380461LL;
int64_t x405 = INT64_MIN;
uint64_t x413 = 6415852018260924884LLU;
int16_t x415 = -1873;
int32_t x416 = INT32_MAX;
int64_t x420 = -470151LL;
volatile int32_t x424 = INT32_MIN;
uint32_t t98 = 115820U;
int32_t x425 = INT32_MIN;
uint16_t x427 = 2U;


void f0(void) {
	static volatile int8_t x1 = -1;
	int16_t x2 = -126;
	static int16_t x3 = INT16_MIN;
	int32_t x4 = 1990;
	static volatile int32_t t0 = 389;

	t0 = (((x1^x2)&x3)-x4);

	if (t0 != -1990) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 1216LLU;
	volatile int8_t x6 = 46;
	uint64_t x7 = 6917893088401135LLU;
	int32_t x8 = -166;
	volatile uint64_t t1 = 18LLU;

	t1 = (((x5^x6)&x7)-x8);

	if (t1 != 1428LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -24;
	uint32_t x11 = 482U;
	int16_t x12 = -1;

	t2 = (((x9^x10)&x11)-x12);

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = 15U;
	uint8_t x15 = 112U;
	uint32_t t3 = 2820916U;

	t3 = (((x13^x14)&x15)-x16);

	if (t3 != 4294901761U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	int8_t x24 = INT8_MIN;

	t4 = (((x21^x22)&x23)-x24);

	if (t4 != 9223372036854743168LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = INT32_MIN;
	int16_t x27 = -1;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t5 = 160500;

	t5 = (((x25^x26)&x27)-x28);

	if (t5 != -65535) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x30 = 2U;
	static uint8_t x31 = 13U;
	volatile int32_t x32 = 1806;
	static volatile int32_t t6 = 69653;

	t6 = (((x29^x30)&x31)-x32);

	if (t6 != -1797) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int16_t x34 = -10;
	volatile uint32_t x36 = 795U;

	t7 = (((x33^x34)&x35)-x36);

	if (t7 != 18446744073709550829LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x38 = 3U;
	uint64_t x39 = 1840308999144105562LLU;
	volatile int16_t x40 = -130;

	t8 = (((x37^x38)&x39)-x40);

	if (t8 != 26330LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 282509LLU;
	uint32_t x42 = UINT32_MAX;
	uint64_t x43 = 12144023340504LLU;

	t9 = (((x41^x42)&x43)-x44);

	if (t9 != 2150793297LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int16_t x50 = INT16_MIN;
	int8_t x51 = 46;
	int64_t x52 = INT64_MAX;
	volatile int64_t t10 = 1LL;

	t10 = (((x49^x50)&x51)-x52);

	if (t10 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = 6U;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;

	t11 = (((x53^x54)&x55)-x56);

	if (t11 != 42043584533391LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = 51;
	int32_t x59 = INT32_MIN;

	t12 = (((x57^x58)&x59)-x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x62 = INT8_MIN;
	volatile int64_t x63 = INT64_MAX;
	volatile int64_t t13 = -277LL;

	t13 = (((x61^x62)&x63)-x64);

	if (t13 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1;
	int32_t x66 = -10748;
	uint8_t x67 = 1U;
	uint16_t x68 = 1U;
	volatile int32_t t14 = 367990450;

	t14 = (((x65^x66)&x67)-x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = 63U;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;

	t15 = (((x69^x70)&x71)-x72);

	if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MIN;
	int32_t x76 = -25;
	volatile int64_t t16 = 2LL;

	t16 = (((x73^x74)&x75)-x76);

	if (t16 != 25LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 17137;
	int64_t x78 = -1LL;
	int8_t x79 = -3;
	static uint16_t x80 = 290U;
	int64_t t17 = -5682582799LL;

	t17 = (((x77^x78)&x79)-x80);

	if (t17 != -17430LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x85 = 6U;
	volatile uint32_t x86 = UINT32_MAX;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = -125138LL;
	volatile int64_t t18 = -113886215LL;

	t18 = (((x85^x86)&x87)-x88);

	if (t18 != 4295059666LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x89 = 194895LLU;
	int8_t x90 = INT8_MAX;
	int64_t x91 = INT64_MAX;
	int8_t x92 = INT8_MIN;
	uint64_t t19 = 3100408790885LLU;

	t19 = (((x89^x90)&x91)-x92);

	if (t19 != 194992LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x95 = 749440593638852235LL;
	static volatile int64_t t20 = 44LL;

	t20 = (((x93^x94)&x95)-x96);

	if (t20 != 1276772262LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = 108661750;
	int16_t x99 = 2072;
	int32_t x100 = 1557;
	volatile uint32_t t21 = 26628160U;

	t21 = (((x97^x98)&x99)-x100);

	if (t21 != 4294965747U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x106 = INT8_MAX;
	static uint8_t x107 = 3U;
	static volatile uint8_t x108 = UINT8_MAX;
	static int32_t t22 = 1218;

	t22 = (((x105^x106)&x107)-x108);

	if (t22 != -252) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -1;
	static int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t23 = 3163014;

	t23 = (((x109^x110)&x111)-x112);

	if (t23 != 32256) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MIN;
	volatile uint64_t x115 = UINT64_MAX;
	int8_t x116 = 16;
	volatile uint64_t t24 = 3586LLU;

	t24 = (((x113^x114)&x115)-x116);

	if (t24 != 18446744073709519087LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x117 = UINT8_MAX;
	int16_t x118 = -1;
	int64_t x119 = INT64_MAX;
	volatile int8_t x120 = INT8_MIN;

	t25 = (((x117^x118)&x119)-x120);

	if (t25 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = INT8_MIN;
	int8_t x123 = -18;
	int8_t x124 = -1;
	int32_t t26 = -31136980;

	t26 = (((x121^x122)&x123)-x124);

	if (t26 != -145) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -855355160756995LL;
	volatile int32_t x126 = INT32_MIN;
	volatile int16_t x128 = -8502;
	int64_t t27 = -31LL;

	t27 = (((x125^x126)&x127)-x128);

	if (t27 != 25103LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = 89U;
	static uint8_t x130 = 17U;
	static int32_t x132 = INT32_MAX;

	t28 = (((x129^x130)&x131)-x132);

	if (t28 != -2147483639LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x133 = INT8_MIN;
	uint16_t x134 = 37U;
	static volatile int64_t x135 = -1LL;
	int64_t x136 = 373709755LL;

	t29 = (((x133^x134)&x135)-x136);

	if (t29 != -373709846LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 528629070U;
	volatile uint64_t x138 = 383849LLU;
	int8_t x139 = -1;

	t30 = (((x137^x138)&x139)-x140);

	if (t30 != 2676483623LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x142 = -5294591202003421LL;
	static uint8_t x143 = 20U;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t31 = 25840298989656190LLU;

	t31 = (((x141^x142)&x143)-x144);

	if (t31 != 21LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile int64_t t32 = -39144059716858970LL;

	t32 = (((x145^x146)&x147)-x148);

	if (t32 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MIN;
	static volatile uint64_t x150 = 297998LLU;
	static int8_t x152 = 11;
	uint64_t t33 = 43229198LLU;

	t33 = (((x149^x150)&x151)-x152);

	if (t33 != 294911LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	int64_t x155 = INT64_MAX;
	static uint64_t x156 = UINT64_MAX;
	static volatile uint64_t t34 = 37888LLU;

	t34 = (((x153^x154)&x155)-x156);

	if (t34 != 9223372036807708114LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x158 = INT8_MAX;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	uint64_t t35 = 18245975LLU;

	t35 = (((x157^x158)&x159)-x160);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = -1;
	int64_t x163 = -240954438LL;
	uint16_t x164 = 1U;

	t36 = (((x161^x162)&x163)-x164);

	if (t36 != 9223372036613821369LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MAX;
	static uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t37 = 57178U;

	t37 = (((x165^x166)&x167)-x168);

	if (t37 != 256U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = INT8_MAX;
	static int8_t x170 = INT8_MIN;
	uint64_t x171 = 70141873LLU;
	static int16_t x172 = -1;
	uint64_t t38 = 115048452LLU;

	t38 = (((x169^x170)&x171)-x172);

	if (t38 != 70141874LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = 15;
	int32_t x174 = 136;
	uint64_t x176 = 3698650776LLU;
	uint64_t t39 = 4436881925578959LLU;

	t39 = (((x173^x174)&x175)-x176);

	if (t39 != 18446744070010900845LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x178 = 8613302200272279LLU;
	int64_t x179 = INT64_MAX;
	uint64_t t40 = 304048LLU;

	t40 = (((x177^x178)&x179)-x180);

	if (t40 != 9214758734654503758LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 13U;
	static uint32_t x182 = UINT32_MAX;
	int16_t x183 = -1;
	volatile uint32_t t41 = 39663633U;

	t41 = (((x181^x182)&x183)-x184);

	if (t41 != 4294967075U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x191 = 620214852861LL;
	uint64_t x192 = 71338478933LLU;

	t42 = (((x189^x190)&x191)-x192);

	if (t42 != 548850318203LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	uint16_t x196 = 470U;

	t43 = (((x193^x194)&x195)-x196);

	if (t43 != -470LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = -12555766727952407LL;
	volatile int8_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	uint64_t t44 = 90908144521646LLU;

	t44 = (((x197^x198)&x199)-x200);

	if (t44 != 18434188307323010949LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = UINT64_MAX;
	static int32_t x203 = -11677009;
	uint32_t x204 = UINT32_MAX;
	volatile uint64_t t45 = 887596LLU;

	t45 = (((x201^x202)&x203)-x204);

	if (t45 != 18446744069402907137LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x206 = 166;
	uint16_t x207 = UINT16_MAX;

	t46 = (((x205^x206)&x207)-x208);

	if (t46 != 4294902843U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = 24378330118508LL;
	uint64_t x210 = 699790662861009718LLU;
	int32_t x211 = -1;
	int8_t x212 = INT8_MAX;
	static uint64_t t47 = 95804LLU;

	t47 = (((x209^x210)&x211)-x212);

	if (t47 != 699801537656113627LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x213 = 36U;
	uint64_t x214 = 152587LLU;
	int32_t x215 = -29032;
	volatile uint32_t x216 = UINT32_MAX;
	volatile uint64_t t48 = 66047325LLU;

	t48 = (((x213^x214)&x215)-x216);

	if (t48 != 18446744069414716425LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x217 = 327750679441033630LL;
	static int32_t x218 = -59512332;
	uint64_t x219 = 3824447036351LLU;
	int64_t x220 = 21LL;

	t49 = (((x217^x218)&x219)-x220);

	if (t49 != 525370785813LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 94967LLU;

	t50 = (((x221^x222)&x223)-x224);

	if (t50 != 18446744073709456594LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	volatile int32_t x226 = 12;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t51 = 12168984U;

	t51 = (((x225^x226)&x227)-x228);

	if (t51 != 2147483635U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x231 = INT32_MAX;
	int8_t x232 = -1;
	volatile uint32_t t52 = 620334U;

	t52 = (((x229^x230)&x231)-x232);

	if (t52 != 224U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x234 = UINT16_MAX;
	int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MIN;

	t53 = (((x233^x234)&x235)-x236);

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 47036173U;
	volatile uint32_t t54 = 114300556U;

	t54 = (((x237^x238)&x239)-x240);

	if (t54 != 2100447475U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x241 = INT32_MIN;
	uint8_t x242 = 15U;
	int8_t x243 = 2;
	volatile int32_t t55 = -31;

	t55 = (((x241^x242)&x243)-x244);

	if (t55 != -65533) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x245 = 87U;
	uint16_t x247 = 1U;
	int64_t x248 = INT64_MAX;
	uint64_t t56 = 13262178278180LLU;

	t56 = (((x245^x246)&x247)-x248);

	if (t56 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x250 = UINT16_MAX;
	uint16_t x251 = 30411U;
	int64_t x252 = 138538435830796430LL;
	volatile int64_t t57 = 1LL;

	t57 = (((x249^x250)&x251)-x252);

	if (t57 != -138538435830766019LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	int16_t x254 = -2;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;

	t58 = (((x253^x254)&x255)-x256);

	if (t58 != 2U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = -1;
	volatile int32_t x258 = -1;
	int8_t x259 = -1;
	static int64_t x260 = INT64_MAX;
	int64_t t59 = -25895368LL;

	t59 = (((x257^x258)&x259)-x260);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x262 = 69070423U;
	volatile uint64_t x263 = 0LLU;
	uint64_t x264 = UINT64_MAX;
	uint64_t t60 = 274933994904011416LLU;

	t60 = (((x261^x262)&x263)-x264);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	uint32_t x266 = UINT32_MAX;
	volatile int8_t x267 = INT8_MIN;
	volatile uint8_t x268 = 63U;
	volatile int64_t t61 = 3379815363732342LL;

	t61 = (((x265^x266)&x267)-x268);

	if (t61 != -4294967359LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = -1;
	static volatile uint64_t x270 = 1334LLU;
	uint32_t x271 = 25985036U;
	int64_t x272 = 832524219160724608LL;

	t62 = (((x269^x270)&x271)-x272);

	if (t62 != 17614219854574812040LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = -1;
	volatile uint16_t x275 = UINT16_MAX;
	static volatile uint8_t x276 = UINT8_MAX;
	static volatile int32_t t63 = -7306645;

	t63 = (((x273^x274)&x275)-x276);

	if (t63 != -255) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = 4764881251265133812LLU;
	int8_t x278 = -1;
	int16_t x279 = -1;
	int16_t x280 = -103;
	uint64_t t64 = 0LLU;

	t64 = (((x277^x278)&x279)-x280);

	if (t64 != 13681862822444417906LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	volatile int64_t t65 = 1475516766668461LL;

	t65 = (((x285^x286)&x287)-x288);

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x289 = -1LL;
	int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MAX;
	uint16_t x292 = 103U;
	volatile int64_t t66 = 27LL;

	t66 = (((x289^x290)&x291)-x292);

	if (t66 != -103LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile uint32_t x296 = UINT32_MAX;
	uint32_t t67 = 214U;

	t67 = (((x293^x294)&x295)-x296);

	if (t67 != 219U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = UINT64_MAX;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = INT64_MAX;

	t68 = (((x297^x298)&x299)-x300);

	if (t68 != 9223372041149719827LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -123762;
	int64_t x303 = 0LL;
	int16_t x304 = 0;
	uint64_t t69 = 232LLU;

	t69 = (((x301^x302)&x303)-x304);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t t70 = 106;

	t70 = (((x305^x306)&x307)-x308);

	if (t70 != -250) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = -545775729387558267LL;
	static volatile uint16_t x311 = 0U;
	int64_t t71 = 550LL;

	t71 = (((x309^x310)&x311)-x312);

	if (t71 != -127LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = UINT32_MAX;
	static int8_t x314 = 5;
	static int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;

	t72 = (((x313^x314)&x315)-x316);

	if (t72 != 4294934651U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = 7U;
	uint8_t x318 = UINT8_MAX;
	int32_t x320 = INT32_MIN;

	t73 = (((x317^x318)&x319)-x320);

	if (t73 != 2147483800U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 3517LLU;
	int8_t x323 = INT8_MIN;

	t74 = (((x321^x322)&x323)-x324);

	if (t74 != 3456LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = 0U;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	static uint64_t x328 = UINT64_MAX;

	t75 = (((x325^x326)&x327)-x328);

	if (t75 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = -118273636LL;
	volatile uint16_t x330 = 101U;
	static int8_t x332 = 1;
	static int64_t t76 = 46LL;

	t76 = (((x329^x330)&x331)-x332);

	if (t76 != 255LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = -1;
	int16_t x335 = -1;
	int32_t t77 = -160715426;

	t77 = (((x333^x334)&x335)-x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x338 = 11403009U;
	static int64_t x339 = 59059688258163479LL;
	uint16_t x340 = UINT16_MAX;
	int64_t t78 = -1241LL;

	t78 = (((x337^x338)&x339)-x340);

	if (t78 != 59059688255193111LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x341 = 20;
	volatile int32_t x342 = -6140494;
	int8_t x343 = -1;
	int16_t x344 = -1;
	int32_t t79 = -1;

	t79 = (((x341^x342)&x343)-x344);

	if (t79 != -6140505) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x349 = 121206275U;
	volatile int32_t x351 = -1;
	volatile int32_t x352 = 4388;
	volatile uint32_t t80 = 71435U;

	t80 = (((x349^x350)&x351)-x352);

	if (t80 != 2026272984U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = 6;
	int8_t x354 = INT8_MIN;
	int32_t x355 = -24629;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t81 = 0LLU;

	t81 = (((x353^x354)&x355)-x356);

	if (t81 != 18446744073709526915LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x357 = INT32_MAX;
	uint16_t x358 = 30579U;
	int8_t x360 = INT8_MIN;

	t82 = (((x357^x358)&x359)-x360);

	if (t82 != 2316) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = 3238662LL;
	int16_t x363 = -14281;
	volatile int32_t x364 = INT32_MIN;
	uint64_t t83 = 182431435508715072LLU;

	t83 = (((x361^x362)&x363)-x364);

	if (t83 != 2144239665LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x365 = 10U;
	uint8_t x366 = UINT8_MAX;
	static int8_t x367 = -2;
	int32_t x368 = 11;
	static int32_t t84 = 6097211;

	t84 = (((x365^x366)&x367)-x368);

	if (t84 != 233) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = 47U;
	uint32_t x370 = 0U;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MIN;
	volatile uint32_t t85 = 96U;

	t85 = (((x369^x370)&x371)-x372);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = INT64_MAX;
	static int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	uint64_t t86 = 25715LLU;

	t86 = (((x373^x374)&x375)-x376);

	if (t86 != 9223372039002226688LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = 23;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int32_t t87 = -146;

	t87 = (((x377^x378)&x379)-x380);

	if (t87 != -33023) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x382 = UINT64_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = -2;
	uint64_t t88 = 10LLU;

	t88 = (((x381^x382)&x383)-x384);

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	static volatile int64_t x387 = INT64_MIN;
	int32_t x388 = -39220442;
	volatile int64_t t89 = 71987332291801675LL;

	t89 = (((x385^x386)&x387)-x388);

	if (t89 != 39220442LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x390 = -1LL;
	static uint64_t x391 = 8624873121172LLU;
	int16_t x392 = -1;
	uint64_t t90 = 47203630287625096LLU;

	t90 = (((x389^x390)&x391)-x392);

	if (t90 != 8624873121153LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x393 = -1LL;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	volatile int64_t t91 = 31LL;

	t91 = (((x393^x394)&x395)-x396);

	if (t91 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = -1LL;
	static uint32_t x399 = 1587494U;
	volatile uint64_t x400 = 6280752076803939440LLU;
	static volatile uint64_t t92 = 210567298580030LLU;

	t92 = (((x397^x398)&x399)-x400);

	if (t92 != 12165991996907199670LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MAX;
	volatile uint32_t x402 = UINT32_MAX;
	static int16_t x404 = INT16_MIN;
	volatile int64_t t93 = 1007140967LL;

	t93 = (((x401^x402)&x403)-x404);

	if (t93 != 32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x406 = -2084299681123728LL;
	int64_t x407 = 8735606054413LL;
	int64_t x408 = -238908094776LL;
	volatile int64_t t94 = -9024LL;

	t94 = (((x405^x406)&x407)-x408);

	if (t94 != 587482155832LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = 271;
	int8_t x411 = INT8_MAX;
	uint32_t x412 = 1775842U;
	volatile uint32_t t95 = 1419059U;

	t95 = (((x409^x410)&x411)-x412);

	if (t95 != 4293191566U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x414 = INT64_MIN;
	volatile uint64_t t96 = 232506745216046680LLU;

	t96 = (((x413^x414)&x415)-x416);

	if (t96 != 15639224052968216709LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = -1;
	int8_t x418 = INT8_MAX;
	volatile int32_t x419 = -1;
	static volatile int64_t t97 = 9808724LL;

	t97 = (((x417^x418)&x419)-x420);

	if (t97 != 470023LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = 414477U;
	volatile int8_t x422 = INT8_MIN;
	uint8_t x423 = 15U;

	t98 = (((x421^x422)&x423)-x424);

	if (t98 != 2147483661U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x426 = -1;
	static uint64_t x428 = 2512579963185LLU;
	volatile uint64_t t99 = 6LLU;

	t99 = (((x425^x426)&x427)-x428);

	if (t99 != 18446741561129588433LLU) { NG(); } else { ; }
	
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

