#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = 1;
uint16_t x17 = 1031U;
volatile int64_t x20 = -3LL;
volatile int64_t t4 = 31921LL;
static int32_t x22 = -28758;
uint32_t t6 = 26U;
volatile int16_t x33 = INT16_MIN;
int16_t x37 = -886;
static int8_t x39 = -38;
int32_t x40 = -4;
uint16_t x44 = 3458U;
uint16_t x49 = 975U;
volatile uint64_t t11 = 5440585800LLU;
int64_t t13 = 39693LL;
int8_t x61 = -6;
static volatile uint64_t x63 = UINT64_MAX;
volatile int16_t x64 = -1;
volatile uint8_t x65 = UINT8_MAX;
volatile int64_t t15 = -911933471012LL;
static int32_t x71 = INT32_MIN;
uint32_t x79 = 18217U;
static int32_t x81 = INT32_MAX;
volatile int64_t x82 = 719375753322822943LL;
int32_t x85 = INT32_MIN;
uint64_t x87 = 20230434557LLU;
static volatile uint64_t t22 = 31196LLU;
uint64_t x103 = 333405LLU;
int16_t x106 = INT16_MAX;
volatile int64_t t24 = -18791339174508983LL;
static volatile uint8_t x109 = 0U;
volatile int16_t x115 = 5493;
int32_t x121 = INT32_MAX;
uint64_t x122 = 10379324454LLU;
uint8_t x127 = UINT8_MAX;
volatile int32_t x128 = INT32_MAX;
uint8_t x130 = 2U;
uint16_t x145 = 28U;
volatile int64_t x147 = -1LL;
int8_t x152 = INT8_MAX;
int32_t x157 = INT32_MIN;
static uint32_t x169 = 61325407U;
volatile int8_t x179 = INT8_MIN;
int8_t x190 = INT8_MIN;
int64_t x191 = INT64_MAX;
int64_t t44 = 40715975522LL;
uint64_t x196 = UINT64_MAX;
int8_t x198 = -1;
int8_t x199 = 1;
uint32_t x209 = 8U;
volatile int64_t t50 = 115LL;
int8_t x217 = INT8_MIN;
static int32_t t51 = 1;
int32_t x221 = -1;
static volatile int64_t x223 = -1LL;
int16_t x228 = -1;
uint32_t x230 = 1337331826U;
volatile int64_t t55 = -400129646LL;
static uint16_t x251 = 8U;
int16_t x256 = INT16_MIN;
int64_t x263 = -1LL;
volatile int64_t t62 = 900LL;
int32_t x274 = 85882457;
uint32_t x276 = 20581U;
uint32_t t64 = 133359992U;
uint32_t x278 = 10575U;
uint64_t x280 = 363215977719LLU;
volatile uint64_t t67 = 127LLU;
static uint64_t x294 = UINT64_MAX;
int8_t x298 = INT8_MAX;
int16_t x299 = -1;
uint8_t x303 = 0U;
int16_t x305 = INT16_MIN;
static int64_t t73 = -55222834LL;
volatile int8_t x314 = INT8_MIN;
uint16_t x315 = UINT16_MAX;
int64_t x322 = -368984037326318LL;
static int8_t x323 = -1;
uint32_t x324 = UINT32_MAX;
volatile int64_t t81 = -2498LL;
uint64_t x350 = UINT64_MAX;
volatile int64_t t84 = 794587127268063280LL;
uint16_t x374 = 1U;
uint8_t x377 = 0U;
uint64_t x380 = 293LLU;
int16_t x385 = INT16_MIN;
static int32_t x389 = -1;
uint32_t x399 = 14339U;
int16_t x405 = INT16_MAX;
volatile uint64_t x410 = 2732284LLU;
int8_t x414 = INT8_MAX;
volatile uint64_t t97 = 865575554390LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static volatile uint8_t x2 = 40U;
	static volatile int64_t x3 = -1673188944205LL;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 52LL;

	t0 = (x1/(x2|(x3/x4)));

	if (t0 != 819LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -1108;
	static int32_t t1 = 3775;

	t1 = (x5/(x6|(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int32_t x10 = INT32_MIN;
	volatile uint64_t x11 = 764048804429673LLU;
	int16_t x12 = -102;
	volatile uint64_t t2 = 120909461776625525LLU;

	t2 = (x9/(x10|(x11/x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x15 = INT32_MIN;
	volatile uint64_t x16 = 254122706764094LLU;
	uint64_t t3 = 109927228766LLU;

	t3 = (x13/(x14|(x15/x16)));

	if (t3 != 254125887857795LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = -11750;
	volatile int16_t x19 = -88;

	t4 = (x17/(x18|(x19/x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 13U;
	static uint16_t x23 = 5714U;
	uint16_t x24 = UINT16_MAX;
	uint32_t t5 = 1155210U;

	t5 = (x21/(x22|(x23/x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int16_t x30 = -1;
	int8_t x31 = 63;
	int32_t x32 = INT32_MIN;

	t6 = (x29/(x30|(x31/x32)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 5LLU;
	static int8_t x35 = -1;
	uint32_t x36 = 109724U;
	volatile uint64_t t7 = 320040739581761LLU;

	t7 = (x33/(x34|(x35/x36)));

	if (t7 != 471265464417891LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 991U;
	volatile int32_t t8 = -1;

	t8 = (x37/(x38|(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 27787U;
	static volatile int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MIN;
	volatile int32_t t9 = 4309719;

	t9 = (x41/(x42|(x43/x44)));

	if (t9 != -27787) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = 40210304LL;
	volatile int8_t x46 = 0;
	volatile int64_t x47 = INT64_MAX;
	volatile int64_t x48 = -1LL;
	volatile int64_t t10 = -564280489850LL;

	t10 = (x45/(x46|(x47/x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = 22688;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MIN;

	t11 = (x49/(x50|(x51/x52)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	uint32_t x54 = 15086191U;
	int8_t x55 = -1;
	static volatile int64_t x56 = -1LL;
	volatile int64_t t12 = -171711023549728228LL;

	t12 = (x53/(x54|(x55/x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -10464;
	int64_t x60 = 63934LL;

	t13 = (x57/(x58|(x59/x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x62 = INT8_MIN;
	volatile uint64_t t14 = 461890194826LLU;

	t14 = (x61/(x62|(x63/x64)));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x66 = -299;
	static volatile int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MIN;

	t15 = (x65/(x66|(x67/x68)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 2U;
	int8_t x70 = -6;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 102479;

	t16 = (x69/(x70|(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x77 = UINT16_MAX;
	int8_t x78 = INT8_MAX;
	int32_t x80 = INT32_MAX;
	volatile uint32_t t17 = 569941U;

	t17 = (x77/(x78|(x79/x80)));

	if (t17 != 516U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x83 = 126312U;
	volatile int8_t x84 = INT8_MIN;
	int64_t t18 = 3045934LL;

	t18 = (x81/(x82|(x83/x84)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = INT64_MIN;
	int32_t x88 = -1;
	static uint64_t t19 = 469399086LLU;

	t19 = (x85/(x86|(x87/x88)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -33;
	volatile int64_t x90 = -91819733158LL;
	volatile uint64_t x91 = UINT64_MAX;
	int8_t x92 = INT8_MIN;
	uint64_t t20 = 75399740619893LLU;

	t20 = (x89/(x90|(x91/x92)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 4435455LLU;
	volatile int8_t x94 = INT8_MAX;
	int8_t x95 = -8;
	volatile int64_t x96 = INT64_MIN;
	volatile uint64_t t21 = 1165620LLU;

	t21 = (x93/(x94|(x95/x96)));

	if (t21 != 34924LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -13;
	uint64_t x98 = 2114671045973498LLU;
	int16_t x99 = INT16_MIN;
	volatile uint8_t x100 = UINT8_MAX;

	t22 = (x97/(x98|(x99/x100)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	uint64_t x102 = 75218112875833080LLU;
	int32_t x104 = INT32_MIN;
	volatile uint64_t t23 = 100521611058048128LLU;

	t23 = (x101/(x102|(x103/x104)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int64_t x107 = -29455LL;
	int64_t x108 = INT64_MAX;

	t24 = (x105/(x106|(x107/x108)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MIN;
	int16_t x111 = 433;
	static uint32_t x112 = 13704U;
	volatile int64_t t25 = -188529536762184067LL;

	t25 = (x109/(x110|(x111/x112)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 20460987;
	uint8_t x114 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t26 = -6;

	t26 = (x113/(x114|(x115/x116)));

	if (t26 != 80239) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 59834918092LLU;
	volatile int16_t x118 = -1;
	volatile uint64_t x119 = UINT64_MAX;
	static uint8_t x120 = 1U;
	uint64_t t27 = 1115277LLU;

	t27 = (x117/(x118|(x119/x120)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x123 = UINT64_MAX;
	int64_t x124 = 4LL;
	uint64_t t28 = 7633670979379LLU;

	t28 = (x121/(x122|(x123/x124)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x125 = INT16_MAX;
	static volatile uint64_t x126 = 15LLU;
	volatile uint64_t t29 = 3725034259LLU;

	t29 = (x125/(x126|(x127/x128)));

	if (t29 != 2184LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t30 = 272729083;

	t30 = (x129/(x130|(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x134 = -1;
	uint32_t x135 = 2217U;
	static int8_t x136 = INT8_MIN;
	uint32_t t31 = 48221676U;

	t31 = (x133/(x134|(x135/x136)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MAX;
	int64_t x138 = INT64_MIN;
	uint8_t x139 = 56U;
	int16_t x140 = INT16_MIN;
	static volatile int64_t t32 = 866LL;

	t32 = (x137/(x138|(x139/x140)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	volatile int8_t x142 = -9;
	int32_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	uint64_t t33 = 570264529897397777LLU;

	t33 = (x141/(x142|(x143/x144)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = -1;
	volatile uint32_t x148 = 714710789U;
	int64_t t34 = 19047091LL;

	t34 = (x145/(x146|(x147/x148)));

	if (t34 != -28LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MIN;
	static int16_t x150 = 1176;
	int32_t x151 = -1118165;
	int32_t t35 = 775;

	t35 = (x149/(x150|(x151/x152)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 16002051LLU;
	int16_t x154 = INT16_MIN;
	static int16_t x155 = -58;
	int32_t x156 = -638404;
	volatile uint64_t t36 = 255LLU;

	t36 = (x153/(x154|(x155/x156)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x158 = 715;
	static int8_t x159 = 2;
	volatile int16_t x160 = -90;
	volatile int32_t t37 = 2;

	t37 = (x157/(x158|(x159/x160)));

	if (t37 != -3003473) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 25U;
	volatile int16_t x162 = 1187;
	int8_t x163 = INT8_MIN;
	uint16_t x164 = 138U;
	uint32_t t38 = 2888108U;

	t38 = (x161/(x162|(x163/x164)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 2U;
	int8_t x166 = INT8_MIN;
	static uint32_t x167 = 161822917U;
	volatile uint32_t x168 = 56541009U;
	volatile uint32_t t39 = 251843836U;

	t39 = (x165/(x166|(x167/x168)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x170 = INT8_MIN;
	static int64_t x171 = -1LL;
	uint8_t x172 = 17U;
	static volatile int64_t t40 = 182826443LL;

	t40 = (x169/(x170|(x171/x172)));

	if (t40 != -479104LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	volatile int32_t x178 = INT32_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t41 = -1061;

	t41 = (x177/(x178|(x179/x180)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = -1;
	int32_t x183 = -1;
	int8_t x184 = -1;
	volatile int32_t t42 = 3774;

	t42 = (x181/(x182|(x183/x184)));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = 11797;
	int32_t x186 = 1;
	int16_t x187 = -4;
	int64_t x188 = INT64_MIN;
	static int64_t t43 = 25914804450529LL;

	t43 = (x185/(x186|(x187/x188)));

	if (t43 != 11797LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = -6255569;
	volatile int16_t x192 = INT16_MAX;

	t44 = (x189/(x190|(x191/x192)));

	if (t44 != 52129LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x193 = 408903815U;
	uint64_t x194 = 431255269076095LLU;
	volatile int8_t x195 = INT8_MAX;
	uint64_t t45 = 76777438353LLU;

	t45 = (x193/(x194|(x195/x196)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -7112195191084380LL;
	volatile int16_t x200 = 1130;
	volatile int64_t t46 = 601939728LL;

	t46 = (x197/(x198|(x199/x200)));

	if (t46 != 7112195191084380LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 6U;
	volatile uint16_t x202 = 3U;
	uint8_t x203 = 46U;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t47 = -2705;

	t47 = (x201/(x202|(x203/x204)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = 894699435;
	static int8_t x207 = INT8_MAX;
	static int8_t x208 = -1;
	volatile int32_t t48 = -172315;

	t48 = (x205/(x206|(x207/x208)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x210 = 34;
	volatile int8_t x211 = 52;
	int64_t x212 = 69602606043002LL;
	int64_t t49 = -1128918958142218LL;

	t49 = (x209/(x210|(x211/x212)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = -25296LL;
	volatile int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	volatile uint16_t x216 = 19766U;

	t50 = (x213/(x214|(x215/x216)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = UINT8_MAX;
	uint16_t x220 = 3897U;

	t51 = (x217/(x218|(x219/x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x222 = INT8_MIN;
	static uint32_t x224 = 1046388859U;
	volatile int64_t t52 = 483479604137LL;

	t52 = (x221/(x222|(x223/x224)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 42U;
	int8_t x226 = -18;
	int16_t x227 = INT16_MAX;
	volatile int32_t t53 = 6;

	t53 = (x225/(x226|(x227/x228)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = INT32_MIN;
	volatile uint64_t t54 = 3587LLU;

	t54 = (x229/(x230|(x231/x232)));

	if (t54 != 13793692561LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 7U;
	volatile uint8_t x234 = UINT8_MAX;
	static volatile int64_t x235 = INT64_MIN;
	static uint32_t x236 = 1669251U;

	t55 = (x233/(x234|(x235/x236)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = INT8_MAX;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MIN;
	static int32_t x244 = INT32_MIN;
	volatile int32_t t56 = 0;

	t56 = (x241/(x242|(x243/x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 6U;
	static int16_t x248 = INT16_MAX;
	uint32_t t57 = 612U;

	t57 = (x245/(x246|(x247/x248)));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint32_t x250 = 63390U;
	uint64_t x252 = 108LLU;
	static volatile uint64_t t58 = 1408325LLU;

	t58 = (x249/(x250|(x251/x252)));

	if (t58 != 291004008103952LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = INT8_MIN;
	int8_t x254 = 3;
	int32_t x255 = INT32_MIN;
	static volatile int32_t t59 = -66480;

	t59 = (x253/(x254|(x255/x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x257 = 77114753502454876LL;
	volatile uint16_t x258 = 441U;
	static int64_t x259 = INT64_MIN;
	int16_t x260 = 23;
	int64_t t60 = -102323732750950752LL;

	t60 = (x257/(x258|(x259/x260)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x261 = 21U;
	int8_t x262 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	volatile int64_t t61 = -16271838769869LL;

	t61 = (x261/(x262|(x263/x264)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 1943U;
	static int64_t x266 = INT64_MAX;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = 1;

	t62 = (x265/(x266|(x267/x268)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x269 = INT16_MAX;
	int32_t x270 = -1;
	int64_t x271 = -1LL;
	int64_t x272 = -1LL;
	volatile int64_t t63 = 6343LL;

	t63 = (x269/(x270|(x271/x272)));

	if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x273 = UINT8_MAX;
	static int16_t x275 = INT16_MIN;

	t64 = (x273/(x274|(x275/x276)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = 1622;
	uint16_t x279 = UINT16_MAX;
	volatile uint64_t t65 = 45639LLU;

	t65 = (x277/(x278|(x279/x280)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 90932155U;
	static int32_t x282 = -1;
	static int8_t x283 = 2;
	int64_t x284 = -1LL;
	volatile int64_t t66 = -3883837LL;

	t66 = (x281/(x282|(x283/x284)));

	if (t66 != -90932155LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = INT8_MAX;
	static volatile uint16_t x286 = 7216U;
	volatile uint64_t x287 = 121589327469142522LLU;
	volatile uint32_t x288 = 526845U;

	t67 = (x285/(x286|(x287/x288)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	volatile int8_t x290 = -1;
	volatile int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MAX;
	int64_t t68 = 43992934461359511LL;

	t68 = (x289/(x290|(x291/x292)));

	if (t68 != -32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 4087;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	uint64_t t69 = 10549420LLU;

	t69 = (x293/(x294|(x295/x296)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = -79871578972493LL;
	int8_t x300 = INT8_MIN;
	volatile int64_t t70 = -768415857346842LL;

	t70 = (x297/(x298|(x299/x300)));

	if (t70 != -628910070649LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 465LLU;
	volatile int8_t x302 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint64_t t71 = 5144067LLU;

	t71 = (x301/(x302|(x303/x304)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MAX;
	int32_t x308 = 237437;
	int32_t t72 = 7272733;

	t72 = (x305/(x306|(x307/x308)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 345583166U;
	int8_t x312 = -7;

	t73 = (x309/(x310|(x311/x312)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = 24;
	static uint32_t x316 = UINT32_MAX;
	volatile uint32_t t74 = 29U;

	t74 = (x313/(x314|(x315/x316)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x317 = UINT16_MAX;
	volatile int32_t x318 = 12647;
	int8_t x319 = -1;
	volatile uint16_t x320 = UINT16_MAX;
	int32_t t75 = -89606;

	t75 = (x317/(x318|(x319/x320)));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 1U;
	int64_t t76 = -2023175817855555206LL;

	t76 = (x321/(x322|(x323/x324)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x325 = INT64_MIN;
	static uint32_t x326 = 13610169U;
	static uint8_t x327 = 49U;
	int32_t x328 = INT32_MIN;
	volatile int64_t t77 = -644LL;

	t77 = (x325/(x326|(x327/x328)));

	if (t77 != -677682403271LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 15140U;
	uint16_t x330 = 57U;
	int64_t x331 = -1LL;
	static int16_t x332 = INT16_MAX;
	volatile int64_t t78 = 86875852353194055LL;

	t78 = (x329/(x330|(x331/x332)));

	if (t78 != 265LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = 1927;
	volatile uint8_t x334 = 4U;
	uint8_t x335 = 118U;
	volatile uint16_t x336 = 7079U;
	static volatile int32_t t79 = 215540691;

	t79 = (x333/(x334|(x335/x336)));

	if (t79 != 481) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -1;
	uint16_t x338 = UINT16_MAX;
	static volatile uint64_t x339 = 44500002LLU;
	int8_t x340 = -4;
	uint64_t t80 = 58492LLU;

	t80 = (x337/(x338|(x339/x340)));

	if (t80 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = 124262U;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MAX;
	volatile int64_t x344 = INT64_MIN;

	t81 = (x341/(x342|(x343/x344)));

	if (t81 != -3LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	static volatile uint16_t x351 = 32250U;
	int64_t x352 = INT64_MAX;
	uint64_t t82 = 604513806LLU;

	t82 = (x349/(x350|(x351/x352)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = UINT16_MAX;
	static volatile int32_t x354 = 168329;
	uint8_t x355 = 1U;
	uint8_t x356 = 1U;
	volatile int32_t t83 = -9327;

	t83 = (x353/(x354|(x355/x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x357 = UINT32_MAX;
	int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MIN;

	t84 = (x357/(x358|(x359/x360)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x361 = INT32_MIN;
	uint16_t x362 = 212U;
	volatile int64_t x363 = -1LL;
	uint8_t x364 = 20U;
	volatile int64_t t85 = 0LL;

	t85 = (x361/(x362|(x363/x364)));

	if (t85 != -10129639LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x365 = -9103;
	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = 29;
	int64_t x368 = INT64_MIN;
	volatile int64_t t86 = 66LL;

	t86 = (x365/(x366|(x367/x368)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x369 = -346;
	int16_t x370 = -11617;
	static int64_t x371 = INT64_MAX;
	int16_t x372 = -1;
	int64_t t87 = -62040158LL;

	t87 = (x369/(x370|(x371/x372)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = 0LL;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	int64_t t88 = 66259655158LL;

	t88 = (x373/(x374|(x375/x376)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x378 = -21;
	volatile int32_t x379 = 61848648;
	volatile uint64_t t89 = 661LLU;

	t89 = (x377/(x378|(x379/x380)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 1069814682U;
	volatile uint64_t x382 = 1904326LLU;
	uint64_t x383 = 10793LLU;
	volatile uint8_t x384 = 2U;
	uint64_t t90 = 5584054247288299364LLU;

	t90 = (x381/(x382|(x383/x384)));

	if (t90 != 560LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x386 = INT16_MAX;
	int8_t x387 = 1;
	int16_t x388 = 33;
	volatile int32_t t91 = 0;

	t91 = (x385/(x386|(x387/x388)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MIN;
	static uint32_t x392 = 49915U;
	static uint32_t t92 = 2603U;

	t92 = (x389/(x390|(x391/x392)));

	if (t92 != 49858U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MAX;
	int8_t x400 = 22;
	int64_t t93 = -13114209766230LL;

	t93 = (x397/(x398|(x399/x400)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x401 = -1;
	static int32_t x402 = -1;
	int32_t x403 = -1;
	uint16_t x404 = 687U;
	int32_t t94 = -1296;

	t94 = (x401/(x402|(x403/x404)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x406 = INT64_MIN;
	uint16_t x407 = 15574U;
	uint16_t x408 = 56U;
	static volatile int64_t t95 = 34583498618758LL;

	t95 = (x405/(x406|(x407/x408)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x409 = UINT32_MAX;
	volatile int8_t x411 = INT8_MAX;
	uint8_t x412 = 61U;
	volatile uint64_t t96 = 3LLU;

	t96 = (x409/(x410|(x411/x412)));

	if (t96 != 1571LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = 46371869271LLU;
	uint64_t x415 = 1028032227LLU;
	volatile uint64_t x416 = 4089680102152810LLU;

	t97 = (x413/(x414|(x415/x416)));

	if (t97 != 365132828LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = -1;
	static int16_t x418 = -631;
	static int64_t x419 = INT64_MAX;
	volatile uint8_t x420 = 5U;
	int64_t t98 = -122614494468LL;

	t98 = (x417/(x418|(x419/x420)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x421 = UINT64_MAX;
	int32_t x422 = INT32_MIN;
	int64_t x423 = -1LL;
	int64_t x424 = INT64_MIN;
	uint64_t t99 = 327939433053315LLU;

	t99 = (x421/(x422|(x423/x424)));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

