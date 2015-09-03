#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 322LLU;
int16_t x5 = 1267;
volatile int8_t x7 = INT8_MAX;
volatile uint64_t t1 = 272405LLU;
int8_t x12 = INT8_MIN;
static int8_t x25 = -1;
int32_t x27 = INT32_MIN;
int32_t t8 = INT32_MIN;
uint8_t x40 = 2U;
int64_t x44 = 6801840844682455LL;
int64_t x46 = -1230051664788653LL;
uint16_t x51 = 8U;
static uint8_t x62 = 47U;
static volatile uint8_t x72 = UINT8_MAX;
int32_t t19 = -50417;
int64_t x81 = 7739LL;
uint32_t x83 = UINT32_MAX;
uint32_t t20 = 34621U;
volatile uint32_t x87 = UINT32_MAX;
uint64_t x88 = UINT64_MAX;
uint32_t x92 = 301254U;
volatile uint32_t t22 = 3U;
uint8_t x93 = 1U;
int32_t t24 = -100;
volatile uint8_t x108 = 1U;
static int8_t x119 = INT8_MIN;
static uint16_t x120 = UINT16_MAX;
static int16_t x121 = -1;
uint32_t x122 = 17888U;
static int16_t x126 = -1;
int8_t x127 = 7;
int16_t x129 = INT16_MAX;
int32_t x135 = -335102244;
uint8_t x138 = 70U;
int32_t x149 = INT32_MAX;
volatile uint32_t t37 = 1617U;
uint64_t x155 = 3361881958599LLU;
int32_t x157 = -1;
volatile int64_t x163 = -371LL;
int64_t x183 = INT64_MIN;
int16_t x196 = INT16_MIN;
volatile int32_t t49 = 1025584021;
static volatile int32_t x205 = INT32_MAX;
int8_t x208 = INT8_MIN;
int32_t t51 = 943863656;
static volatile int32_t t52 = -8073588;
volatile uint8_t x214 = 3U;
volatile int32_t t53 = 16203963;
uint32_t x223 = UINT32_MAX;
int8_t x232 = INT8_MIN;
int8_t x234 = -1;
int64_t t60 = 7LL;
volatile uint16_t x245 = 10U;
uint32_t x250 = 1U;
volatile int64_t x252 = -1LL;
uint32_t x263 = UINT32_MAX;
uint64_t x265 = 1311426328959633614LLU;
static uint8_t x271 = 9U;
uint8_t x277 = UINT8_MAX;
uint16_t x279 = 10U;
int32_t x282 = -1;
int8_t x286 = INT8_MAX;
volatile uint64_t x287 = UINT64_MAX;
static uint8_t x297 = UINT8_MAX;
volatile int64_t t76 = 16115LL;
int16_t x313 = INT16_MIN;
int64_t x315 = INT64_MAX;
uint8_t x316 = UINT8_MAX;
uint16_t x320 = 0U;
int16_t x321 = -1;
uint8_t x330 = UINT8_MAX;
int8_t x331 = INT8_MIN;
int32_t x335 = INT32_MIN;
int32_t t83 = 50551386;
int16_t x347 = INT16_MIN;
static uint16_t x348 = UINT16_MAX;
uint16_t x351 = UINT16_MAX;
volatile int32_t t87 = 3436095;
static int16_t x366 = INT16_MAX;
uint16_t x378 = UINT16_MAX;
static volatile int16_t x381 = -1;
static uint32_t t95 = 2U;
volatile uint32_t t96 = UINT32_MAX;
int32_t x394 = -1;
static int64_t x395 = -151105LL;
int8_t x396 = INT8_MIN;
static int8_t x400 = INT8_MIN;


