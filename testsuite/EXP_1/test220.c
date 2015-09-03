#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = INT32_MIN;
int16_t x25 = -4;
volatile int64_t x28 = INT64_MIN;
static int32_t t7 = -8922;
volatile uint32_t x33 = 40705U;
uint32_t t8 = 114113U;
volatile int32_t t11 = -612846702;
uint32_t x64 = 1504U;
int64_t x73 = INT64_MIN;
int16_t x79 = 1618;
static uint32_t x81 = 126U;
int8_t x83 = -1;
uint64_t t17 = 206346808LLU;
uint32_t x89 = UINT32_MAX;
volatile int64_t x96 = -7365LL;
uint32_t x103 = 36U;
int16_t x104 = 58;
volatile int64_t t22 = INT64_MIN;
int32_t x109 = 3459;
int8_t x110 = INT8_MIN;
volatile int64_t t25 = -45LL;
int64_t x126 = -1LL;
int64_t x128 = INT64_MAX;
static volatile int64_t x138 = -205413476176897LL;
int8_t x140 = -1;
volatile int64_t t31 = 10647695166LL;
static uint8_t x146 = 3U;
volatile uint64_t x150 = 61216715LLU;
int64_t x153 = -6467922LL;
static int8_t x155 = -1;
volatile int64_t t34 = -1881LL;
static uint32_t x158 = 2U;
uint16_t x163 = UINT16_MAX;
volatile int32_t t36 = 3;
uint32_t x165 = 234437U;
uint8_t x173 = UINT8_MAX;
uint8_t x174 = 0U;
volatile int32_t t39 = 833421414;
volatile int32_t x188 = -1;
uint64_t x200 = UINT64_MAX;
volatile uint8_t x203 = 3U;
int64_t t48 = 72438LL;
int8_t x214 = INT8_MAX;
volatile int8_t x222 = 0;
int32_t x223 = INT32_MIN;
static volatile int16_t x225 = INT16_MAX;
volatile uint64_t t51 = 1268208923465479864LLU;
uint32_t x232 = 60848U;
static uint32_t t54 = UINT32_MAX;
int16_t x245 = INT16_MIN;
static uint32_t x247 = 896439689U;
int64_t t56 = 4251497660683114LL;
int16_t x249 = INT16_MIN;
uint32_t x250 = 7036U;
int64_t x254 = INT64_MAX;
uint8_t x257 = 3U;
volatile uint16_t x278 = UINT16_MAX;
int8_t x294 = 0;
static int16_t x297 = INT16_MIN;
volatile uint64_t t70 = 8721LLU;
static uint64_t x331 = UINT64_MAX;
int64_t x339 = INT64_MIN;
uint64_t x341 = 409615LLU;
int32_t x343 = -25;
static int8_t x347 = INT8_MIN;
static int32_t x355 = 4209031;
volatile uint16_t x362 = 19185U;
int8_t x364 = INT8_MAX;
static uint64_t t82 = 16271524104LLU;
uint64_t x368 = 990919936262LLU;
volatile uint16_t x369 = UINT16_MAX;
volatile uint16_t x371 = 907U;
int64_t x379 = INT64_MIN;
int64_t x380 = INT64_MAX;
uint64_t t85 = 703LLU;
static volatile int32_t x383 = INT32_MIN;
volatile int32_t x384 = INT32_MAX;
volatile uint32_t t86 = 8027376U;
int64_t x400 = INT64_MAX;
static int32_t x407 = -7;
int32_t x408 = INT32_MIN;
int8_t x418 = INT8_MIN;
volatile int64_t t94 = 3558175LL;
static int32_t x428 = -92;
uint8_t x430 = 6U;
int16_t x432 = -964;
int16_t x436 = INT16_MAX;
uint64_t t99 = 18384LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MAX;
	static volatile int16_t x3 = -230;
	uint8_t x4 = 51U;
	volatile int32_t t0 = -146;

	t0 = (((x1-x2)/x3)|x4);

	if (t0 != -141) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 36U;
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = INT8_MIN;
	int8_t x8 = 14;
	volatile uint64_t t1 = 9442LLU;

	t1 = (((x5-x6)/x7)|x8);

	if (t1 != 14LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int8_t x10 = INT8_MAX;
	int16_t x11 = -1;
	int32_t x12 = INT32_MIN;

	t2 = (((x9-x10)/x11)|x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -45273LL;
	int8_t x14 = -61;
	int8_t x15 = INT8_MAX;
	static int32_t x16 = -1;
	static int64_t t3 = -183616069938LL;

	t3 = (((x13-x14)/x15)|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static volatile int8_t x18 = -1;
	uint32_t x19 = 199866131U;
	static int32_t x20 = INT32_MIN;
	volatile uint32_t t4 = 2U;

	t4 = (((x17-x18)/x19)|x20);

	if (t4 != 2147483658U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1157;
	volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MIN;
	int64_t x24 = 53571582730318222LL;
	volatile int64_t t5 = 4645606977LL;

	t5 = (((x21-x22)/x23)|x24);

	if (t5 != 53571582730318222LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x26 = -1LL;
	uint64_t x27 = UINT64_MAX;
	volatile uint64_t t6 = 2266767634794022672LLU;

	t6 = (((x25-x26)/x27)|x28);

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static int32_t x30 = -895856;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MIN;

	t7 = (((x29-x30)/x31)|x32);

	if (t7 != -6998) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x34 = -21425;
	int16_t x35 = INT16_MAX;
	volatile int16_t x36 = 6936;

	t8 = (((x33-x34)/x35)|x36);

	if (t8 != 6937U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	static int32_t x40 = INT32_MAX;
	static int32_t t9 = INT32_MAX;

	t9 = (((x37-x38)/x39)|x40);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -29;
	int64_t x42 = -1LL;
	uint64_t x43 = 21394341403LLU;
	int8_t x44 = -1;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (((x41-x42)/x43)|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	int32_t x55 = 46657;
	int16_t x56 = INT16_MAX;

	t11 = (((x53-x54)/x55)|x56);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = 19727348704LL;
	int16_t x62 = -1;
	int8_t x63 = -1;
	volatile int64_t t12 = 42LL;

	t12 = (((x61-x62)/x63)|x64);

	if (t12 != -19727348225LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x66 = -9;
	int64_t x67 = INT64_MAX;
	int64_t x68 = -7179806LL;
	volatile int64_t t13 = 29483502011600LL;

	t13 = (((x65-x66)/x67)|x68);

	if (t13 != -7179806LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	int32_t x70 = 147;
	int64_t x71 = -1LL;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = (((x69-x70)/x71)|x72);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = INT32_MIN;
	uint8_t x75 = 14U;
	int32_t x76 = INT32_MIN;
	volatile int64_t t15 = -1069541382LL;

	t15 = (((x73-x74)/x75)|x76);

	if (t15 != -460175067LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	volatile int32_t x78 = INT32_MIN;
	static int16_t x80 = INT16_MIN;
	uint32_t t16 = 3778811U;

	t16 = (((x77-x78)/x79)|x80);

	if (t16 != 4294951053U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x82 = 2;
	uint64_t x84 = 0LLU;

	t17 = (((x81-x82)/x83)|x84);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	int8_t x86 = INT8_MIN;
	static int32_t x87 = INT32_MIN;
	volatile uint8_t x88 = UINT8_MAX;
	static volatile int32_t t18 = 16641585;

	t18 = (((x85-x86)/x87)|x88);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x90 = 28025U;
	int16_t x91 = INT16_MAX;
	uint8_t x92 = UINT8_MAX;
	uint32_t t19 = 219U;

	t19 = (((x89-x90)/x91)|x92);

	if (t19 != 131327U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -3450;
	static int16_t x94 = -10388;
	static int16_t x95 = -1;
	volatile int64_t t20 = 188078942890793922LL;

	t20 = (((x93-x94)/x95)|x96);

	if (t20 != -6145LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MIN;
	uint32_t t21 = 33802U;

	t21 = (((x101-x102)/x103)|x104);

	if (t21 != 59652346U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;

	t22 = (((x105-x106)/x107)|x108);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x111 = -1;
	static int64_t x112 = INT64_MIN;
	int64_t t23 = 433421490LL;

	t23 = (((x109-x110)/x111)|x112);

	if (t23 != -3587LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = 421;
	static int32_t x114 = -29648;
	int64_t x115 = 49363254770LL;
	uint16_t x116 = 4U;
	volatile int64_t t24 = 86952903214LL;

	t24 = (((x113-x114)/x115)|x116);

	if (t24 != 4LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MAX;
	static int32_t x119 = 131236542;
	volatile int8_t x120 = INT8_MIN;

	t25 = (((x117-x118)/x119)|x120);

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	static int16_t x122 = 6003;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	static volatile int64_t t26 = -13LL;

	t26 = (((x121-x122)/x123)|x124);

	if (t26 != -2147483602LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 227177388U;
	int8_t x127 = INT8_MAX;
	static volatile int64_t t27 = INT64_MAX;

	t27 = (((x125-x126)/x127)|x128);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = -27;
	volatile uint8_t x131 = 6U;
	int32_t x132 = -6201;
	int32_t t28 = -225;

	t28 = (((x129-x130)/x131)|x132);

	if (t28 != -4105) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	static uint16_t x136 = 3U;
	int32_t t29 = 106;

	t29 = (((x133-x134)/x135)|x136);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -37;
	int32_t x139 = 19927;
	int64_t t30 = 0LL;

	t30 = (((x137-x138)/x139)|x140);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = -1710208213216720LL;
	int16_t x142 = INT16_MIN;
	int32_t x143 = -1868;
	volatile uint16_t x144 = UINT16_MAX;

	t31 = (((x141-x142)/x143)|x144);

	if (t31 != 915529072639LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x145 = 3U;
	static int8_t x147 = INT8_MIN;
	uint8_t x148 = 20U;
	static int32_t t32 = -94;

	t32 = (((x145-x146)/x147)|x148);

	if (t32 != 20) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 1558651LLU;
	static volatile uint64_t t33 = 21766451910LLU;

	t33 = (((x149-x150)/x151)|x152);

	if (t33 != 1558651LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = -3;
	static uint8_t x156 = 7U;

	t34 = (((x153-x154)/x155)|x156);

	if (t34 != 6467919LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = INT8_MAX;
	static int8_t x159 = INT8_MAX;
	static uint16_t x160 = 614U;
	uint32_t t35 = 13552U;

	t35 = (((x157-x158)/x159)|x160);

	if (t35 != 614U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -1;
	int8_t x164 = 53;

	t36 = (((x161-x162)/x163)|x164);

	if (t36 != 53) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (((x165-x166)/x167)|x168);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = UINT8_MAX;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = UINT64_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile uint64_t t38 = 4152067LLU;

	t38 = (((x169-x170)/x171)|x172);

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x175 = -1;
	static uint16_t x176 = UINT16_MAX;

	t39 = (((x173-x174)/x175)|x176);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 12U;
	volatile uint8_t x179 = 2U;
	int16_t x180 = 11;
	volatile int32_t t40 = 3317410;

	t40 = (((x177-x178)/x179)|x180);

	if (t40 != -16389) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = 1U;
	uint32_t x184 = UINT32_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = (((x181-x182)/x183)|x184);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = INT32_MIN;
	static volatile int8_t x187 = 2;
	uint32_t t42 = UINT32_MAX;

	t42 = (((x185-x186)/x187)|x188);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = 98530978;
	int16_t x192 = -39;
	volatile int32_t t43 = -117469;

	t43 = (((x189-x190)/x191)|x192);

	if (t43 != -5) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 5U;
	int64_t x194 = 2722678058944651212LL;
	volatile int64_t x195 = INT64_MAX;
	volatile uint64_t x196 = 1542189156LLU;
	volatile uint64_t t44 = 177LLU;

	t44 = (((x193-x194)/x195)|x196);

	if (t44 != 1542189156LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = UINT64_MAX;
	static volatile int8_t x198 = INT8_MAX;
	uint16_t x199 = 76U;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x197-x198)/x199)|x200);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x201 = UINT64_MAX;
	volatile int32_t x202 = INT32_MAX;
	uint32_t x204 = 30U;
	volatile uint64_t t46 = 19766914538097286LLU;

	t46 = (((x201-x202)/x203)|x204);

	if (t46 != 6148914690520689342LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	int16_t x206 = -1;
	int64_t x207 = INT64_MAX;
	int32_t x208 = 3;
	int64_t t47 = -5720LL;

	t47 = (((x205-x206)/x207)|x208);

	if (t47 != 3LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int16_t x212 = INT16_MAX;

	t48 = (((x209-x210)/x211)|x212);

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (((x213-x214)/x215)|x216);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	int32_t x224 = -1;
	volatile int32_t t50 = 14;

	t50 = (((x221-x222)/x223)|x224);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x226 = 2;
	uint32_t x227 = 95153U;
	uint64_t x228 = 273041705403LLU;

	t51 = (((x225-x226)/x227)|x228);

	if (t51 != 273041705403LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = 918U;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = UINT32_MAX;
	uint64_t t52 = 48202298393369210LLU;

	t52 = (((x229-x230)/x231)|x232);

	if (t52 != 60848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x233 = UINT16_MAX;
	int32_t x234 = 10;
	uint8_t x235 = 13U;
	static int8_t x236 = -1;
	volatile int32_t t53 = 22620;

	t53 = (((x233-x234)/x235)|x236);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x237 = 1536U;
	int16_t x238 = INT16_MAX;
	uint32_t x239 = UINT32_MAX;
	uint32_t x240 = UINT32_MAX;

	t54 = (((x237-x238)/x239)|x240);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = -68018407654749794LL;
	volatile int32_t x242 = -1;
	uint8_t x243 = 32U;
	int64_t x244 = INT64_MIN;
	static int64_t t55 = 10185098LL;

	t55 = (((x241-x242)/x243)|x244);

	if (t55 != -2125575239210931LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x246 = INT64_MIN;
	static int8_t x248 = INT8_MIN;

	t56 = (((x245-x246)/x247)|x248);

	if (t56 != -61LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x251 = INT16_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t57 = -11258994432488658LL;

	t57 = (((x249-x250)/x251)|x252);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MAX;
	volatile uint32_t x255 = 11390U;
	static volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x253-x254)/x255)|x256);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -4111079940254539061LL;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t59 = 937952692LLU;

	t59 = (((x257-x258)/x259)|x260);

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x261 = UINT8_MAX;
	int16_t x262 = -1;
	uint64_t x263 = 11137139120613LLU;
	int32_t x264 = 223;
	volatile uint64_t t60 = 0LLU;

	t60 = (((x261-x262)/x263)|x264);

	if (t60 != 223LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MAX;
	volatile int64_t x266 = INT64_MAX;
	static uint16_t x267 = UINT16_MAX;
	uint16_t x268 = 1U;
	int64_t t61 = -48534140027LL;

	t61 = (((x265-x266)/x267)|x268);

	if (t61 != -140739635871743LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = 120117958892546108LL;
	uint8_t x270 = 1U;
	volatile int16_t x271 = INT16_MIN;
	static int32_t x272 = INT32_MIN;
	static volatile int64_t t62 = -33LL;

	t62 = (((x269-x270)/x271)|x272);

	if (t62 != -2102091230LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = 0U;
	int16_t x274 = -1;
	uint8_t x275 = 54U;
	static int32_t x276 = -1;
	volatile int32_t t63 = -31;

	t63 = (((x273-x274)/x275)|x276);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = -17;
	int16_t x279 = INT16_MAX;
	volatile int8_t x280 = -55;
	int32_t t64 = -6845;

	t64 = (((x277-x278)/x279)|x280);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = -1;
	volatile uint32_t x283 = 234370725U;
	int16_t x284 = -1;
	uint32_t t65 = UINT32_MAX;

	t65 = (((x281-x282)/x283)|x284);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	volatile int8_t x286 = 0;
	int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MIN;
	int64_t t66 = 154660LL;

	t66 = (((x285-x286)/x287)|x288);

	if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 6809LLU;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = 49U;
	int16_t x292 = 182;
	uint64_t t67 = 216779254454LLU;

	t67 = (((x289-x290)/x291)|x292);

	if (t67 != 188232082384791487LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x293 = 3096241LLU;
	static int32_t x295 = -2;
	volatile uint64_t x296 = 15423926562LLU;
	volatile uint64_t t68 = 485LLU;

	t68 = (((x293-x294)/x295)|x296);

	if (t68 != 15423926562LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x298 = 0;
	int32_t x299 = -11;
	int64_t x300 = INT64_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = (((x297-x298)/x299)|x300);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x302 = 13295390780683443LLU;
	static int16_t x303 = INT16_MIN;
	int64_t x304 = -460897476LL;

	t70 = (((x301-x302)/x303)|x304);

	if (t70 != 18446744073248654140LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = -1;
	int64_t x310 = 239LL;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = 24950U;
	volatile int64_t t71 = 83551692548039LL;

	t71 = (((x309-x310)/x311)|x312);

	if (t71 != 24950LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = -1LL;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 12U;
	static int64_t t72 = 200924128LL;

	t72 = (((x313-x314)/x315)|x316);

	if (t72 != 524LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x321 = 0;
	int16_t x322 = INT16_MAX;
	static uint16_t x323 = 3U;
	uint32_t x324 = 2759U;
	uint32_t t73 = 3814U;

	t73 = (((x321-x322)/x323)|x324);

	if (t73 != 4294959063U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	static uint64_t x328 = 186LLU;
	volatile uint64_t t74 = 389LLU;

	t74 = (((x325-x326)/x327)|x328);

	if (t74 != 187LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x329 = 406LL;
	volatile int8_t x330 = -1;
	volatile uint64_t x332 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

	t75 = (((x329-x330)/x331)|x332);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = -1;
	static uint64_t x334 = 5904388LLU;
	int16_t x335 = -1;
	int8_t x336 = -1;
	uint64_t t76 = UINT64_MAX;

	t76 = (((x333-x334)/x335)|x336);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	volatile int16_t x338 = -1;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x337-x338)/x339)|x340);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x342 = INT8_MIN;
	int16_t x344 = -5714;
	volatile uint64_t t78 = 3861691265081843304LLU;

	t78 = (((x341-x342)/x343)|x344);

	if (t78 != 18446744073709545902LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x345 = INT16_MIN;
	uint16_t x346 = UINT16_MAX;
	static uint64_t x348 = UINT64_MAX;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x345-x346)/x347)|x348);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = 101627094073LLU;
	int16_t x350 = INT16_MAX;
	int8_t x351 = -6;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t80 = 2LLU;

	t80 = (((x349-x350)/x351)|x352);

	if (t80 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = 6U;
	uint64_t x354 = 82827703LLU;
	int64_t x356 = INT64_MAX;
	uint64_t t81 = 164712LLU;

	t81 = (((x353-x354)/x355)|x356);

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MIN;
	static uint64_t x363 = 951382701LLU;

	t82 = (((x361-x362)/x363)|x364);

	if (t82 != 19389404671LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	static uint64_t t83 = 32446139693LLU;

	t83 = (((x365-x366)/x367)|x368);

	if (t83 != 990919936262LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x370 = -1;
	static volatile int16_t x372 = INT16_MIN;
	int32_t t84 = -7;

	t84 = (((x369-x370)/x371)|x372);

	if (t84 != -32696) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x377 = 2099513501343757301LLU;
	volatile int8_t x378 = INT8_MIN;

	t85 = (((x377-x378)/x379)|x380);

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = -1;
	uint32_t x382 = UINT32_MAX;

	t86 = (((x381-x382)/x383)|x384);

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	volatile uint32_t x391 = 3841897U;
	volatile int8_t x392 = INT8_MIN;
	static volatile uint32_t t87 = 238763U;

	t87 = (((x389-x390)/x391)|x392);

	if (t87 != 4294967214U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x393 = UINT32_MAX;
	int64_t x394 = 23LL;
	volatile int8_t x395 = -1;
	uint8_t x396 = 1U;
	volatile int64_t t88 = -105936239418143LL;

	t88 = (((x393-x394)/x395)|x396);

	if (t88 != -4294967271LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x397 = 4;
	int8_t x398 = 0;
	int16_t x399 = INT16_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = (((x397-x398)/x399)|x400);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x401 = 25U;
	int64_t x402 = -7LL;
	int64_t x403 = -1LL;
	uint16_t x404 = UINT16_MAX;
	int64_t t90 = -46LL;

	t90 = (((x401-x402)/x403)|x404);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x405 = -1;
	int8_t x406 = INT8_MAX;
	volatile int32_t t91 = 59;

	t91 = (((x405-x406)/x407)|x408);

	if (t91 != -2147483630) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -7;
	uint16_t x410 = 67U;
	static int64_t x411 = INT64_MIN;
	static int64_t x412 = -1LL;
	static int64_t t92 = 642575LL;

	t92 = (((x409-x410)/x411)|x412);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 4;
	static volatile int64_t x414 = -5LL;
	static uint8_t x415 = UINT8_MAX;
	int16_t x416 = INT16_MIN;
	int64_t t93 = -28388977LL;

	t93 = (((x413-x414)/x415)|x416);

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = 4LL;
	int16_t x419 = INT16_MIN;
	static volatile int8_t x420 = INT8_MAX;

	t94 = (((x417-x418)/x419)|x420);

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	uint64_t x423 = 254783099692LLU;
	int8_t x424 = -1;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x421-x422)/x423)|x424);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = 5735002;
	static int8_t x426 = INT8_MIN;
	uint16_t x427 = 603U;
	volatile int32_t t96 = -1;

	t96 = (((x425-x426)/x427)|x428);

	if (t96 != -90) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = 66U;
	int32_t x431 = -1;
	volatile int32_t t97 = 2916;

	t97 = (((x429-x430)/x431)|x432);

	if (t97 != -4) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x433 = 4039U;
	volatile int64_t x434 = -1LL;
	volatile int16_t x435 = INT16_MIN;
	volatile int64_t t98 = -274LL;

	t98 = (((x433-x434)/x435)|x436);

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x437 = 30677LLU;
	volatile uint64_t x438 = UINT64_MAX;
	int16_t x439 = INT16_MIN;
	static int8_t x440 = -26;

	t99 = (((x437-x438)/x439)|x440);

	if (t99 != 18446744073709551590LLU) { NG(); } else { ; }
	
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

