#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
int32_t x2 = INT32_MIN;
volatile uint32_t x3 = 1875323869U;
uint32_t x7 = 987431889U;
int32_t x10 = 0;
int64_t t3 = 0LL;
uint32_t x22 = UINT32_MAX;
int16_t x25 = -1;
uint16_t x27 = 2U;
volatile uint64_t x28 = 8164LLU;
volatile int32_t x44 = INT32_MIN;
int16_t x49 = 31;
volatile int16_t x54 = -5021;
volatile uint32_t x55 = 4U;
uint64_t x56 = 27126498LLU;
uint8_t x57 = UINT8_MAX;
uint8_t x59 = UINT8_MAX;
int64_t x60 = INT64_MAX;
uint16_t x62 = UINT16_MAX;
static int16_t x68 = INT16_MIN;
int8_t x69 = -3;
static volatile int64_t x74 = -73451125252LL;
volatile int64_t t20 = 713LL;
uint8_t x106 = 105U;
volatile int32_t t23 = 803430659;
uint8_t x112 = 4U;
static volatile int32_t t24 = 38813;
uint8_t x113 = 6U;
int32_t x121 = INT32_MIN;
uint16_t x135 = 16U;
int64_t x157 = 12743884777636LL;
uint8_t x165 = UINT8_MAX;
int8_t x171 = 23;
int32_t t36 = 3651030;
volatile int64_t x176 = -1927365683283LL;
uint32_t x178 = UINT32_MAX;
volatile int64_t x184 = INT64_MIN;
int64_t t39 = -2420LL;
int8_t x187 = INT8_MAX;
int64_t x192 = -1LL;
int16_t x196 = 3;
int32_t x200 = INT32_MAX;
int32_t t43 = 213959;
int32_t t44 = 5;
static uint16_t x219 = UINT16_MAX;
int64_t x221 = -15172679473479LL;
static int16_t x223 = -1;
uint16_t x224 = 90U;
static volatile int32_t t49 = 34313390;
int32_t x226 = -102914160;
volatile uint64_t x236 = UINT64_MAX;
int64_t x244 = INT64_MAX;
uint8_t x245 = UINT8_MAX;
static int16_t x267 = INT16_MIN;
static int16_t x270 = 0;
int32_t x272 = INT32_MAX;
int16_t x276 = INT16_MIN;
int64_t x282 = INT64_MIN;
int8_t x301 = INT8_MIN;
static uint8_t x303 = 89U;
volatile int8_t x309 = INT8_MAX;
uint32_t x332 = 511108U;
volatile uint64_t t71 = 92083153LLU;
static uint16_t x345 = 3715U;
volatile uint32_t x346 = UINT32_MAX;
int8_t x349 = INT8_MIN;
int32_t x351 = -1;
int8_t x353 = -1;
volatile uint64_t x356 = UINT64_MAX;
static uint32_t x358 = UINT32_MAX;
uint64_t x359 = UINT64_MAX;
static uint32_t x364 = 2U;
int16_t x366 = 0;
uint64_t x394 = 937587138423561812LLU;
int16_t x395 = 1;
static int16_t x397 = -1;
int32_t x405 = -1;
volatile int32_t t86 = -1194503;
uint8_t x409 = UINT8_MAX;
volatile uint8_t x414 = 9U;
int64_t t89 = -3596223LL;
int16_t x425 = INT16_MAX;
static int32_t x440 = 906441;
int32_t t94 = 598791;
volatile int64_t x452 = INT64_MIN;
int8_t x457 = -1;
int16_t x458 = INT16_MIN;
int32_t x462 = INT32_MIN;
int8_t x464 = INT8_MAX;
int8_t x466 = 1;


