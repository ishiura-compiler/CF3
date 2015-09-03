#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
volatile int32_t t0 = -893;
volatile int32_t x7 = 39;
static volatile int32_t t1 = -43800649;
uint64_t x15 = 762706957042604049LLU;
volatile int16_t x17 = INT16_MAX;
volatile int8_t x18 = -9;
volatile int64_t x26 = 66056743LL;
int32_t x31 = 331526;
uint32_t x32 = UINT32_MAX;
int8_t x37 = INT8_MAX;
uint64_t x40 = 2121810500498828LLU;
volatile int32_t t8 = 239;
int32_t t9 = -515183;
volatile int64_t x46 = -7541005140186LL;
static int16_t x49 = -1;
uint64_t x51 = UINT64_MAX;
int32_t x54 = -26;
int64_t x80 = INT64_MAX;
volatile int32_t t17 = -1;
int16_t x86 = 3;
static int8_t x98 = 5;
int32_t t22 = 381345094;
int32_t x108 = INT32_MIN;
int8_t x111 = INT8_MIN;
volatile uint32_t x117 = UINT32_MAX;
static int32_t t26 = 6;
volatile int64_t x136 = INT64_MIN;
uint32_t x138 = 20U;
volatile int8_t x140 = 7;
uint8_t x144 = 3U;
int32_t t32 = -873513;
volatile int32_t t34 = 2716;
static int8_t x162 = 1;
static volatile int32_t t36 = 28676;
volatile int8_t x172 = -1;
int16_t x175 = -1688;
int32_t x182 = -37660;
uint64_t x184 = 1526348022LLU;
int8_t x185 = -1;
int64_t x186 = INT64_MAX;
int16_t x188 = -24;
int16_t x192 = INT16_MIN;
static int8_t x196 = INT8_MIN;
int8_t x207 = INT8_MAX;
int16_t x217 = INT16_MAX;
uint16_t x219 = 4U;
int32_t x224 = INT32_MIN;
static int32_t x232 = INT32_MIN;
static int8_t x234 = INT8_MAX;
int32_t t53 = 111218;
static int16_t x242 = INT16_MIN;
static uint16_t x243 = UINT16_MAX;
int32_t x246 = INT32_MIN;
int64_t x248 = INT64_MAX;
int64_t x252 = -1LL;
static int8_t x254 = INT8_MAX;
volatile int32_t t58 = 237;
int8_t x261 = 28;
static int32_t t59 = -70;
volatile int8_t x268 = INT8_MAX;
uint8_t x269 = UINT8_MAX;
uint16_t x270 = 9762U;
volatile uint8_t x274 = UINT8_MAX;
volatile int32_t t64 = -1507;
int8_t x286 = -1;
int16_t x291 = -1;
int16_t x293 = INT16_MAX;
uint64_t x296 = UINT64_MAX;
int32_t t67 = 18005;
int64_t x298 = -1LL;
static volatile int16_t x300 = -1;
uint32_t x302 = 7758U;
volatile uint8_t x303 = 26U;
volatile int8_t x307 = INT8_MIN;
static int16_t x318 = INT16_MIN;
volatile int32_t t73 = -797063280;
static uint8_t x327 = 7U;
int8_t x333 = INT8_MAX;
int32_t t77 = 1;
int16_t x344 = INT16_MAX;
int32_t t78 = -206847696;
uint16_t x346 = UINT16_MAX;
static int8_t x350 = INT8_MAX;
volatile int16_t x352 = INT16_MIN;
int8_t x353 = 1;
volatile int32_t x368 = INT32_MIN;
volatile int32_t t84 = -93;
int8_t x370 = 27;
int32_t t86 = 107541;
int32_t x381 = 24;
static int32_t x382 = -42;
int32_t x385 = -1;
static uint64_t x394 = 438368765901985LLU;
int32_t x401 = INT32_MAX;
int8_t x403 = INT8_MIN;
static int8_t x404 = -1;
uint8_t x405 = 25U;
uint32_t x407 = 0U;
volatile int32_t t93 = 16;
int8_t x409 = -2;
uint8_t x411 = 1U;
int16_t x418 = INT16_MIN;
volatile int32_t t97 = -924667763;
int8_t x428 = 28;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint16_t x2 = 385U;
	uint32_t x3 = 44U;

	t0 = (((x1<=x2)-x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	static uint32_t x6 = 56280U;
	int64_t x8 = INT64_MIN;

	t1 = (((x5<=x6)-x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x13 = INT16_MAX;
	static int32_t x14 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t2 = -7;

	t2 = (((x13<=x14)-x15)<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x19 = INT8_MIN;
	int64_t x20 = 465156559257319821LL;
	int32_t t3 = -86922999;

	t3 = (((x17<=x18)-x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static volatile uint32_t x22 = 93324321U;
	uint8_t x23 = 111U;
	uint64_t x24 = 2680LLU;
	volatile int32_t t4 = -624436;

	t4 = (((x21<=x22)-x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x27 = UINT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 11987660;

	t5 = (((x25<=x26)-x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 1201;
	int64_t x30 = INT64_MIN;
	static int32_t t6 = -332628;

	t6 = (((x29<=x30)-x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -4886LL;
	volatile uint8_t x34 = 37U;
	uint64_t x35 = 147LLU;
	static int32_t x36 = INT32_MAX;
	int32_t t7 = 26;

	t7 = (((x33<=x34)-x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -1425;
	int8_t x39 = 0;

	t8 = (((x37<=x38)-x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = UINT16_MAX;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 814U;

	t9 = (((x41<=x42)-x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	uint16_t x47 = 14256U;
	static int8_t x48 = -1;
	int32_t t10 = -106125608;

	t10 = (((x45<=x46)-x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 14689999LLU;
	int16_t x52 = -1;
	static volatile int32_t t11 = -124620;

	t11 = (((x49<=x50)-x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 91630692U;
	static uint16_t x55 = 969U;
	int16_t x56 = INT16_MIN;
	static int32_t t12 = 951595;

	t12 = (((x53<=x54)-x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	uint16_t x58 = UINT16_MAX;
	volatile int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile int32_t t13 = 1194;

	t13 = (((x57<=x58)-x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	static uint32_t x62 = UINT32_MAX;
	volatile uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 1U;
	volatile int32_t t14 = -22813;

	t14 = (((x61<=x62)-x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = 827216408LL;
	static uint16_t x66 = 1U;
	int32_t x67 = -1;
	uint64_t x68 = 25373LLU;
	volatile int32_t t15 = 248;

	t15 = (((x65<=x66)-x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	int32_t x78 = -1;
	int64_t x79 = INT64_MAX;
	volatile int32_t t16 = -12;

	t16 = (((x77<=x78)-x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = -1;
	uint64_t x83 = 100193358922479LLU;
	int32_t x84 = 0;

	t17 = (((x81<=x82)-x83)<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x85 = 1942U;
	static int16_t x87 = INT16_MIN;
	uint32_t x88 = 1908976U;
	static int32_t t18 = -5360861;

	t18 = (((x85<=x86)-x87)<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = -1;
	int32_t x90 = -503736;
	static volatile int64_t x91 = -2424719542LL;
	static int16_t x92 = 9;
	int32_t t19 = 8172;

	t19 = (((x89<=x90)-x91)<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 56U;
	int16_t x94 = 20;
	int64_t x95 = 52506957212840468LL;
	int32_t x96 = -1;
	static volatile int32_t t20 = -7;

	t20 = (((x93<=x94)-x95)<x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = -1;
	uint32_t x99 = UINT32_MAX;
	int32_t x100 = -1;
	static int32_t t21 = -347314;

	t21 = (((x97<=x98)-x99)<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = -1;
	int8_t x102 = -6;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = -1;

	t22 = (((x101<=x102)-x103)<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 71892830;
	uint32_t x106 = 201U;
	uint16_t x107 = 29532U;
	static int32_t t23 = 9473;

	t23 = (((x105<=x106)-x107)<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	volatile uint16_t x110 = 1823U;
	int64_t x112 = -1LL;
	int32_t t24 = 30;

	t24 = (((x109<=x110)-x111)<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x113 = UINT64_MAX;
	volatile int64_t x114 = INT64_MIN;
	uint8_t x115 = 109U;
	static volatile int16_t x116 = -1;
	int32_t t25 = 0;

	t25 = (((x113<=x114)-x115)<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x118 = -1;
	uint64_t x119 = 11030279011LLU;
	uint64_t x120 = 52LLU;

	t26 = (((x117<=x118)-x119)<x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x121 = 966;
	volatile int32_t x122 = -6;
	volatile uint16_t x123 = 8U;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t27 = -67;

	t27 = (((x121<=x122)-x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MAX;
	int64_t x126 = -1LL;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 2U;
	static volatile int32_t t28 = -108707609;

	t28 = (((x125<=x126)-x127)<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = -5;
	uint32_t x130 = 32795U;
	uint8_t x131 = 3U;
	int64_t x132 = -4186908502433668793LL;
	int32_t t29 = 8564;

	t29 = (((x129<=x130)-x131)<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = -52413LL;
	int64_t x135 = 1569689221709691744LL;
	volatile int32_t t30 = -1011;

	t30 = (((x133<=x134)-x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	volatile int64_t x139 = -14030208LL;
	volatile int32_t t31 = 55;

	t31 = (((x137<=x138)-x139)<x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x141 = INT64_MAX;
	int16_t x142 = INT16_MIN;
	static int16_t x143 = 1;

	t32 = (((x141<=x142)-x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = 35515U;
	volatile int32_t x146 = INT32_MIN;
	volatile int64_t x147 = INT64_MAX;
	uint32_t x148 = 2U;
	int32_t t33 = -12989229;

	t33 = (((x145<=x146)-x147)<x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = 9128U;
	volatile int16_t x154 = INT16_MAX;
	static int16_t x155 = -775;
	uint16_t x156 = 6541U;

	t34 = (((x153<=x154)-x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = 8;
	uint32_t x158 = UINT32_MAX;
	static int32_t x159 = -1;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t35 = -628582;

	t35 = (((x157<=x158)-x159)<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x161 = INT16_MIN;
	int64_t x163 = 4032LL;
	volatile int64_t x164 = INT64_MAX;

	t36 = (((x161<=x162)-x163)<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x165 = 12003U;
	uint32_t x166 = 0U;
	uint32_t x167 = 5157653U;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t37 = -847;

	t37 = (((x165<=x166)-x167)<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 1274LLU;
	int32_t x170 = 8986;
	int16_t x171 = INT16_MAX;
	int32_t t38 = 1953407;

	t38 = (((x169<=x170)-x171)<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MAX;
	int32_t x176 = INT32_MIN;
	int32_t t39 = -178589;

	t39 = (((x173<=x174)-x175)<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 29234U;
	uint32_t x183 = 23935937U;
	volatile int32_t t40 = 27696;

	t40 = (((x181<=x182)-x183)<x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x187 = UINT32_MAX;
	static int32_t t41 = 0;

	t41 = (((x185<=x186)-x187)<x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -1;
	static int64_t x190 = 1374LL;
	volatile uint64_t x191 = 693383296LLU;
	int32_t t42 = 12035182;

	t42 = (((x189<=x190)-x191)<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -7938LL;
	int8_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	static int32_t t43 = 86;

	t43 = (((x193<=x194)-x195)<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -39614424;
	uint8_t x198 = UINT8_MAX;
	static volatile uint32_t x199 = 440U;
	static int8_t x200 = INT8_MAX;
	volatile int32_t t44 = -131255261;

	t44 = (((x197<=x198)-x199)<x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 0U;
	int32_t x202 = INT32_MIN;
	int8_t x203 = -1;
	static volatile int16_t x204 = INT16_MAX;
	volatile int32_t t45 = 4;

	t45 = (((x201<=x202)-x203)<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x205 = UINT32_MAX;
	uint16_t x206 = 42U;
	int16_t x208 = -1;
	volatile int32_t t46 = 2437748;

	t46 = (((x205<=x206)-x207)<x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = 22533671977LL;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 150995769988679LLU;
	static volatile int64_t x212 = -1LL;
	int32_t t47 = 2;

	t47 = (((x209<=x210)-x211)<x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x218 = 7892;
	int32_t x220 = -12438728;
	volatile int32_t t48 = 267784;

	t48 = (((x217<=x218)-x219)<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MIN;
	static uint64_t x222 = UINT64_MAX;
	static uint64_t x223 = 7401821221557438808LLU;
	volatile int32_t t49 = -2;

	t49 = (((x221<=x222)-x223)<x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = -112671043788049LL;
	int8_t x226 = -1;
	volatile int32_t x227 = -1;
	uint32_t x228 = 1106820390U;
	int32_t t50 = -1432548;

	t50 = (((x225<=x226)-x227)<x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x229 = -1;
	uint64_t x230 = 171858070298934LLU;
	int64_t x231 = INT64_MAX;
	int32_t t51 = 838;

	t51 = (((x229<=x230)-x231)<x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = 0;
	int32_t x235 = INT32_MAX;
	static int32_t x236 = 16846;
	volatile int32_t t52 = -890;

	t52 = (((x233<=x234)-x235)<x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = 2;
	volatile int64_t x238 = INT64_MAX;
	int16_t x239 = 4;
	volatile uint8_t x240 = 3U;

	t53 = (((x237<=x238)-x239)<x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x241 = 30579LLU;
	static uint16_t x244 = 9U;
	volatile int32_t t54 = 13315;

	t54 = (((x241<=x242)-x243)<x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x245 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t55 = 0;

	t55 = (((x245<=x246)-x247)<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MIN;
	static int16_t x251 = -724;
	int32_t t56 = 669425;

	t56 = (((x249<=x250)-x251)<x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x253 = INT64_MIN;
	static int8_t x255 = -6;
	volatile int16_t x256 = -1;
	volatile int32_t t57 = -876881;

	t57 = (((x253<=x254)-x255)<x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -1;
	uint8_t x258 = 17U;
	uint16_t x259 = UINT16_MAX;
	uint16_t x260 = 4U;

	t58 = (((x257<=x258)-x259)<x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x262 = -1;
	uint16_t x263 = 1468U;
	int64_t x264 = -1LL;

	t59 = (((x261<=x262)-x263)<x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x265 = 518U;
	volatile int32_t x266 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	volatile int32_t t60 = 9;

	t60 = (((x265<=x266)-x267)<x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x271 = 4U;
	uint64_t x272 = UINT64_MAX;
	int32_t t61 = -108;

	t61 = (((x269<=x270)-x271)<x272);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = INT16_MAX;
	int64_t x275 = -5914228659948LL;
	static int64_t x276 = INT64_MIN;
	int32_t t62 = 5865889;

	t62 = (((x273<=x274)-x275)<x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	static uint32_t x278 = 4889385U;
	int32_t x279 = -80800;
	static int8_t x280 = -1;
	int32_t t63 = -43681;

	t63 = (((x277<=x278)-x279)<x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = INT64_MIN;
	static int8_t x282 = 5;
	uint8_t x283 = 6U;
	uint32_t x284 = 2U;

	t64 = (((x281<=x282)-x283)<x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MIN;
	int8_t x287 = -1;
	int16_t x288 = -8866;
	static int32_t t65 = 102;

	t65 = (((x285<=x286)-x287)<x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x289 = 1;
	uint8_t x290 = UINT8_MAX;
	int8_t x292 = 2;
	volatile int32_t t66 = 196479;

	t66 = (((x289<=x290)-x291)<x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MIN;

	t67 = (((x293<=x294)-x295)<x296);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 0U;
	int16_t x299 = INT16_MIN;
	int32_t t68 = -48538385;

	t68 = (((x297<=x298)-x299)<x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x301 = INT8_MIN;
	static uint16_t x304 = 12U;
	volatile int32_t t69 = 6800;

	t69 = (((x301<=x302)-x303)<x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x305 = INT32_MIN;
	uint32_t x306 = 45U;
	volatile int64_t x308 = -1LL;
	static volatile int32_t t70 = 12467801;

	t70 = (((x305<=x306)-x307)<x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = 5U;
	uint64_t x311 = 78737LLU;
	static int64_t x312 = 11129369335225361LL;
	int32_t t71 = -431;

	t71 = (((x309<=x310)-x311)<x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 0LL;
	static volatile uint64_t x319 = UINT64_MAX;
	static uint8_t x320 = 18U;
	volatile int32_t t72 = 0;

	t72 = (((x317<=x318)-x319)<x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	static uint32_t x323 = 6201U;
	int64_t x324 = INT64_MIN;

	t73 = (((x321<=x322)-x323)<x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x326 = 251080739U;
	int32_t x328 = -53;
	int32_t t74 = 276080;

	t74 = (((x325<=x326)-x327)<x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MIN;
	volatile int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t75 = 1;

	t75 = (((x329<=x330)-x331)<x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x334 = 144429U;
	volatile int16_t x335 = 84;
	static uint16_t x336 = 4U;
	static int32_t t76 = -117;

	t76 = (((x333<=x334)-x335)<x336);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 6656052U;
	int8_t x338 = INT8_MIN;
	volatile uint16_t x339 = UINT16_MAX;
	static uint32_t x340 = 210099U;

	t77 = (((x337<=x338)-x339)<x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x341 = UINT8_MAX;
	uint16_t x342 = 3177U;
	int16_t x343 = INT16_MAX;

	t78 = (((x341<=x342)-x343)<x344);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MIN;
	int32_t x347 = INT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t79 = -46614;

	t79 = (((x345<=x346)-x347)<x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = 933851014353LL;
	int16_t x351 = -3;
	volatile int32_t t80 = 197494929;

	t80 = (((x349<=x350)-x351)<x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x354 = INT32_MAX;
	uint64_t x355 = 1LLU;
	static uint32_t x356 = 309370825U;
	volatile int32_t t81 = -1640173;

	t81 = (((x353<=x354)-x355)<x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x357 = -1LL;
	uint32_t x358 = UINT32_MAX;
	volatile uint64_t x359 = 58473360970LLU;
	static int8_t x360 = -1;
	static volatile int32_t t82 = -359705804;

	t82 = (((x357<=x358)-x359)<x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MIN;
	static uint32_t x362 = 7268U;
	int16_t x363 = -4696;
	uint8_t x364 = 5U;
	volatile int32_t t83 = -16566;

	t83 = (((x361<=x362)-x363)<x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x365 = 66U;
	static int64_t x366 = 6987672890574LL;
	volatile int8_t x367 = -1;

	t84 = (((x365<=x366)-x367)<x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = 47U;
	volatile uint8_t x371 = 0U;
	static int16_t x372 = -1;
	volatile int32_t t85 = -1555330;

	t85 = (((x369<=x370)-x371)<x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MIN;
	volatile int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;

	t86 = (((x373<=x374)-x375)<x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x377 = 263359287LLU;
	static volatile int32_t x378 = INT32_MIN;
	static volatile uint64_t x379 = 3753492041358LLU;
	static volatile uint64_t x380 = 96342LLU;
	volatile int32_t t87 = 171277;

	t87 = (((x377<=x378)-x379)<x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x383 = -1;
	int32_t x384 = INT32_MIN;
	volatile int32_t t88 = 15372662;

	t88 = (((x381<=x382)-x383)<x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x386 = -20;
	volatile int32_t x387 = -831745;
	volatile int32_t x388 = 393;
	int32_t t89 = -280;

	t89 = (((x385<=x386)-x387)<x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = 185424477055220LLU;
	uint32_t x390 = 14U;
	int16_t x391 = INT16_MAX;
	static int32_t x392 = INT32_MAX;
	static volatile int32_t t90 = 1;

	t90 = (((x389<=x390)-x391)<x392);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x393 = INT16_MIN;
	static int8_t x395 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t91 = 10561;

	t91 = (((x393<=x394)-x395)<x396);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x402 = 123933U;
	volatile int32_t t92 = -4662969;

	t92 = (((x401<=x402)-x403)<x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x406 = INT8_MIN;
	int16_t x408 = -1;

	t93 = (((x405<=x406)-x407)<x408);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x410 = UINT32_MAX;
	int8_t x412 = INT8_MAX;
	volatile int32_t t94 = -19389665;

	t94 = (((x409<=x410)-x411)<x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = 0U;
	int8_t x414 = INT8_MIN;
	int16_t x415 = -228;
	uint8_t x416 = 60U;
	static volatile int32_t t95 = 11249956;

	t95 = (((x413<=x414)-x415)<x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MIN;
	int16_t x419 = -9;
	static int8_t x420 = INT8_MAX;
	volatile int32_t t96 = -20;

	t96 = (((x417<=x418)-x419)<x420);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MAX;
	uint16_t x422 = 29U;
	uint32_t x423 = 3601613U;
	int64_t x424 = INT64_MAX;

	t97 = (((x421<=x422)-x423)<x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MAX;
	static int64_t x426 = INT64_MIN;
	int64_t x427 = -1LL;
	volatile int32_t t98 = 11797;

	t98 = (((x425<=x426)-x427)<x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = 0;
	static int8_t x430 = 1;
	int64_t x431 = -1LL;
	int8_t x432 = INT8_MIN;
	static int32_t t99 = -12523393;

	t99 = (((x429<=x430)-x431)<x432);

	if (t99 != 0) { NG(); } else { ; }
	
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

