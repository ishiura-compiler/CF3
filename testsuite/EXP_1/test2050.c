#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 12147925781559LLU;
volatile int8_t x4 = -1;
int16_t x10 = INT16_MAX;
static int32_t x14 = INT32_MAX;
int16_t x16 = -1;
int8_t x20 = 0;
uint16_t x21 = 4251U;
static uint16_t x26 = 286U;
volatile int64_t x30 = INT64_MIN;
volatile int16_t x32 = 0;
int32_t t8 = 1365477;
int64_t x37 = -6701800015401LL;
static uint32_t x40 = UINT32_MAX;
uint16_t x45 = UINT16_MAX;
int64_t x48 = INT64_MAX;
int8_t x49 = INT8_MIN;
static uint32_t x50 = 20664304U;
uint64_t x51 = UINT64_MAX;
static uint8_t x67 = 1U;
int8_t x68 = -1;
volatile int32_t t15 = -3042;
uint32_t x72 = UINT32_MAX;
volatile int32_t t16 = -3190768;
static int8_t x87 = INT8_MIN;
int32_t t19 = 484931543;
int8_t x113 = -17;
int64_t x115 = INT64_MIN;
volatile int32_t x119 = 125;
volatile uint64_t x120 = 49608078133478LLU;
volatile int32_t x127 = 5966772;
static int8_t x131 = 1;
int64_t x136 = -1LL;
int32_t t29 = 1;
uint32_t x138 = 374U;
uint64_t x144 = 3833318601LLU;
uint32_t x151 = 1719U;
int8_t x153 = 45;
uint64_t x156 = 4310645440358LLU;
volatile int32_t t34 = 358049;
volatile int64_t x157 = -1LL;
static int32_t x159 = 5;
int32_t t35 = 1315552;
static uint32_t x170 = UINT32_MAX;
volatile int32_t t38 = -13;
uint64_t x180 = 7618179404720619263LLU;
volatile int32_t t40 = -38;
static volatile int8_t x181 = INT8_MAX;
uint32_t x186 = 3U;
int32_t t43 = 1;
volatile int32_t t44 = 16450078;
static int8_t x200 = INT8_MIN;
uint32_t x209 = UINT32_MAX;
static uint8_t x212 = UINT8_MAX;
static uint8_t x213 = UINT8_MAX;
static int16_t x219 = INT16_MAX;
volatile int8_t x220 = INT8_MIN;
volatile int32_t t50 = -115;
int32_t x223 = 197139628;
int16_t x231 = INT16_MIN;
volatile int16_t x242 = INT16_MIN;
static volatile int32_t t56 = -922;
volatile int64_t x248 = INT64_MIN;
int32_t x250 = INT32_MIN;
uint16_t x273 = 488U;
static int32_t t64 = 128099851;
int64_t x283 = INT64_MIN;
volatile int32_t t66 = -13588742;
int64_t x292 = INT64_MIN;
int32_t t69 = -118546;
int32_t x297 = 1;
uint32_t x298 = 40400705U;
int32_t t71 = 67474438;
uint16_t x310 = UINT16_MAX;
uint16_t x314 = 12U;
uint16_t x315 = 909U;
static int32_t x317 = 4462364;
uint64_t x318 = 2LLU;
int8_t x319 = -7;
int32_t t75 = 9314329;
int16_t x323 = 55;
int64_t x336 = INT64_MIN;
static volatile int16_t x343 = INT16_MIN;
uint64_t x345 = 213LLU;
volatile int8_t x349 = -1;
int8_t x350 = -1;
int32_t t83 = -15548042;
volatile uint64_t x357 = 12396LLU;
volatile int32_t t85 = 216;
static volatile int32_t t86 = -75579153;
int8_t x375 = INT8_MIN;
volatile int32_t t90 = -27;
uint8_t x392 = UINT8_MAX;
int32_t t91 = 0;
static uint32_t x396 = UINT32_MAX;
static int32_t x397 = INT32_MAX;
static uint16_t x401 = 127U;
int16_t x410 = -10921;
int32_t t96 = -12;
uint32_t x419 = UINT32_MAX;
static uint16_t x423 = 787U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int8_t x2 = INT8_MIN;
	volatile int32_t t0 = -13;

	t0 = (((x1^x2)-x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int32_t x6 = INT32_MIN;
	uint8_t x7 = 116U;
	uint8_t x8 = 38U;
	int32_t t1 = 42;

	t1 = (((x5^x6)-x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	static int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 20;

	t2 = (((x9^x10)-x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 440;
	static volatile int64_t x15 = INT64_MAX;
	int32_t t3 = 17;

	t3 = (((x13^x14)-x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 41;
	volatile int16_t x18 = 3640;
	int8_t x19 = -1;
	volatile int32_t t4 = 25;

	t4 = (((x17^x18)-x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 39112U;
	volatile uint16_t x23 = 47U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -390756;

	t5 = (((x21^x22)-x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x27 = -1;
	int32_t x28 = -476;
	int32_t t6 = 578365120;

	t6 = (((x25^x26)-x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 657U;
	int8_t x31 = 1;
	volatile int32_t t7 = -1134726;

	t7 = (((x29^x30)-x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = INT32_MIN;
	int32_t x34 = -1;
	static int16_t x35 = INT16_MAX;
	uint8_t x36 = UINT8_MAX;

	t8 = (((x33^x34)-x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	volatile int64_t x39 = -19415LL;
	static volatile int32_t t9 = 72;

	t9 = (((x37^x38)-x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = 571LLU;
	static int32_t x43 = INT32_MIN;
	volatile int16_t x44 = -1;
	static volatile int32_t t10 = 234053341;

	t10 = (((x41^x42)-x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -29;

	t11 = (((x45^x46)-x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x52 = 25U;
	volatile int32_t t12 = 7499785;

	t12 = (((x49^x50)-x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x54 = 1626416;
	static uint32_t x55 = 1470U;
	int16_t x56 = -4;
	int32_t t13 = -20176936;

	t13 = (((x53^x54)-x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = 1U;
	volatile int32_t x62 = -17081164;
	static int16_t x63 = INT16_MAX;
	int64_t x64 = 1691987799818377301LL;
	volatile int32_t t14 = -10969;

	t14 = (((x61^x62)-x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 1576971136809525LLU;
	volatile uint64_t x66 = UINT64_MAX;

	t15 = (((x65^x66)-x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	volatile uint32_t x70 = 148612U;
	int16_t x71 = -3;

	t16 = (((x69^x70)-x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = -6725;
	uint16_t x86 = 29503U;
	volatile uint8_t x88 = 2U;
	volatile int32_t t17 = 133248;

	t17 = (((x85^x86)-x87)<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = 17;
	int32_t x90 = INT32_MIN;
	volatile uint16_t x91 = 1U;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t18 = 223;

	t18 = (((x89^x90)-x91)<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x93 = 46045056U;
	uint8_t x94 = 15U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;

	t19 = (((x93^x94)-x95)<x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;
	static volatile int32_t x100 = INT32_MIN;
	int32_t t20 = 3;

	t20 = (((x97^x98)-x99)<x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = 118U;
	int64_t x102 = -2240745258075LL;
	uint8_t x103 = 0U;
	uint8_t x104 = UINT8_MAX;
	int32_t t21 = 8;

	t21 = (((x101^x102)-x103)<x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 31088LLU;
	static uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t22 = -492;

	t22 = (((x105^x106)-x107)<x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MAX;
	int32_t x111 = INT32_MAX;
	static uint32_t x112 = 683351957U;
	int32_t t23 = 59574;

	t23 = (((x109^x110)-x111)<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x114 = 10408U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t24 = 73;

	t24 = (((x113^x114)-x115)<x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 10378205LLU;
	int32_t x118 = INT32_MIN;
	static int32_t t25 = -186468363;

	t25 = (((x117^x118)-x119)<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MAX;
	static volatile int64_t x122 = -1174LL;
	static int8_t x123 = INT8_MIN;
	int16_t x124 = 204;
	int32_t t26 = 1947;

	t26 = (((x121^x122)-x123)<x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 0LL;
	int8_t x126 = 1;
	volatile int32_t x128 = 243779181;
	volatile int32_t t27 = -11;

	t27 = (((x125^x126)-x127)<x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	int8_t x132 = -1;
	static int32_t t28 = 5;

	t28 = (((x129^x130)-x131)<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = 27;
	volatile int16_t x134 = -14;
	uint64_t x135 = 2633LLU;

	t29 = (((x133^x134)-x135)<x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	int16_t x139 = INT16_MIN;
	int16_t x140 = -1;
	static int32_t t30 = 39168;

	t30 = (((x137^x138)-x139)<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -214;
	volatile int8_t x142 = -3;
	int8_t x143 = INT8_MIN;
	volatile int32_t t31 = -3;

	t31 = (((x141^x142)-x143)<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x145 = 26LLU;
	static uint32_t x146 = 412453U;
	int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t32 = -12953;

	t32 = (((x145^x146)-x147)<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	volatile int16_t x152 = 5491;
	int32_t t33 = 26;

	t33 = (((x149^x150)-x151)<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x154 = INT8_MIN;
	uint16_t x155 = 7U;

	t34 = (((x153^x154)-x155)<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = INT32_MAX;
	static volatile int8_t x160 = INT8_MIN;

	t35 = (((x157^x158)-x159)<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile int32_t x162 = INT32_MIN;
	uint8_t x163 = 0U;
	uint16_t x164 = 218U;
	volatile int32_t t36 = 9579613;

	t36 = (((x161^x162)-x163)<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	int16_t x167 = 7;
	volatile int32_t x168 = -1;
	int32_t t37 = -7939793;

	t37 = (((x165^x166)-x167)<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = 0;

	t38 = (((x169^x170)-x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = 43785299LL;
	static uint16_t x174 = 604U;
	static uint16_t x175 = UINT16_MAX;
	static uint8_t x176 = UINT8_MAX;
	int32_t t39 = -89380;

	t39 = (((x173^x174)-x175)<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1;
	static int32_t x178 = 54645;
	uint16_t x179 = 18228U;

	t40 = (((x177^x178)-x179)<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = INT16_MIN;
	static volatile int32_t x183 = 5960;
	static int16_t x184 = -1;
	int32_t t41 = 209237594;

	t41 = (((x181^x182)-x183)<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -26025;
	int32_t t42 = 18230;

	t42 = (((x185^x186)-x187)<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	uint32_t x190 = 37U;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = INT64_MIN;

	t43 = (((x189^x190)-x191)<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -1;
	static int8_t x194 = -1;
	volatile uint8_t x195 = 2U;
	static int16_t x196 = -1;

	t44 = (((x193^x194)-x195)<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = 449LL;
	int16_t x198 = -1;
	int32_t x199 = INT32_MAX;
	volatile int32_t t45 = -4667989;

	t45 = (((x197^x198)-x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 319190004508939LL;
	volatile int16_t x202 = 94;
	uint32_t x203 = 8382304U;
	uint64_t x204 = 74302439033868610LLU;
	int32_t t46 = -803268;

	t46 = (((x201^x202)-x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = INT8_MIN;
	static int32_t x206 = INT32_MIN;
	int16_t x207 = 8;
	int8_t x208 = 9;
	int32_t t47 = -366050;

	t47 = (((x205^x206)-x207)<x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x210 = 20389U;
	int16_t x211 = INT16_MIN;
	volatile int32_t t48 = -518131;

	t48 = (((x209^x210)-x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = -544698858;
	int8_t x216 = 38;
	volatile int32_t t49 = -5238;

	t49 = (((x213^x214)-x215)<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x217 = UINT8_MAX;
	volatile int8_t x218 = -1;

	t50 = (((x217^x218)-x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x221 = 528420U;
	int64_t x222 = INT64_MAX;
	int16_t x224 = -13336;
	volatile int32_t t51 = -320060;

	t51 = (((x221^x222)-x223)<x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = -27016LL;
	volatile int8_t x226 = INT8_MAX;
	volatile uint16_t x227 = UINT16_MAX;
	volatile uint64_t x228 = UINT64_MAX;
	volatile int32_t t52 = 1;

	t52 = (((x225^x226)-x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 174U;
	uint16_t x230 = 4574U;
	uint16_t x232 = 421U;
	static volatile int32_t t53 = 3313029;

	t53 = (((x229^x230)-x231)<x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	volatile int32_t x235 = 9773171;
	uint64_t x236 = 25801167371802LLU;
	volatile int32_t t54 = -195;

	t54 = (((x233^x234)-x235)<x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = UINT8_MAX;
	volatile uint64_t x238 = 323463LLU;
	uint16_t x239 = 466U;
	int8_t x240 = -1;
	int32_t t55 = -366885114;

	t55 = (((x237^x238)-x239)<x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = UINT8_MAX;
	uint64_t x243 = 10975LLU;
	static volatile int64_t x244 = INT64_MIN;

	t56 = (((x241^x242)-x243)<x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	volatile int16_t x247 = -5;
	volatile int32_t t57 = 1;

	t57 = (((x245^x246)-x247)<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = INT64_MIN;
	uint32_t x251 = 33900642U;
	static int64_t x252 = -2623888LL;
	int32_t t58 = -7;

	t58 = (((x249^x250)-x251)<x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x253 = 0U;
	volatile uint8_t x254 = 3U;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 3865849871958326LLU;
	int32_t t59 = -78349;

	t59 = (((x253^x254)-x255)<x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -1;
	volatile uint32_t x258 = UINT32_MAX;
	int16_t x259 = INT16_MIN;
	volatile int32_t x260 = INT32_MAX;
	volatile int32_t t60 = -837376;

	t60 = (((x257^x258)-x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = 75623525510550LL;
	int8_t x262 = 8;
	volatile int16_t x263 = 1;
	int32_t x264 = INT32_MIN;
	int32_t t61 = -5;

	t61 = (((x261^x262)-x263)<x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 1064217132037453936LLU;
	uint16_t x268 = UINT16_MAX;
	int32_t t62 = -509149115;

	t62 = (((x265^x266)-x267)<x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 3163500LLU;
	volatile int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = 15875;
	int32_t t63 = 565;

	t63 = (((x269^x270)-x271)<x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x274 = INT16_MAX;
	static int64_t x275 = -1LL;
	static uint64_t x276 = 5567073371LLU;

	t64 = (((x273^x274)-x275)<x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = 1043323;
	int8_t x278 = INT8_MIN;
	int16_t x279 = 7506;
	volatile int32_t x280 = INT32_MIN;
	static int32_t t65 = -147043748;

	t65 = (((x277^x278)-x279)<x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x281 = 32663237865LLU;
	int64_t x282 = INT64_MAX;
	static int32_t x284 = 449420864;

	t66 = (((x281^x282)-x283)<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = INT8_MAX;
	int32_t t67 = -21;

	t67 = (((x285^x286)-x287)<x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = 84166;
	static uint32_t x291 = UINT32_MAX;
	static int32_t t68 = -2;

	t68 = (((x289^x290)-x291)<x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x293 = 1889643353987LL;
	static uint8_t x294 = UINT8_MAX;
	uint64_t x295 = 1298030061836885LLU;
	uint64_t x296 = UINT64_MAX;

	t69 = (((x293^x294)-x295)<x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x299 = 976964;
	volatile int32_t x300 = INT32_MIN;
	static volatile int32_t t70 = -746623460;

	t70 = (((x297^x298)-x299)<x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MIN;
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = INT8_MIN;

	t71 = (((x301^x302)-x303)<x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x305 = -1;
	static uint64_t x306 = 20LLU;
	static uint16_t x307 = 343U;
	static int16_t x308 = -941;
	static int32_t t72 = -424948054;

	t72 = (((x305^x306)-x307)<x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = 27067;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = 48356897U;
	int32_t t73 = -8;

	t73 = (((x309^x310)-x311)<x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = 182901LL;
	int32_t x316 = 51516167;
	volatile int32_t t74 = -18080458;

	t74 = (((x313^x314)-x315)<x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x320 = 4917068U;

	t75 = (((x317^x318)-x319)<x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = UINT8_MAX;
	static int16_t x322 = INT16_MIN;
	static uint16_t x324 = 78U;
	int32_t t76 = -782046600;

	t76 = (((x321^x322)-x323)<x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	static uint8_t x326 = 27U;
	uint32_t x327 = 14U;
	volatile int8_t x328 = 26;
	int32_t t77 = -1;

	t77 = (((x325^x326)-x327)<x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	static volatile uint8_t x335 = 126U;
	static int32_t t78 = -874454783;

	t78 = (((x333^x334)-x335)<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -56;
	uint16_t x338 = 29578U;
	int8_t x339 = -43;
	static int64_t x340 = 194757957209524LL;
	int32_t t79 = 14232707;

	t79 = (((x337^x338)-x339)<x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	volatile uint16_t x344 = UINT16_MAX;
	int32_t t80 = 399;

	t80 = (((x341^x342)-x343)<x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x346 = 1578U;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t81 = 8;

	t81 = (((x345^x346)-x347)<x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x351 = -1LL;
	static uint64_t x352 = 11251205444LLU;
	volatile int32_t t82 = -1;

	t82 = (((x349^x350)-x351)<x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MIN;
	volatile int64_t x354 = INT64_MAX;
	static int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MAX;

	t83 = (((x353^x354)-x355)<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x358 = INT16_MIN;
	static int32_t x359 = 1242;
	static int32_t x360 = INT32_MAX;
	static volatile int32_t t84 = -299583550;

	t84 = (((x357^x358)-x359)<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 406510LLU;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;

	t85 = (((x361^x362)-x363)<x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x365 = 14266792612114LLU;
	static int16_t x366 = -1;
	int32_t x367 = INT32_MIN;
	static int16_t x368 = INT16_MAX;

	t86 = (((x365^x366)-x367)<x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x369 = 223U;
	static int32_t x370 = INT32_MAX;
	static uint64_t x371 = 3933LLU;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t87 = 10730;

	t87 = (((x369^x370)-x371)<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x373 = -350582;
	static uint8_t x374 = 5U;
	int16_t x376 = -23;
	static volatile int32_t t88 = 5;

	t88 = (((x373^x374)-x375)<x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = 90;
	int32_t x378 = -1;
	int32_t x379 = INT32_MIN;
	int8_t x380 = 1;
	volatile int32_t t89 = -79;

	t89 = (((x377^x378)-x379)<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = UINT16_MAX;
	uint16_t x386 = 98U;
	volatile int16_t x387 = -1;
	uint16_t x388 = 7U;

	t90 = (((x385^x386)-x387)<x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 3139233300417976638LLU;
	uint16_t x390 = 31U;
	uint8_t x391 = UINT8_MAX;

	t91 = (((x389^x390)-x391)<x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -1;
	int16_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	static volatile int32_t t92 = 1323;

	t92 = (((x393^x394)-x395)<x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x398 = 9481U;
	int32_t x399 = INT32_MAX;
	int32_t x400 = -423;
	int32_t t93 = -543731937;

	t93 = (((x397^x398)-x399)<x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x402 = 1672U;
	uint8_t x403 = 2U;
	int64_t x404 = -108199715954LL;
	int32_t t94 = -1;

	t94 = (((x401^x402)-x403)<x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = UINT8_MAX;
	uint32_t x406 = 575U;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t95 = 108792;

	t95 = (((x405^x406)-x407)<x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = 3U;
	int8_t x411 = -1;
	uint32_t x412 = UINT32_MAX;

	t96 = (((x409^x410)-x411)<x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = -34548771LL;
	int64_t x414 = INT64_MIN;
	int32_t x415 = INT32_MAX;
	static volatile uint16_t x416 = 225U;
	int32_t t97 = 2868489;

	t97 = (((x413^x414)-x415)<x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x417 = -1;
	volatile int16_t x418 = 7;
	int64_t x420 = INT64_MIN;
	int32_t t98 = 149001;

	t98 = (((x417^x418)-x419)<x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MAX;
	int64_t x422 = 104603426LL;
	volatile uint8_t x424 = 19U;
	int32_t t99 = 4;

	t99 = (((x421^x422)-x423)<x424);

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

