#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -10;
static volatile int32_t t1 = -365;
volatile int16_t x14 = INT16_MAX;
static uint8_t x18 = UINT8_MAX;
volatile int32_t t4 = -100;
int8_t x22 = 4;
volatile int64_t t5 = -3LL;
uint64_t x27 = 1398256LLU;
uint8_t x29 = UINT8_MAX;
int8_t x33 = -1;
int64_t x36 = INT64_MAX;
int64_t t8 = INT64_MAX;
uint16_t x38 = UINT16_MAX;
uint32_t x41 = 0U;
volatile uint8_t x44 = 96U;
volatile int8_t x47 = -1;
volatile int64_t t11 = -455033945575313LL;
volatile uint64_t x49 = UINT64_MAX;
int64_t x51 = -17007LL;
uint64_t x58 = 6LLU;
volatile int32_t x67 = -1;
static volatile uint64_t t17 = 162503132274LLU;
int64_t t18 = 653714232032891507LL;
int8_t x78 = INT8_MAX;
int16_t x82 = INT16_MIN;
int32_t x91 = -1;
uint32_t x94 = 6U;
uint64_t x98 = 911386411280863306LLU;
int64_t x100 = INT64_MAX;
static int8_t x104 = INT8_MAX;
int16_t x105 = -1;
volatile int32_t x109 = INT32_MIN;
int8_t x117 = INT8_MAX;
uint32_t x119 = 14344088U;
volatile int8_t x129 = INT8_MAX;
int32_t x132 = 233;
static int8_t x133 = INT8_MAX;
uint16_t x135 = 31U;
uint16_t x141 = 1U;
int16_t x147 = 1;
uint16_t x148 = UINT16_MAX;
uint32_t x153 = UINT32_MAX;
volatile uint16_t x155 = 1U;
int8_t x157 = -1;
uint16_t x160 = UINT16_MAX;
int16_t x161 = -481;
static uint8_t x170 = UINT8_MAX;
volatile int32_t t43 = 1;
static volatile int64_t x177 = 35425604675046846LL;
int16_t x184 = INT16_MAX;
int32_t x186 = -99790;
volatile int64_t x190 = INT64_MIN;
uint32_t x191 = 252U;
static volatile int32_t t47 = 130105;
int16_t x193 = INT16_MIN;
int8_t x195 = -2;
uint32_t x204 = 186238U;
static volatile int32_t t51 = 427;
volatile int8_t x211 = INT8_MIN;
volatile uint64_t t52 = 1803547LLU;
int64_t x217 = -1LL;
volatile int64_t x220 = -89LL;
volatile int64_t t55 = INT64_MIN;
int64_t x225 = -14LL;
static volatile int64_t t56 = 8LL;
static int16_t x233 = INT16_MIN;
static int64_t x238 = -18832604001817LL;
volatile uint8_t x242 = 114U;
uint64_t x247 = 48LLU;
static uint32_t x248 = 116U;
uint16_t x250 = 389U;
uint16_t x254 = 1066U;
uint64_t t64 = 3117081781755LLU;
volatile int32_t x261 = INT32_MIN;
int16_t x262 = -1;
int64_t x263 = -2841LL;
uint64_t x265 = 96255624302LLU;
int64_t x267 = 45LL;
volatile int64_t x273 = INT64_MIN;
int64_t x274 = 226853285LL;
uint8_t x279 = 30U;
int8_t x283 = INT8_MAX;
static volatile int32_t t70 = -329297056;
uint8_t x290 = 0U;
volatile int64_t x296 = -1LL;
int8_t x299 = INT8_MAX;
uint64_t t74 = 19277136525698LLU;
int8_t x301 = INT8_MAX;
static uint8_t x302 = 94U;
int32_t t75 = -880738;
static int64_t x307 = -1162LL;
uint16_t x314 = UINT16_MAX;
int16_t x319 = INT16_MIN;
uint16_t x320 = UINT16_MAX;
int16_t x325 = 3969;
volatile uint64_t t81 = 103787254954089424LLU;
int8_t x333 = -19;
volatile uint64_t t84 = 445014LLU;
volatile uint32_t x341 = UINT32_MAX;
volatile uint32_t x345 = 300U;
uint16_t x346 = 195U;
int16_t x351 = 23;
uint16_t x353 = UINT16_MAX;
static uint16_t x358 = 15188U;
int8_t x365 = INT8_MIN;
int64_t t92 = 1901109LL;
int16_t x379 = 3;
uint16_t x381 = UINT16_MAX;
static volatile int32_t t95 = 0;
volatile uint64_t x387 = 23261304657LLU;
int64_t x390 = INT64_MIN;
volatile int64_t t97 = 7678198232LL;
uint32_t x393 = UINT32_MAX;
uint8_t x400 = 0U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile uint8_t x2 = 1U;
	int64_t x4 = -1LL;
	int64_t t0 = 47768351866407452LL;

	t0 = (x1&((x2<=x3)|x4));

	if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 27U;
	static uint8_t x6 = 14U;
	int64_t x7 = INT64_MIN;
	static volatile int16_t x8 = INT16_MIN;

	t1 = (x5&((x6<=x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint32_t x10 = 6U;
	int32_t x11 = 7;
	static volatile uint32_t x12 = 8056356U;
	volatile uint32_t t2 = 20367714U;

	t2 = (x9&((x10<=x11)|x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	volatile uint32_t x15 = 14402880U;
	static int8_t x16 = 18;
	volatile int64_t t3 = -10376LL;

	t3 = (x13&((x14<=x15)|x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 19U;
	int16_t x19 = INT16_MAX;
	int16_t x20 = -3037;

	t4 = (x17&((x18<=x19)|x20));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	uint32_t x24 = 55U;

	t5 = (x21&((x22<=x23)|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 6;
	int16_t x26 = -2;
	volatile int16_t x28 = -45;
	static volatile int32_t t6 = -528;

	t6 = (x25&((x26<=x27)|x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int16_t x31 = INT16_MAX;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -112;

	t7 = (x29&((x30<=x31)|x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 5LLU;
	uint16_t x35 = 626U;

	t8 = (x33&((x34<=x35)|x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -203;
	uint16_t x39 = 1351U;
	int16_t x40 = 53;
	volatile int32_t t9 = 25542;

	t9 = (x37&((x38<=x39)|x40));

	if (t9 != 53) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	volatile uint32_t t10 = 1170U;

	t10 = (x41&((x42<=x43)|x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	static int64_t x46 = INT64_MIN;
	volatile int64_t x48 = 3063LL;

	t11 = (x45&((x46<=x47)|x48));

	if (t11 != 3063LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 482682507;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 6198613LLU;

	t12 = (x49&((x50<=x51)|x52));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 64U;
	int16_t x54 = INT16_MAX;
	int8_t x55 = -1;
	int64_t x56 = -101282691867LL;
	int64_t t13 = 941518LL;

	t13 = (x53&((x54<=x55)|x56));

	if (t13 != 64LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 3;
	uint32_t x59 = 1382552U;
	uint32_t x60 = 44774U;
	volatile uint32_t t14 = 511374629U;

	t14 = (x57&((x58<=x59)|x60));

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = -6;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = 21;
	int32_t t15 = 1;

	t15 = (x61&((x62<=x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = 501934628;
	static int32_t x66 = INT32_MAX;
	int16_t x68 = -4042;
	static volatile int32_t t16 = 3946382;

	t16 = (x65&((x66<=x67)|x68));

	if (t16 != 501932068) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 1509912457LLU;
	static int16_t x70 = INT16_MAX;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = -41798151140976LL;

	t17 = (x69&((x70<=x71)|x72));

	if (t17 != 403442048LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x74 = 3U;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = -28356293LL;

	t18 = (x73&((x74<=x75)|x76));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int8_t x79 = -2;
	int16_t x80 = 5;
	static volatile int32_t t19 = -44;

	t19 = (x77&((x78<=x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -429359840997939LL;
	int32_t x83 = 80914;
	int16_t x84 = INT16_MAX;
	int64_t t20 = 1015003LL;

	t20 = (x81&((x82<=x83)|x84));

	if (t20 != 19917LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	volatile int16_t x86 = INT16_MIN;
	uint8_t x87 = 27U;
	uint8_t x88 = 20U;
	volatile int64_t t21 = 175869LL;

	t21 = (x85&((x86<=x87)|x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = 31U;
	uint64_t x92 = 5LLU;
	uint64_t t22 = 450LLU;

	t22 = (x89&((x90<=x91)|x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 5U;
	int16_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	static int32_t t23 = -889060;

	t23 = (x93&((x94<=x95)|x96));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x99 = 31U;
	int64_t t24 = -5633259255395146LL;

	t24 = (x97&((x98<=x99)|x100));

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;
	int8_t x103 = -19;
	volatile int32_t t25 = 0;

	t25 = (x101&((x102<=x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -2459355;
	volatile uint8_t x107 = UINT8_MAX;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 68;

	t26 = (x105&((x106<=x107)|x108));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	int8_t x111 = INT8_MIN;
	int64_t x112 = -2224212703731047805LL;
	volatile int64_t t27 = -13LL;

	t27 = (x109&((x110<=x111)|x112));

	if (t27 != -2224212704019611648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int32_t x114 = -1;
	volatile uint16_t x115 = 30990U;
	uint8_t x116 = UINT8_MAX;
	static int32_t t28 = 1773;

	t28 = (x113&((x114<=x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t29 = 493647;

	t29 = (x117&((x118<=x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 24849881U;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = UINT32_MAX;
	uint64_t x124 = 2958037166LLU;
	uint64_t t30 = 31LLU;

	t30 = (x121&((x122<=x123)|x124));

	if (t30 != 5243017LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -104;
	uint32_t x126 = 0U;
	int16_t x127 = INT16_MIN;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t31 = 0LL;

	t31 = (x125&((x126<=x127)|x128));

	if (t31 != 9223372036854775704LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 1U;
	static volatile int16_t x131 = 1509;
	int32_t t32 = 43085903;

	t32 = (x129&((x130<=x131)|x132));

	if (t32 != 105) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	uint32_t x136 = 285207758U;
	uint32_t t33 = 62066671U;

	t33 = (x133&((x134<=x135)|x136));

	if (t33 != 78U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 1U;
	uint8_t x138 = 66U;
	static int64_t x139 = INT64_MIN;
	int32_t x140 = -851437;
	volatile int32_t t34 = -1913713;

	t34 = (x137&((x138<=x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -10959941176LL;
	static uint16_t x143 = UINT16_MAX;
	int32_t x144 = 5267;
	int32_t t35 = 1267;

	t35 = (x141&((x142<=x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	int32_t x146 = -109887;
	static int64_t t36 = 2115718LL;

	t36 = (x145&((x146<=x147)|x148));

	if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 58834104712LLU;
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	static int32_t x152 = INT32_MIN;
	volatile uint64_t t37 = 7975163361845LLU;

	t37 = (x149&((x150<=x151)|x152));

	if (t37 != 57982058496LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x154 = UINT32_MAX;
	static uint16_t x156 = UINT16_MAX;
	volatile uint32_t t38 = 19U;

	t38 = (x153&((x154<=x155)|x156));

	if (t38 != 65535U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -5;
	uint8_t x159 = 2U;
	static volatile int32_t t39 = 33;

	t39 = (x157&((x158<=x159)|x160));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MAX;
	volatile int32_t x163 = 418266025;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = -111;

	t40 = (x161&((x162<=x163)|x164));

	if (t40 != 65055) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MAX;
	volatile uint64_t x166 = 3LLU;
	static int32_t x167 = -3011938;
	int8_t x168 = 1;
	int32_t t41 = 16494507;

	t41 = (x165&((x166<=x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	uint32_t x172 = 41220U;
	volatile uint64_t t42 = 11205117542750LLU;

	t42 = (x169&((x170<=x171)|x172));

	if (t42 != 41221LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = -1LL;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = 359983797;

	t43 = (x173&((x174<=x175)|x176));

	if (t43 != 359983744) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = -1;
	volatile int32_t x179 = INT32_MAX;
	uint16_t x180 = 3U;
	volatile int64_t t44 = 3900882320981828LL;

	t44 = (x177&((x178<=x179)|x180));

	if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = 55659528977LL;
	int8_t x183 = INT8_MAX;
	static uint32_t t45 = 17739826U;

	t45 = (x181&((x182<=x183)|x184));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static uint8_t x187 = UINT8_MAX;
	volatile uint16_t x188 = UINT16_MAX;
	int32_t t46 = 64639697;

	t46 = (x185&((x186<=x187)|x188));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint8_t x192 = UINT8_MAX;

	t47 = (x189&((x190<=x191)|x192));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x194 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 93;

	t48 = (x193&((x194<=x195)|x196));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	uint32_t x198 = 25076U;
	int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MIN;
	static int32_t t49 = 7;

	t49 = (x197&((x198<=x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 2615782U;
	int32_t x202 = INT32_MIN;
	volatile int16_t x203 = -173;
	volatile uint32_t t50 = 12U;

	t50 = (x201&((x202<=x203)|x204));

	if (t50 != 180582U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	int32_t x206 = -2050881;
	int16_t x207 = INT16_MAX;
	int32_t x208 = 97658;

	t51 = (x205&((x206<=x207)|x208));

	if (t51 != 97659) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 1;
	static volatile int16_t x210 = INT16_MIN;
	uint64_t x212 = UINT64_MAX;

	t52 = (x209&((x210<=x211)|x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = UINT8_MAX;
	volatile int32_t x214 = 22;
	int64_t x215 = INT64_MIN;
	volatile uint64_t x216 = 30653449LLU;
	volatile uint64_t t53 = 466677466733LLU;

	t53 = (x213&((x214<=x215)|x216));

	if (t53 != 9LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = INT16_MIN;
	static int16_t x219 = -795;
	static int64_t t54 = -858279013201684071LL;

	t54 = (x217&((x218<=x219)|x220));

	if (t54 != -89LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	volatile uint64_t x222 = 1807352106372060LLU;
	uint32_t x223 = 1321247869U;
	int32_t x224 = INT32_MIN;

	t55 = (x221&((x222<=x223)|x224));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x226 = 2U;
	int32_t x227 = 5214089;
	static uint32_t x228 = 12U;

	t56 = (x225&((x226<=x227)|x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	static int32_t x230 = INT32_MIN;
	uint32_t x231 = 72U;
	int16_t x232 = -1;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x229&((x230<=x231)|x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = 31512964U;
	uint16_t x235 = 18U;
	uint32_t x236 = 1004763675U;
	volatile uint32_t t58 = 1498U;

	t58 = (x233&((x234<=x235)|x236));

	if (t58 != 1004732416U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x239 = 0;
	int16_t x240 = INT16_MIN;
	int64_t t59 = INT64_MIN;

	t59 = (x237&((x238<=x239)|x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int64_t x243 = -155351947009LL;
	int64_t x244 = INT64_MAX;
	int64_t t60 = -1698291466020810203LL;

	t60 = (x241&((x242<=x243)|x244));

	if (t60 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = 3;
	static int32_t x246 = INT32_MAX;
	uint32_t t61 = 2043255115U;

	t61 = (x245&((x246<=x247)|x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 77840LL;
	int32_t x251 = INT32_MIN;
	volatile int16_t x252 = INT16_MIN;
	static volatile int64_t t62 = 3997744326485815060LL;

	t62 = (x249&((x250<=x251)|x252));

	if (t62 != 65536LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	static int8_t x255 = 0;
	int64_t x256 = INT64_MIN;
	static volatile int64_t t63 = INT64_MIN;

	t63 = (x253&((x254<=x255)|x256));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int8_t x258 = 0;
	uint8_t x259 = 1U;
	static uint64_t x260 = 66LLU;

	t64 = (x257&((x258<=x259)|x260));

	if (t64 != 67LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x264 = UINT16_MAX;
	volatile int32_t t65 = 1;

	t65 = (x261&((x262<=x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x266 = INT16_MAX;
	int64_t x268 = 43519197476224140LL;
	volatile uint64_t t66 = 137411007LLU;

	t66 = (x265&((x266<=x267)|x268));

	if (t66 != 78387889164LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	static int16_t x270 = INT16_MAX;
	uint32_t x271 = 33335999U;
	volatile uint64_t x272 = 12478378152121LLU;
	volatile uint64_t t67 = 1351228728LLU;

	t67 = (x269&((x270<=x271)|x272));

	if (t67 != 12478378152121LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 648U;
	volatile int64_t t68 = -514599718080LL;

	t68 = (x273&((x274<=x275)|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	static int32_t x280 = -1;
	static volatile int32_t t69 = -6331611;

	t69 = (x277&((x278<=x279)|x280));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	int16_t x284 = INT16_MAX;

	t70 = (x281&((x282<=x283)|x284));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 0U;
	uint64_t x287 = 1045158190132912009LLU;
	volatile int8_t x288 = INT8_MAX;
	volatile uint32_t t71 = 15520167U;

	t71 = (x285&((x286<=x287)|x288));

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	uint8_t x291 = 114U;
	static int8_t x292 = -1;
	static volatile int32_t t72 = 1;

	t72 = (x289&((x290<=x291)|x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1582725247U;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 291U;
	int64_t t73 = -549795LL;

	t73 = (x293&((x294<=x295)|x296));

	if (t73 != 1582725247LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 12326U;
	uint16_t x298 = 565U;
	static uint64_t x300 = 4123109026462344LLU;

	t74 = (x297&((x298<=x299)|x300));

	if (t74 != 12288LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x303 = 121U;
	int8_t x304 = INT8_MIN;

	t75 = (x301&((x302<=x303)|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	volatile int8_t x308 = -12;
	volatile int32_t t76 = -460;

	t76 = (x305&((x306<=x307)|x308));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 37U;
	int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	int8_t x312 = -1;
	static volatile int32_t t77 = -232732436;

	t77 = (x309&((x310<=x311)|x312));

	if (t77 != 37) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	static volatile uint8_t x315 = 0U;
	uint16_t x316 = 4548U;
	volatile int32_t t78 = 3156542;

	t78 = (x313&((x314<=x315)|x316));

	if (t78 != 4548) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -120;
	int32_t x318 = -505673;
	static volatile int32_t t79 = -459039508;

	t79 = (x317&((x318<=x319)|x320));

	if (t79 != 65416) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 12;
	int8_t x322 = INT8_MIN;
	volatile int64_t x323 = INT64_MIN;
	static volatile int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -20490;

	t80 = (x321&((x322<=x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -169LL;
	int16_t x327 = INT16_MIN;
	volatile uint64_t x328 = UINT64_MAX;

	t81 = (x325&((x326<=x327)|x328));

	if (t81 != 3969LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 52428553451052096LLU;
	volatile uint8_t x330 = UINT8_MAX;
	volatile int16_t x331 = -1;
	int64_t x332 = -389649858828409LL;
	static volatile uint64_t t82 = 5075208116LLU;

	t82 = (x329&((x330<=x331)|x332));

	if (t82 != 52355572158268416LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = -1;
	volatile int32_t x335 = INT32_MAX;
	volatile int32_t x336 = -38997;
	int32_t t83 = -9;

	t83 = (x333&((x334<=x335)|x336));

	if (t83 != -38999) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	static int16_t x338 = -10;
	volatile int8_t x339 = -5;
	uint64_t x340 = 217365514891LLU;

	t84 = (x337&((x338<=x339)|x340));

	if (t84 != 217365512192LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = 852U;
	uint8_t x343 = UINT8_MAX;
	uint32_t x344 = 276950226U;
	volatile uint32_t t85 = 15U;

	t85 = (x341&((x342<=x343)|x344));

	if (t85 != 276950226U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x347 = INT8_MIN;
	uint8_t x348 = UINT8_MAX;
	static volatile uint32_t t86 = 26747443U;

	t86 = (x345&((x346<=x347)|x348));

	if (t86 != 44U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	uint16_t x350 = 205U;
	static int8_t x352 = -34;
	int64_t t87 = INT64_MIN;

	t87 = (x349&((x350<=x351)|x352));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x354 = 6U;
	volatile int8_t x355 = 0;
	int8_t x356 = 37;
	int32_t t88 = 163;

	t88 = (x353&((x354<=x355)|x356));

	if (t88 != 37) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	uint8_t x359 = 26U;
	uint64_t x360 = UINT64_MAX;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x357&((x358<=x359)|x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int32_t x362 = -1;
	static int32_t x363 = INT32_MIN;
	volatile int16_t x364 = 0;
	volatile int64_t t90 = -132158316625533LL;

	t90 = (x361&((x362<=x363)|x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = 22239U;
	int16_t x367 = -1;
	int32_t x368 = INT32_MAX;
	int32_t t91 = 0;

	t91 = (x365&((x366<=x367)|x368));

	if (t91 != 2147483520) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = -1;
	int8_t x370 = -4;
	static int32_t x371 = INT32_MAX;
	static int64_t x372 = INT64_MIN;

	t92 = (x369&((x370<=x371)|x372));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1850U;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = 35U;
	int16_t x376 = 454;
	volatile int32_t t93 = 120576897;

	t93 = (x373&((x374<=x375)|x376));

	if (t93 != 258) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	uint64_t x378 = 28LLU;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 878914;

	t94 = (x377&((x378<=x379)|x380));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -1;
	int8_t x383 = -6;
	int16_t x384 = INT16_MIN;

	t95 = (x381&((x382<=x383)|x384));

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = -1;
	volatile uint64_t x388 = 4285074852800558LLU;
	static uint64_t t96 = 16613607979941550LLU;

	t96 = (x385&((x386<=x387)|x388));

	if (t96 != 4285074852800512LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int8_t x391 = -1;
	volatile uint16_t x392 = UINT16_MAX;

	t97 = (x389&((x390<=x391)|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	int32_t x396 = -1;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x393&((x394<=x395)|x396));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 212694313;
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MAX;
	volatile int32_t t99 = -8309;

	t99 = (x397&((x398<=x399)|x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