void f0(void) {
	int32_t x2 = INT32_MAX;
	int64_t x3 = 35804314LL;
	volatile int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -72216705LL;

	t0 = (((x1==x2)/x3)|x4);

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	uint64_t x8 = 117698316524424LLU;

	t1 = (((x5==x6)/x7)|x8);

	if (t1 != 117698316524424LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static uint64_t x10 = 137954767460799971LLU;
	int8_t x11 = -28;
	volatile int32_t t2 = 1281493;

	t2 = (((x9==x10)/x11)|x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -66;
	int16_t x14 = 40;
	static int16_t x15 = 220;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 871537;

	t3 = (((x13==x14)/x15)|x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = -2;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

	t4 = (((x17==x18)/x19)|x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int64_t x22 = -236166731LL;
	volatile uint8_t x23 = UINT8_MAX;
	int16_t x24 = 0;
	int32_t t5 = 46993;

	t5 = (((x21==x22)/x23)|x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	static int32_t x28 = -1038;
	volatile int32_t t6 = -38;

	t6 = (((x25==x26)/x27)|x28);

	if (t6 != -1038) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	uint64_t x30 = 172886400779582LLU;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	int64_t t7 = 477967961315102LL;

	t7 = (((x29==x30)/x31)|x32);

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 6419134016760745164LLU;
	int8_t x34 = -20;
	int32_t x35 = -291379;
	volatile int32_t x36 = INT32_MIN;

	t8 = (((x33==x34)/x35)|x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	static int16_t x38 = -1;
	int32_t x39 = INT32_MIN;
	int32_t t9 = 1950;

	t9 = (((x37==x38)/x39)|x40);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	static volatile int64_t t10 = 6548951716674LL;

	t10 = (((x41==x42)/x43)|x44);

	if (t10 != 6801840844682455LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -7978;
	int8_t x47 = INT8_MIN;
	static volatile uint64_t x48 = UINT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = (((x45==x46)/x47)|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MIN;
	volatile uint32_t x50 = UINT32_MAX;
	static int8_t x52 = -1;
	volatile int32_t t12 = 357;

	t12 = (((x49==x50)/x51)|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = 9905U;
	static int64_t x55 = -1LL;
	static volatile int32_t x56 = -1072037019;
	static volatile int64_t t13 = -1076649730792LL;

	t13 = (((x53==x54)/x55)|x56);

	if (t13 != -1072037019LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 3U;
	volatile uint32_t x58 = 50139363U;
	volatile int32_t x59 = -410;
	uint32_t x60 = UINT32_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = (((x57==x58)/x59)|x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 0;
	int16_t x63 = -1;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = INT32_MAX;

	t15 = (((x61==x62)/x63)|x64);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	static uint8_t x66 = 2U;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = -1;
	volatile int32_t t16 = -16770899;

	t16 = (((x65==x66)/x67)|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int32_t x70 = -1;
	volatile int32_t x71 = INT32_MIN;
	int32_t t17 = -46835;

	t17 = (((x69==x70)/x71)|x72);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static volatile uint32_t x74 = 0U;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MAX;
	uint32_t t18 = 38U;

	t18 = (((x73==x74)/x75)|x76);

	if (t18 != 32767U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 0;
	int8_t x78 = -1;
	static uint16_t x79 = UINT16_MAX;
	static volatile int8_t x80 = INT8_MIN;

	t19 = (((x77==x78)/x79)|x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = INT16_MAX;
	volatile uint32_t x84 = 618U;

	t20 = (((x81==x82)/x83)|x84);

	if (t20 != 618U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MAX;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x85==x86)/x87)|x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint64_t x90 = 897724298531LLU;
	int16_t x91 = -1;

	t22 = (((x89==x90)/x91)|x92);

	if (t22 != 301254U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 76;
	int16_t x95 = 3406;
	int64_t x96 = 2773LL;
	static volatile int64_t t23 = 2041812502LL;

	t23 = (((x93==x94)/x95)|x96);

	if (t23 != 2773LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -4;
	int8_t x98 = 40;
	int32_t x99 = INT32_MIN;
	volatile int16_t x100 = -1;

	t24 = (((x97==x98)/x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MIN;
	int32_t t25 = INT32_MIN;

	t25 = (((x101==x102)/x103)|x104);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -93LL;
	int8_t x106 = 3;
	static int32_t x107 = INT32_MIN;
	int32_t t26 = 0;

	t26 = (((x105==x106)/x107)|x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MAX;
	int8_t x111 = INT8_MAX;
	int16_t x112 = INT16_MIN;
	static int32_t t27 = -76039690;

	t27 = (((x109==x110)/x111)|x112);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	static volatile int64_t x114 = -1LL;
	static uint8_t x115 = 87U;
	volatile uint64_t x116 = 240LLU;
	volatile uint64_t t28 = 74680786LLU;

	t28 = (((x113==x114)/x115)|x116);

	if (t28 != 240LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 4312U;
	static volatile uint32_t x118 = UINT32_MAX;
	volatile int32_t t29 = -22;

	t29 = (((x117==x118)/x119)|x120);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x123 = 48;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 11988194;

	t30 = (((x121==x122)/x123)|x124);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -16;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 15045297;

	t31 = (((x125==x126)/x127)|x128);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = UINT32_MAX;
	static int8_t x131 = INT8_MIN;
	uint16_t x132 = 669U;
	volatile int32_t t32 = 3563199;

	t32 = (((x129==x130)/x131)|x132);

	if (t32 != 669) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	uint64_t x134 = UINT64_MAX;
	static int16_t x136 = INT16_MIN;
	int32_t t33 = 0;

	t33 = (((x133==x134)/x135)|x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile uint64_t x139 = 296230198285LLU;
	static uint64_t x140 = 7006483LLU;
	uint64_t t34 = 120151439588LLU;

	t34 = (((x137==x138)/x139)|x140);

	if (t34 != 7006483LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 1281273LLU;
	volatile int32_t x142 = INT32_MIN;
	uint16_t x143 = 12U;
	int16_t x144 = -14765;
	int32_t t35 = -21016;

	t35 = (((x141==x142)/x143)|x144);

	if (t35 != -14765) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MAX;
	volatile int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	int64_t t36 = 5298993LL;

	t36 = (((x145==x146)/x147)|x148);

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x150 = INT8_MAX;
	uint32_t x151 = 223U;
	uint8_t x152 = 1U;

	t37 = (((x149==x150)/x151)|x152);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 405U;
	uint64_t x154 = 24441746272805LLU;
	static volatile uint64_t x156 = UINT64_MAX;
	static volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x153==x154)/x155)|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 7U;
	int32_t x159 = -459918310;
	static int64_t x160 = 111638524333559LL;
	volatile int64_t t39 = 42857386389044LL;

	t39 = (((x157==x158)/x159)|x160);

	if (t39 != 111638524333559LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint8_t x162 = 86U;
	int64_t x164 = -578306784028996890LL;
	volatile int64_t t40 = 91944LL;

	t40 = (((x161==x162)/x163)|x164);

	if (t40 != -578306784028996890LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int64_t x166 = INT64_MAX;
	volatile int8_t x167 = -1;
	static uint64_t x168 = 1424749976712LLU;
	uint64_t t41 = 201107341589496LLU;

	t41 = (((x165==x166)/x167)|x168);

	if (t41 != 1424749976712LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int8_t x170 = INT8_MIN;
	int64_t x171 = -1LL;
	int16_t x172 = INT16_MIN;
	int64_t t42 = -6646756171LL;

	t42 = (((x169==x170)/x171)|x172);

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -24;
	uint64_t x174 = 16601421451323191LLU;
	int16_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -65779997;

	t43 = (((x173==x174)/x175)|x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 194LL;
	volatile uint16_t x178 = 16U;
	volatile int64_t x179 = -3770LL;
	int8_t x180 = 3;
	int64_t t44 = -176626608378743LL;

	t44 = (((x177==x178)/x179)|x180);

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 6U;
	int16_t x182 = INT16_MAX;
	uint16_t x184 = 60U;
	int64_t t45 = 13468160348136LL;

	t45 = (((x181==x182)/x183)|x184);

	if (t45 != 60LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = 15;
	static int8_t x187 = -1;
	static int16_t x188 = -1;
	int32_t t46 = 283881;

	t46 = (((x185==x186)/x187)|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = 6933U;
	int8_t x190 = -15;
	int16_t x191 = 1;
	static int16_t x192 = -982;
	volatile int32_t t47 = 47871;

	t47 = (((x189==x190)/x191)|x192);

	if (t47 != -982) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	volatile int64_t x194 = -1LL;
	static int32_t x195 = INT32_MAX;
	int32_t t48 = -16;

	t48 = (((x193==x194)/x195)|x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	int8_t x198 = 0;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;

	t49 = (((x197==x198)/x199)|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 25U;
	uint8_t x202 = 121U;
	uint16_t x203 = 7U;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (((x201==x202)/x203)|x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = -7941941;
	int16_t x207 = -1;

	t51 = (((x205==x206)/x207)|x208);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int16_t x210 = INT16_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile int16_t x212 = -1;

	t52 = (((x209==x210)/x211)|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 103U;
	int8_t x215 = -1;
	volatile uint16_t x216 = 1U;

	t53 = (((x213==x214)/x215)|x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 12951U;
	uint16_t x218 = UINT16_MAX;
	int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;
	volatile int64_t t54 = 60032099LL;

	t54 = (((x217==x218)/x219)|x220);

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 192344LLU;
	static int64_t x222 = -1LL;
	int16_t x224 = 19;
	uint32_t t55 = 72U;

	t55 = (((x221==x222)/x223)|x224);

	if (t55 != 19U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	static int16_t x226 = -1;
	int64_t x227 = INT64_MIN;
	volatile int16_t x228 = -5747;
	volatile int64_t t56 = 4624483606LL;

	t56 = (((x225==x226)/x227)|x228);

	if (t56 != -5747LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 165959;
	static int8_t x230 = -1;
	static int16_t x231 = -1;
	volatile int32_t t57 = 959464;

	t57 = (((x229==x230)/x231)|x232);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 0U;
	static int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = (((x233==x234)/x235)|x236);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 3245U;
	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MAX;
	static uint32_t x240 = 216499U;
	uint32_t t59 = 127U;

	t59 = (((x237==x238)/x239)|x240);

	if (t59 != 216499U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	static uint8_t x242 = UINT8_MAX;
	int64_t x243 = 175991LL;
	int16_t x244 = -1078;

	t60 = (((x241==x242)/x243)|x244);

	if (t60 != -1078LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 4365570583909LLU;
	int8_t x247 = 54;
	int32_t x248 = -2;
	static volatile int32_t t61 = -9768;

	t61 = (((x245==x246)/x247)|x248);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	static int16_t x251 = INT16_MAX;
	int64_t t62 = 292249LL;

	t62 = (((x249==x250)/x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 102143LLU;
	uint8_t x256 = 0U;
	volatile uint64_t t63 = 13415088433LLU;

	t63 = (((x253==x254)/x255)|x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = INT64_MIN;

	t64 = (((x257==x258)/x259)|x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	static int64_t x264 = -18386504450251LL;
	int64_t t65 = 1LL;

	t65 = (((x261==x262)/x263)|x264);

	if (t65 != -18386504450251LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 398U;
	volatile int32_t x267 = INT32_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -2094;

	t66 = (((x265==x266)/x267)|x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = INT64_MIN;
	static uint16_t x272 = 1U;
	volatile int32_t t67 = 14302;

	t67 = (((x269==x270)/x271)|x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = -324215899755206LL;
	uint8_t x276 = UINT8_MAX;
	static volatile int64_t t68 = 647644693036LL;

	t68 = (((x273==x274)/x275)|x276);

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x278 = -706;
	int8_t x280 = 20;
	int32_t t69 = -104922;

	t69 = (((x277==x278)/x279)|x280);

	if (t69 != 20) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int32_t x283 = 1;
	static int64_t x284 = 23925089417986533LL;
	volatile int64_t t70 = -395115LL;

	t70 = (((x281==x282)/x283)|x284);

	if (t70 != 23925089417986533LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	uint8_t x288 = UINT8_MAX;
	static uint64_t t71 = 23590018642LLU;

	t71 = (((x285==x286)/x287)|x288);

	if (t71 != 255LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint32_t x290 = 3U;
	int8_t x291 = -1;
	volatile uint32_t x292 = 7500U;
	uint32_t t72 = 6U;

	t72 = (((x289==x290)/x291)|x292);

	if (t72 != 7500U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 47321U;
	volatile int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = INT32_MIN;

	t73 = (((x293==x294)/x295)|x296);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	static uint32_t x299 = 922181957U;
	int8_t x300 = 3;
	volatile uint32_t t74 = 20U;

	t74 = (((x297==x298)/x299)|x300);

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 47068835U;
	static int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = 11U;
	int32_t t75 = 1066407488;

	t75 = (((x301==x302)/x303)|x304);

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = 1;
	uint8_t x306 = 2U;
	int64_t x307 = -1LL;
	static int16_t x308 = INT16_MAX;

	t76 = (((x305==x306)/x307)|x308);

	if (t76 != 32767LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = 32;
	int64_t x311 = -1LL;
	uint32_t x312 = UINT32_MAX;
	int64_t t77 = 4498095LL;

	t77 = (((x309==x310)/x311)|x312);

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x314 = UINT8_MAX;
	volatile int64_t t78 = 119513439LL;

	t78 = (((x313==x314)/x315)|x316);

	if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MIN;
	int16_t x319 = -34;
	int32_t t79 = -977;

	t79 = (((x317==x318)/x319)|x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = 35233696;
	static int64_t x323 = INT64_MIN;
	volatile uint64_t x324 = 8704250486534LLU;
	uint64_t t80 = 6962385LLU;

	t80 = (((x321==x322)/x323)|x324);

	if (t80 != 8704250486534LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MAX;
	int32_t x326 = INT32_MIN;
	int16_t x327 = 23;
	int64_t x328 = -1LL;
	static volatile int64_t t81 = -314LL;

	t81 = (((x325==x326)/x327)|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -55;
	volatile int32_t x332 = INT32_MAX;
	static volatile int32_t t82 = INT32_MAX;

	t82 = (((x329==x330)/x331)|x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 1U;
	int16_t x334 = INT16_MAX;
	uint16_t x336 = UINT16_MAX;

	t83 = (((x333==x334)/x335)|x336);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 7264256002LLU;
	uint8_t x338 = 10U;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 0U;
	volatile uint64_t t84 = 3804LLU;

	t84 = (((x337==x338)/x339)|x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 18;
	int16_t x342 = 671;
	static int64_t x343 = INT64_MAX;
	int16_t x344 = INT16_MIN;
	int64_t t85 = 47732LL;

	t85 = (((x341==x342)/x343)|x344);

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -21699800758020LL;
	int8_t x346 = -1;
	static volatile int32_t t86 = -101;

	t86 = (((x345==x346)/x347)|x348);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	volatile uint16_t x350 = 838U;
	int16_t x352 = -4255;

	t87 = (((x349==x350)/x351)|x352);

	if (t87 != -4255) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	static uint16_t x354 = 10U;
	int16_t x355 = INT16_MAX;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (((x353==x354)/x355)|x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = UINT64_MAX;
	int8_t x358 = -1;
	volatile int64_t x359 = INT64_MIN;
	static int16_t x360 = INT16_MIN;
	int64_t t89 = -283881758676248733LL;

	t89 = (((x357==x358)/x359)|x360);

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	static int8_t x362 = INT8_MIN;
	int64_t x363 = 1207178679997546LL;
	uint8_t x364 = 35U;
	volatile int64_t t90 = -2395698482LL;

	t90 = (((x361==x362)/x363)|x364);

	if (t90 != 35LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -6;
	static int32_t t91 = 1588011;

	t91 = (((x365==x366)/x367)|x368);

	if (t91 != -6) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	volatile int32_t x370 = -490246583;
	int8_t x371 = -1;
	int16_t x372 = INT16_MAX;
	static int32_t t92 = -194376;

	t92 = (((x369==x370)/x371)|x372);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 2LLU;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = 41953432901335LLU;
	volatile uint64_t t93 = 2927821LLU;

	t93 = (((x377==x378)/x379)|x380);

	if (t93 != 41953432901335LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x382 = 29054U;
	int16_t x383 = -71;
	int8_t x384 = INT8_MIN;
	static int32_t t94 = 66869303;

	t94 = (((x381==x382)/x383)|x384);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 565U;
	uint8_t x388 = UINT8_MAX;

	t95 = (((x385==x386)/x387)|x388);

	if (t95 != 255U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = UINT32_MAX;
	uint16_t x390 = 6U;
	volatile int32_t x391 = 175664941;
	static uint32_t x392 = UINT32_MAX;

	t96 = (((x389==x390)/x391)|x392);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = INT8_MIN;
	volatile int64_t t97 = -10571135LL;

	t97 = (((x393==x394)/x395)|x396);

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x397 = 10968;
	volatile int32_t x398 = 0;
	int32_t x399 = 1681911;
	int32_t t98 = 17922420;

	t98 = (((x397==x398)/x399)|x400);

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x401 = 675803LL;
	static uint16_t x402 = 97U;
	volatile int16_t x403 = INT16_MAX;
	int64_t x404 = -1LL;
	int64_t t99 = 29116LL;

	t99 = (((x401==x402)/x403)|x404);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