void f0(void) {
	volatile uint64_t x4 = 1101627928LLU;
	volatile uint64_t t0 = 67220741923238LLU;

	t0 = (((x1==x2)-x3)%x4);

	if (t0 != 216387571LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint8_t x6 = UINT8_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 13U;

	t1 = (((x5==x6)-x7)%x8);

	if (t1 != 3307535407U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	int64_t x11 = -1LL;
	int64_t x12 = 987184LL;
	volatile int64_t t2 = 33463581272956LL;

	t2 = (((x9==x10)-x11)%x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = 1LL;
	uint32_t x19 = 360U;
	int64_t x20 = INT64_MAX;

	t3 = (((x17==x18)-x19)%x20);

	if (t3 != 4294966936LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int64_t x23 = -1LL;
	int8_t x24 = INT8_MIN;
	int64_t t4 = 28084870LL;

	t4 = (((x21==x22)-x23)%x24);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = -1;
	uint64_t t5 = 373LLU;

	t5 = (((x25==x26)-x27)%x28);

	if (t5 != 327LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = -15LL;
	int64_t x34 = INT64_MIN;
	static volatile int16_t x35 = INT16_MAX;
	volatile int64_t x36 = INT64_MAX;
	static int64_t t6 = 107583LL;

	t6 = (((x33==x34)-x35)%x36);

	if (t6 != -32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 6;
	int8_t x38 = 1;
	static int16_t x39 = INT16_MAX;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t7 = -3922;

	t7 = (((x37==x38)-x39)%x40);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	int8_t x43 = 7;
	volatile int32_t t8 = -3519424;

	t8 = (((x41==x42)-x43)%x44);

	if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	volatile uint16_t x46 = UINT16_MAX;
	static uint64_t x47 = UINT64_MAX;
	volatile int8_t x48 = INT8_MIN;
	static volatile uint64_t t9 = 2121346361089112745LLU;

	t9 = (((x45==x46)-x47)%x48);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x50 = UINT8_MAX;
	static volatile int32_t x51 = 16;
	uint64_t x52 = 605674962377467LLU;
	volatile uint64_t t10 = 666LLU;

	t10 = (((x49==x50)-x51)%x52);

	if (t10 != 307419541416648LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	static volatile uint64_t t11 = 4476477952667886LLU;

	t11 = (((x53==x54)-x55)%x56);

	if (t11 != 8980608LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x58 = INT8_MAX;
	int64_t t12 = -1LL;

	t12 = (((x57==x58)-x59)%x60);

	if (t12 != -255LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	int64_t x63 = -7LL;
	int16_t x64 = INT16_MIN;
	static volatile int64_t t13 = -181317LL;

	t13 = (((x61==x62)-x63)%x64);

	if (t13 != 7LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = -1;
	static int8_t x66 = -1;
	static volatile uint16_t x67 = 175U;
	int32_t t14 = 256586;

	t14 = (((x65==x66)-x67)%x68);

	if (t14 != -174) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x70 = INT16_MIN;
	static volatile int8_t x71 = INT8_MAX;
	int64_t x72 = INT64_MIN;
	volatile int64_t t15 = -26579LL;

	t15 = (((x69==x70)-x71)%x72);

	if (t15 != -127LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	uint32_t x75 = 14065U;
	volatile int64_t x76 = -1LL;
	int64_t t16 = -291455145098562879LL;

	t16 = (((x73==x74)-x75)%x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 8U;
	static uint16_t x78 = 2U;
	int64_t x79 = -18264648749LL;
	int64_t x80 = INT64_MIN;
	int64_t t17 = -154410124LL;

	t17 = (((x77==x78)-x79)%x80);

	if (t17 != 18264648749LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 59929191740470LLU;
	int16_t x82 = -656;
	volatile int16_t x83 = -1;
	uint32_t x84 = 1057557967U;
	uint32_t t18 = 5U;

	t18 = (((x81==x82)-x83)%x84);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	static volatile int8_t x87 = INT8_MIN;
	volatile int32_t x88 = -1;
	int32_t t19 = 1176;

	t19 = (((x85==x86)-x87)%x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 44U;
	static int8_t x94 = INT8_MAX;
	int16_t x95 = 85;
	volatile int64_t x96 = -488350558037857LL;

	t20 = (((x93==x94)-x95)%x96);

	if (t20 != -85LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	uint64_t x98 = 29936LLU;
	int16_t x99 = 7;
	static uint32_t x100 = 12133U;
	uint32_t t21 = 1U;

	t21 = (((x97==x98)-x99)%x100);

	if (t21 != 6619U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	static uint64_t x102 = 104508638504378LLU;
	volatile int16_t x103 = INT16_MAX;
	int64_t x104 = -54690452992LL;
	static volatile int64_t t22 = 1LL;

	t22 = (((x101==x102)-x103)%x104);

	if (t22 != -32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = INT16_MIN;
	uint16_t x107 = 833U;
	int32_t x108 = INT32_MIN;

	t23 = (((x105==x106)-x107)%x108);

	if (t23 != -833) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	static int8_t x110 = -3;
	static volatile int16_t x111 = INT16_MIN;

	t24 = (((x109==x110)-x111)%x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x114 = INT32_MIN;
	int64_t x115 = -4476859921244LL;
	int8_t x116 = -1;
	static int64_t t25 = 1051546845430LL;

	t25 = (((x113==x114)-x115)%x116);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x122 = INT32_MAX;
	int32_t x123 = -31;
	static volatile int32_t x124 = INT32_MAX;
	int32_t t26 = 9182953;

	t26 = (((x121==x122)-x123)%x124);

	if (t26 != 31) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -86;
	uint32_t x126 = 3752U;
	int64_t x127 = -26LL;
	volatile int32_t x128 = INT32_MIN;
	int64_t t27 = 35LL;

	t27 = (((x125==x126)-x127)%x128);

	if (t27 != 26LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 10395;
	int64_t x130 = 0LL;
	volatile uint16_t x131 = 218U;
	static int16_t x132 = 15251;
	int32_t t28 = -410914147;

	t28 = (((x129==x130)-x131)%x132);

	if (t28 != -218) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MAX;
	uint64_t x134 = UINT64_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t29 = 7167;

	t29 = (((x133==x134)-x135)%x136);

	if (t29 != -16) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x137 = INT32_MIN;
	uint8_t x138 = 15U;
	int16_t x139 = -1;
	static int8_t x140 = INT8_MIN;
	static volatile int32_t t30 = 30376022;

	t30 = (((x137==x138)-x139)%x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = INT32_MIN;
	int16_t x143 = 132;
	static int16_t x144 = 107;
	static int32_t t31 = 42;

	t31 = (((x141==x142)-x143)%x144);

	if (t31 != -25) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = -92;
	static volatile uint16_t x151 = UINT16_MAX;
	volatile int64_t x152 = INT64_MIN;
	int64_t t32 = -169548LL;

	t32 = (((x149==x150)-x151)%x152);

	if (t32 != -65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x153 = 25U;
	int64_t x154 = -9097LL;
	volatile uint8_t x155 = 112U;
	volatile int32_t x156 = 13654;
	int32_t t33 = 7;

	t33 = (((x153==x154)-x155)%x156);

	if (t33 != -112) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = INT64_MIN;
	static volatile int8_t x159 = 9;
	uint16_t x160 = 13U;
	volatile int32_t t34 = -3;

	t34 = (((x157==x158)-x159)%x160);

	if (t34 != -9) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = -1LL;
	int64_t x167 = INT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile int64_t t35 = 68467445165090LL;

	t35 = (((x165==x166)-x167)%x168);

	if (t35 != -127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MAX;
	int64_t x170 = INT64_MIN;
	static int8_t x172 = -31;

	t36 = (((x169==x170)-x171)%x172);

	if (t36 != -23) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -1LL;
	int64_t x174 = 234071114732968LL;
	static int8_t x175 = INT8_MIN;
	static volatile int64_t t37 = 33259LL;

	t37 = (((x173==x174)-x175)%x176);

	if (t37 != 128LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = UINT16_MAX;
	static uint64_t x179 = UINT64_MAX;
	volatile int64_t x180 = 385LL;
	uint64_t t38 = 20459917313112906LLU;

	t38 = (((x177==x178)-x179)%x180);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MIN;
	volatile uint16_t x183 = UINT16_MAX;

	t39 = (((x181==x182)-x183)%x184);

	if (t39 != -65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = -1;
	int16_t x186 = -360;
	int64_t x188 = 1979487502570608438LL;
	static volatile int64_t t40 = -32861449916434517LL;

	t40 = (((x185==x186)-x187)%x188);

	if (t40 != -127LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x189 = 1621397427689189LL;
	int8_t x190 = -1;
	static volatile int32_t x191 = INT32_MAX;
	volatile int64_t t41 = 27654149806LL;

	t41 = (((x189==x190)-x191)%x192);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -58;
	int64_t x195 = -687070111299LL;
	int64_t t42 = 1884406298LL;

	t42 = (((x193==x194)-x195)%x196);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x197 = INT8_MAX;
	uint64_t x198 = 65162013684021LLU;
	static int8_t x199 = -1;

	t43 = (((x197==x198)-x199)%x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = 230LL;
	int8_t x202 = 55;
	static volatile uint8_t x203 = 21U;
	static volatile int32_t x204 = INT32_MIN;

	t44 = (((x201==x202)-x203)%x204);

	if (t44 != -21) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 6459631050LLU;
	static int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MAX;
	static int64_t x208 = 1392LL;
	volatile int64_t t45 = 1LL;

	t45 = (((x205==x206)-x207)%x208);

	if (t45 != -751LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = -1;
	static volatile uint32_t x211 = UINT32_MAX;
	volatile int8_t x212 = INT8_MIN;
	uint32_t t46 = 2222356U;

	t46 = (((x209==x210)-x211)%x212);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int16_t x214 = INT16_MIN;
	int64_t x215 = 16680953LL;
	uint32_t x216 = 1289U;
	int64_t t47 = 1754117581682100LL;

	t47 = (((x213==x214)-x215)%x216);

	if (t47 != -4LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 176309347LLU;
	uint64_t x218 = 114733787505138LLU;
	int16_t x220 = 10733;
	int32_t t48 = -14;

	t48 = (((x217==x218)-x219)%x220);

	if (t48 != -1137) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x222 = INT64_MIN;

	t49 = (((x221==x222)-x223)%x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MIN;
	int8_t x227 = 1;
	int32_t x228 = INT32_MIN;
	volatile int32_t t50 = 16527320;

	t50 = (((x225==x226)-x227)%x228);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x233 = 5;
	volatile uint32_t x234 = 70501620U;
	static uint16_t x235 = 13U;
	volatile uint64_t t51 = 6019LLU;

	t51 = (((x233==x234)-x235)%x236);

	if (t51 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	int8_t x243 = -53;
	int64_t t52 = -53963306825561938LL;

	t52 = (((x241==x242)-x243)%x244);

	if (t52 != 53LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x246 = 131LLU;
	static int64_t x247 = 10302398703LL;
	int16_t x248 = INT16_MIN;
	volatile int64_t t53 = 1528680040323516576LL;

	t53 = (((x245==x246)-x247)%x248);

	if (t53 != -8431LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = -3641;
	int8_t x254 = INT8_MAX;
	uint64_t x255 = 406188956378254841LLU;
	static int8_t x256 = 2;
	uint64_t t54 = 7917826LLU;

	t54 = (((x253==x254)-x255)%x256);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = -1;
	static volatile uint16_t x258 = 5U;
	int64_t x259 = INT64_MAX;
	uint8_t x260 = 109U;
	volatile int64_t t55 = -8LL;

	t55 = (((x257==x258)-x259)%x260);

	if (t55 != -32LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MIN;
	static uint64_t x263 = 182174LLU;
	static int16_t x264 = INT16_MIN;
	static volatile uint64_t t56 = 790454985417017073LLU;

	t56 = (((x261==x262)-x263)%x264);

	if (t56 != 18446744073709369442LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 1U;
	static volatile int32_t x266 = INT32_MIN;
	int64_t x268 = INT64_MAX;
	static int64_t t57 = 99145696057268261LL;

	t57 = (((x265==x266)-x267)%x268);

	if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x269 = 659739024144LLU;
	int16_t x271 = -495;
	static volatile int32_t t58 = 738;

	t58 = (((x269==x270)-x271)%x272);

	if (t58 != 495) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x273 = 65983U;
	volatile uint8_t x274 = UINT8_MAX;
	volatile int16_t x275 = INT16_MIN;
	static int32_t t59 = 37126068;

	t59 = (((x273==x274)-x275)%x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x281 = INT64_MIN;
	uint8_t x283 = 0U;
	static volatile uint16_t x284 = 450U;
	volatile int32_t t60 = -149;

	t60 = (((x281==x282)-x283)%x284);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int64_t x286 = 1925364LL;
	static int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	int64_t t61 = -14130618991086862LL;

	t61 = (((x285==x286)-x287)%x288);

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = -1;
	uint16_t x290 = 0U;
	int16_t x291 = -7;
	volatile uint8_t x292 = 104U;
	int32_t t62 = -7872;

	t62 = (((x289==x290)-x291)%x292);

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = 526477270LLU;
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	volatile uint32_t x296 = UINT32_MAX;
	int64_t t63 = -702589940LL;

	t63 = (((x293==x294)-x295)%x296);

	if (t63 != -2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = -4;
	uint64_t x298 = 5LLU;
	static int64_t x299 = INT64_MAX;
	volatile int64_t x300 = -4300LL;
	volatile int64_t t64 = 0LL;

	t64 = (((x297==x298)-x299)%x300);

	if (t64 != -2707LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x302 = 23280234541965LLU;
	int8_t x304 = -28;
	volatile int32_t t65 = -2;

	t65 = (((x301==x302)-x303)%x304);

	if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x310 = INT64_MIN;
	int32_t x311 = -145594;
	uint8_t x312 = 51U;
	static int32_t t66 = -4;

	t66 = (((x309==x310)-x311)%x312);

	if (t66 != 40) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x317 = 191279643036586656LL;
	int8_t x318 = 5;
	static int16_t x319 = 11;
	static int32_t x320 = -1;
	int32_t t67 = 5;

	t67 = (((x317==x318)-x319)%x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = 23U;
	int16_t x323 = INT16_MIN;
	int16_t x324 = 15660;
	static int32_t t68 = -407;

	t68 = (((x321==x322)-x323)%x324);

	if (t68 != 1448) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x325 = -1LL;
	uint64_t x326 = 38LLU;
	int8_t x327 = -14;
	int64_t x328 = INT64_MIN;
	volatile int64_t t69 = -3333462688555LL;

	t69 = (((x325==x326)-x327)%x328);

	if (t69 != 14LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = -127;
	uint8_t x330 = 24U;
	static int64_t x331 = -1LL;
	static int64_t t70 = -3023979LL;

	t70 = (((x329==x330)-x331)%x332);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -75;
	static int8_t x334 = INT8_MIN;
	uint64_t x335 = UINT64_MAX;
	uint64_t x336 = UINT64_MAX;

	t71 = (((x333==x334)-x335)%x336);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = INT32_MAX;
	static volatile int16_t x338 = 1747;
	int32_t x339 = 8984;
	int32_t x340 = -1;
	static int32_t t72 = -830387739;

	t72 = (((x337==x338)-x339)%x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = 1;
	int64_t x342 = INT64_MAX;
	uint64_t x343 = 4130596190475LLU;
	int32_t x344 = 136748;
	uint64_t t73 = 78LLU;

	t73 = (((x341==x342)-x343)%x344);

	if (t73 != 11093LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x347 = 2349;
	volatile int16_t x348 = 526;
	volatile int32_t t74 = -152377321;

	t74 = (((x345==x346)-x347)%x348);

	if (t74 != -245) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x350 = 1U;
	volatile int16_t x352 = INT16_MIN;
	int32_t t75 = 0;

	t75 = (((x349==x350)-x351)%x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x354 = 4;
	int32_t x355 = INT32_MAX;
	uint64_t t76 = 774784709LLU;

	t76 = (((x353==x354)-x355)%x356);

	if (t76 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x357 = INT64_MAX;
	uint32_t x360 = 521722U;
	static uint64_t t77 = 10075LLU;

	t77 = (((x357==x358)-x359)%x360);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x361 = 29528U;
	int32_t x362 = INT32_MIN;
	volatile int32_t x363 = -40042799;
	volatile uint32_t t78 = 3379U;

	t78 = (((x361==x362)-x363)%x364);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x365 = 8072LLU;
	int8_t x367 = 0;
	uint16_t x368 = UINT16_MAX;
	int32_t t79 = 452;

	t79 = (((x365==x366)-x367)%x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x369 = 953U;
	uint64_t x370 = 7620283390819174LLU;
	int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t80 = -3226864;

	t80 = (((x369==x370)-x371)%x372);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = 2;
	volatile int16_t x374 = -10;
	static int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t81 = 34603398270333LL;

	t81 = (((x373==x374)-x375)%x376);

	if (t81 != 32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MIN;
	uint64_t x387 = 2254205LLU;
	volatile int8_t x388 = INT8_MAX;
	uint64_t t82 = 205391079LLU;

	t82 = (((x385==x386)-x387)%x388);

	if (t82 != 47LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MIN;
	int16_t x396 = -1;
	volatile int32_t t83 = -157260827;

	t83 = (((x393==x394)-x395)%x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x398 = 81U;
	int64_t x399 = INT64_MAX;
	static volatile uint32_t x400 = UINT32_MAX;
	int64_t t84 = -265420411LL;

	t84 = (((x397==x398)-x399)%x400);

	if (t84 != -2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x401 = 2;
	static int8_t x402 = 15;
	static volatile int8_t x403 = 33;
	int8_t x404 = INT8_MIN;
	int32_t t85 = -92159800;

	t85 = (((x401==x402)-x403)%x404);

	if (t85 != -33) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x406 = INT64_MAX;
	int16_t x407 = INT16_MIN;
	volatile int16_t x408 = INT16_MAX;

	t86 = (((x405==x406)-x407)%x408);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = 1;
	int64_t x412 = INT64_MIN;
	int64_t t87 = 98807LL;

	t87 = (((x409==x410)-x411)%x412);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = INT32_MAX;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = -1;
	volatile int32_t t88 = 458219;

	t88 = (((x413==x414)-x415)%x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x417 = 6U;
	static int16_t x418 = 166;
	volatile int64_t x419 = 4LL;
	static int8_t x420 = -1;

	t89 = (((x417==x418)-x419)%x420);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x421 = 51U;
	volatile uint32_t x422 = UINT32_MAX;
	static uint64_t x423 = 21821370715569284LLU;
	uint8_t x424 = UINT8_MAX;
	volatile uint64_t t90 = 0LLU;

	t90 = (((x421==x422)-x423)%x424);

	if (t90 != 242LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = 1;
	int16_t x428 = INT16_MAX;
	int32_t t91 = -5539;

	t91 = (((x425==x426)-x427)%x428);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MIN;
	int32_t x431 = 4587879;
	static volatile uint64_t x432 = 8329076611LLU;
	volatile uint64_t t92 = 370260190210506LLU;

	t92 = (((x429==x430)-x431)%x432);

	if (t92 != 1116393414LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x437 = 179;
	uint16_t x438 = 0U;
	volatile int8_t x439 = INT8_MIN;
	volatile int32_t t93 = -588;

	t93 = (((x437==x438)-x439)%x440);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x441 = INT32_MAX;
	uint8_t x442 = 5U;
	int32_t x443 = -1;
	uint16_t x444 = 5U;

	t94 = (((x441==x442)-x443)%x444);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MIN;
	static int32_t x446 = INT32_MIN;
	int32_t x447 = 667;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t95 = 117893411U;

	t95 = (((x445==x446)-x447)%x448);

	if (t95 != 4294966629U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x449 = -1;
	volatile int16_t x450 = -1;
	volatile int16_t x451 = -1;
	volatile int64_t t96 = -93LL;

	t96 = (((x449==x450)-x451)%x452);

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x459 = -1;
	volatile uint16_t x460 = 688U;
	int32_t t97 = 74885;

	t97 = (((x457==x458)-x459)%x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = -462734;
	int8_t x463 = -2;
	int32_t t98 = -241998520;

	t98 = (((x461==x462)-x463)%x464);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x465 = INT8_MIN;
	int16_t x467 = 2;
	static int64_t x468 = INT64_MIN;
	static int64_t t99 = 966LL;

	t99 = (((x465==x466)-x467)%x468);

	if (t99 != -2LL) { NG(); } else { ; }
	
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

