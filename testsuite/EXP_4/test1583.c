#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x32 = -1;
volatile int64_t x34 = 207098133489LL;
volatile int32_t t3 = 7;
int8_t x43 = 1;
volatile int32_t t4 = 31492660;
static int32_t x70 = INT32_MAX;
volatile uint8_t x83 = 0U;
int8_t x88 = -1;
static int32_t t9 = 4;
uint32_t x105 = 56295170U;
uint8_t x112 = UINT8_MAX;
static volatile int16_t x113 = INT16_MIN;
int32_t x116 = -4842;
int16_t x124 = 340;
volatile int32_t t14 = 1;
volatile int64_t x138 = INT64_MIN;
int8_t x145 = 13;
int32_t x150 = -5119543;
volatile uint32_t x151 = UINT32_MAX;
static int32_t x153 = INT32_MIN;
static volatile int16_t x162 = INT16_MIN;
static int32_t t20 = 44494252;
int32_t x167 = -1;
uint64_t x174 = UINT64_MAX;
uint8_t x175 = 3U;
static volatile int32_t t22 = -247;
volatile int64_t x179 = INT64_MIN;
int32_t t25 = 1;
int64_t x206 = -4252138165LL;
int8_t x207 = INT8_MAX;
int16_t x209 = -1;
uint16_t x224 = 19433U;
int64_t x231 = INT64_MIN;
static volatile int32_t t30 = 9308;
static int64_t x243 = -1LL;
static uint64_t x244 = UINT64_MAX;
int16_t x267 = 3;
int64_t x270 = -1236820757280581364LL;
static uint64_t x273 = 59541692212823669LLU;
int16_t x274 = INT16_MIN;
static int16_t x275 = 15731;
static int8_t x302 = INT8_MAX;
volatile int32_t x305 = -58458;
static uint16_t x317 = 2U;
uint8_t x320 = UINT8_MAX;
int8_t x322 = INT8_MAX;
uint64_t x324 = 4738239369410LLU;
static int32_t x325 = 267;
uint64_t x329 = 410385278509307LLU;
volatile int32_t t44 = 863;
uint16_t x356 = 23U;
volatile int32_t t46 = -415225928;
int8_t x365 = INT8_MIN;
uint32_t x367 = UINT32_MAX;
static uint64_t x368 = UINT64_MAX;
static volatile int32_t t47 = -10;
uint32_t x369 = UINT32_MAX;
uint8_t x382 = 22U;
volatile int32_t t50 = -278499;
static int16_t x390 = -95;
int16_t x397 = 10;
int32_t x439 = INT32_MIN;
static volatile int32_t t59 = 259506;
volatile uint64_t x461 = UINT64_MAX;
int8_t x464 = -1;
int32_t t60 = -63993;
static int32_t x473 = -19810505;
int16_t x475 = INT16_MIN;
int16_t x478 = -1;
int64_t x482 = INT64_MIN;
int16_t x483 = -1;
int32_t t63 = 1;
static volatile uint32_t x495 = UINT32_MAX;
int32_t t64 = -23;
static int16_t x502 = INT16_MAX;
int8_t x511 = -1;
int32_t t67 = 1;
static int32_t x524 = INT32_MAX;
int32_t t69 = 3;
int8_t x539 = INT8_MIN;
volatile int32_t t71 = 445235;
static volatile int8_t x568 = INT8_MAX;
uint8_t x575 = UINT8_MAX;
uint64_t x576 = 4453753300475769883LLU;
volatile int64_t x592 = INT64_MAX;
uint8_t x598 = 0U;
int8_t x607 = INT8_MIN;
uint8_t x615 = UINT8_MAX;
uint32_t x639 = 517207U;
uint16_t x645 = 15703U;
static int64_t x646 = -1LL;
int32_t t88 = -11;
int16_t x672 = INT16_MIN;
int32_t t91 = -309214;
int64_t x692 = 254118677173LL;
uint32_t x710 = 219366355U;
int32_t t94 = 22177;
uint8_t x728 = 2U;
volatile int32_t t97 = -1088635;
int16_t x729 = -63;
int32_t x736 = -1;


void f0(void) {
	int8_t x5 = -1;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = 1456418314U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 11144324;

	t0 = (x5<=(x6%(x7<=x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x13 = UINT16_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	volatile int8_t x15 = INT8_MIN;
	uint8_t x16 = 0U;
	volatile int32_t t1 = -431;

	t1 = (x13<=(x14%(x15<=x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x29 = 1U;
	volatile int16_t x30 = 1;
	int16_t x31 = -1;
	static int32_t t2 = -798435;

	t2 = (x29<=(x30%(x31<=x32)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = -1;
	volatile int8_t x35 = -60;
	volatile int16_t x36 = 2070;

	t3 = (x33<=(x34%(x35<=x36)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x41 = 1499;
	volatile int16_t x42 = 10;
	int32_t x44 = INT32_MAX;

	t4 = (x41<=(x42%(x43<=x44)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x57 = 61U;
	int16_t x58 = 1;
	int64_t x59 = -1LL;
	volatile int64_t x60 = 419132688LL;
	volatile int32_t t5 = -10229;

	t5 = (x57<=(x58%(x59<=x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x65 = 13;
	uint64_t x66 = 466919LLU;
	uint32_t x67 = 2390U;
	static int16_t x68 = INT16_MAX;
	int32_t t6 = 112912374;

	t6 = (x65<=(x66%(x67<=x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x69 = INT32_MAX;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MAX;
	int32_t t7 = 4184905;

	t7 = (x69<=(x70%(x71<=x72)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x81 = -76;
	static int16_t x82 = -58;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int32_t t8 = -1994792;

	t8 = (x81<=(x82%(x83<=x84)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x85 = -876793464;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;

	t9 = (x85<=(x86%(x87<=x88)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x97 = -1;
	uint64_t x98 = 352091031181542LLU;
	int8_t x99 = INT8_MIN;
	static volatile int32_t x100 = INT32_MAX;
	int32_t t10 = -15554416;

	t10 = (x97<=(x98%(x99<=x100)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x106 = 1U;
	uint16_t x107 = 41U;
	volatile int32_t x108 = 7110395;
	volatile int32_t t11 = 48239;

	t11 = (x105<=(x106%(x107<=x108)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x110 = 2U;
	static int32_t x111 = INT32_MIN;
	volatile int32_t t12 = -182;

	t12 = (x109<=(x110%(x111<=x112)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x114 = 401U;
	uint64_t x115 = 191LLU;
	volatile int32_t t13 = 429228;

	t13 = (x113<=(x114%(x115<=x116)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = UINT32_MAX;
	int16_t x123 = INT16_MIN;

	t14 = (x121<=(x122%(x123<=x124)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = INT8_MIN;
	static int16_t x127 = -1;
	volatile uint8_t x128 = 118U;
	volatile int32_t t15 = 41301030;

	t15 = (x125<=(x126%(x127<=x128)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x137 = -1;
	int64_t x139 = -1LL;
	volatile uint32_t x140 = 33028U;
	int32_t t16 = -76;

	t16 = (x137<=(x138%(x139<=x140)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x146 = INT8_MAX;
	uint16_t x147 = 2U;
	uint16_t x148 = 527U;
	volatile int32_t t17 = -19932;

	t17 = (x145<=(x146%(x147<=x148)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x149 = -13;
	int32_t x152 = -1;
	static int32_t t18 = -10;

	t18 = (x149<=(x150%(x151<=x152)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x154 = 0LL;
	int8_t x155 = 14;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t19 = 362;

	t19 = (x153<=(x154%(x155<=x156)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = -63;
	uint32_t x163 = 127348684U;
	uint64_t x164 = UINT64_MAX;

	t20 = (x161<=(x162%(x163<=x164)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x165 = 1531515164U;
	int8_t x166 = INT8_MIN;
	static int8_t x168 = 13;
	int32_t t21 = -2231;

	t21 = (x165<=(x166%(x167<=x168)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x176 = INT32_MAX;

	t22 = (x173<=(x174%(x175<=x176)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x177 = 4111656U;
	volatile int8_t x178 = -1;
	uint64_t x180 = UINT64_MAX;
	static volatile int32_t t23 = -57104;

	t23 = (x177<=(x178%(x179<=x180)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MAX;
	int32_t t24 = -125076;

	t24 = (x189<=(x190%(x191<=x192)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x193 = 13278012291026LLU;
	uint8_t x194 = 1U;
	int8_t x195 = 15;
	uint16_t x196 = 97U;

	t25 = (x193<=(x194%(x195<=x196)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x201 = 6U;
	static uint32_t x202 = 8112U;
	volatile uint64_t x203 = UINT64_MAX;
	static int16_t x204 = -1;
	volatile int32_t t26 = -2852;

	t26 = (x201<=(x202%(x203<=x204)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x205 = INT64_MIN;
	volatile uint16_t x208 = 1024U;
	volatile int32_t t27 = -47157886;

	t27 = (x205<=(x206%(x207<=x208)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x210 = -1;
	volatile uint8_t x211 = 27U;
	int64_t x212 = 2380838992683343212LL;
	static volatile int32_t t28 = 1;

	t28 = (x209<=(x210%(x211<=x212)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x221 = -138187527804933241LL;
	uint32_t x222 = 155U;
	volatile int32_t x223 = INT32_MIN;
	static volatile int32_t t29 = -13995;

	t29 = (x221<=(x222%(x223<=x224)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x229 = 1U;
	int16_t x230 = -84;
	static uint64_t x232 = UINT64_MAX;

	t30 = (x229<=(x230%(x231<=x232)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x233 = 86660832275LLU;
	uint64_t x234 = UINT64_MAX;
	volatile int8_t x235 = INT8_MIN;
	uint16_t x236 = 5U;
	static volatile int32_t t31 = 114392;

	t31 = (x233<=(x234%(x235<=x236)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = 21;
	int32_t t32 = -3546086;

	t32 = (x241<=(x242%(x243<=x244)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x249 = -28;
	uint16_t x250 = UINT16_MAX;
	static int32_t x251 = INT32_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t33 = -1;

	t33 = (x249<=(x250%(x251<=x252)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x265 = INT64_MAX;
	uint16_t x266 = 281U;
	int32_t x268 = INT32_MAX;
	volatile int32_t t34 = 43939500;

	t34 = (x265<=(x266%(x267<=x268)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x269 = -1;
	volatile int8_t x271 = INT8_MAX;
	static int8_t x272 = INT8_MAX;
	volatile int32_t t35 = -232672;

	t35 = (x269<=(x270%(x271<=x272)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x276 = UINT32_MAX;
	int32_t t36 = 461;

	t36 = (x273<=(x274%(x275<=x276)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x277 = 89U;
	uint16_t x278 = 3507U;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MAX;
	static int32_t t37 = -13;

	t37 = (x277<=(x278%(x279<=x280)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x301 = -28;
	static int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t38 = -14;

	t38 = (x301<=(x302%(x303<=x304)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x306 = INT8_MIN;
	int16_t x307 = 1269;
	uint32_t x308 = 1105685U;
	int32_t t39 = -27014;

	t39 = (x305<=(x306%(x307<=x308)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x318 = INT8_MAX;
	int8_t x319 = -2;
	volatile int32_t t40 = 4829;

	t40 = (x317<=(x318%(x319<=x320)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x323 = 15LLU;
	static volatile int32_t t41 = -541017511;

	t41 = (x321<=(x322%(x323<=x324)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x326 = 104842147285322035LLU;
	int8_t x327 = INT8_MIN;
	static int32_t x328 = -1;
	int32_t t42 = 9823;

	t42 = (x325<=(x326%(x327<=x328)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x330 = 12;
	static uint8_t x331 = UINT8_MAX;
	static volatile uint32_t x332 = 3508U;
	int32_t t43 = 27;

	t43 = (x329<=(x330%(x331<=x332)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x341 = 265;
	int32_t x342 = INT32_MAX;
	uint64_t x343 = 5848LLU;
	static int8_t x344 = INT8_MIN;

	t44 = (x341<=(x342%(x343<=x344)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x349 = -1LL;
	int8_t x350 = 0;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = INT32_MAX;
	int32_t t45 = -519822;

	t45 = (x349<=(x350%(x351<=x352)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x353 = 1007555;
	int8_t x354 = -1;
	static uint32_t x355 = 6U;

	t46 = (x353<=(x354%(x355<=x356)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x366 = INT64_MIN;

	t47 = (x365<=(x366%(x367<=x368)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	volatile int32_t t48 = -357;

	t48 = (x369<=(x370%(x371<=x372)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x381 = 5389U;
	volatile int64_t x383 = -1LL;
	int16_t x384 = -1;
	static volatile int32_t t49 = 6;

	t49 = (x381<=(x382%(x383<=x384)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x385 = INT16_MAX;
	static int64_t x386 = INT64_MAX;
	uint16_t x387 = 2U;
	volatile int64_t x388 = INT64_MAX;

	t50 = (x385<=(x386%(x387<=x388)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x389 = INT8_MAX;
	static volatile uint8_t x391 = UINT8_MAX;
	static int64_t x392 = 1745LL;
	volatile int32_t t51 = 4486360;

	t51 = (x389<=(x390%(x391<=x392)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x393 = INT16_MAX;
	static uint64_t x394 = UINT64_MAX;
	int64_t x395 = 36912926LL;
	static uint64_t x396 = UINT64_MAX;
	static int32_t t52 = -99869362;

	t52 = (x393<=(x394%(x395<=x396)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x398 = 197199294;
	int8_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	int32_t t53 = -27;

	t53 = (x397<=(x398%(x399<=x400)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x409 = -5;
	int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = UINT64_MAX;
	int32_t t54 = 45;

	t54 = (x409<=(x410%(x411<=x412)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x429 = 4;
	uint16_t x430 = UINT16_MAX;
	static volatile int16_t x431 = -1;
	int8_t x432 = 5;
	int32_t t55 = -49;

	t55 = (x429<=(x430%(x431<=x432)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x433 = 159;
	static int32_t x434 = -7764266;
	static int16_t x435 = INT16_MIN;
	uint8_t x436 = 54U;
	volatile int32_t t56 = -13405198;

	t56 = (x433<=(x434%(x435<=x436)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x437 = -832044296;
	int64_t x438 = INT64_MIN;
	int16_t x440 = INT16_MIN;
	static int32_t t57 = -221;

	t57 = (x437<=(x438%(x439<=x440)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x445 = INT8_MIN;
	uint64_t x446 = 265989290499LLU;
	uint16_t x447 = 27U;
	uint32_t x448 = 346U;
	int32_t t58 = -58383554;

	t58 = (x445<=(x446%(x447<=x448)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x453 = -1;
	uint8_t x454 = 57U;
	uint32_t x455 = 4U;
	int16_t x456 = INT16_MIN;

	t59 = (x453<=(x454%(x455<=x456)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x462 = 16;
	volatile uint32_t x463 = UINT32_MAX;

	t60 = (x461<=(x462%(x463<=x464)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x474 = -1;
	uint32_t x476 = UINT32_MAX;
	static int32_t t61 = 3736;

	t61 = (x473<=(x474%(x475<=x476)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x477 = INT64_MAX;
	static volatile int32_t x479 = -1;
	int64_t x480 = 52LL;
	int32_t t62 = 3;

	t62 = (x477<=(x478%(x479<=x480)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x481 = UINT32_MAX;
	volatile uint16_t x484 = 13U;

	t63 = (x481<=(x482%(x483<=x484)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x493 = 302389418U;
	uint8_t x494 = 7U;
	volatile uint64_t x496 = UINT64_MAX;

	t64 = (x493<=(x494%(x495<=x496)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x497 = UINT8_MAX;
	volatile uint8_t x498 = UINT8_MAX;
	int8_t x499 = -12;
	uint16_t x500 = UINT16_MAX;
	int32_t t65 = -905;

	t65 = (x497<=(x498%(x499<=x500)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x501 = INT32_MAX;
	int8_t x503 = -1;
	int16_t x504 = 0;
	volatile int32_t t66 = -95293704;

	t66 = (x501<=(x502%(x503<=x504)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x509 = INT8_MAX;
	static int32_t x510 = INT32_MIN;
	static volatile int16_t x512 = INT16_MAX;

	t67 = (x509<=(x510%(x511<=x512)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x521 = INT64_MIN;
	static int64_t x522 = INT64_MIN;
	uint32_t x523 = 1946U;
	volatile int32_t t68 = 13069;

	t68 = (x521<=(x522%(x523<=x524)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x525 = 11U;
	uint32_t x526 = 690939U;
	int64_t x527 = 3LL;
	static volatile uint16_t x528 = 12U;

	t69 = (x525<=(x526%(x527<=x528)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x529 = -1LL;
	static uint64_t x530 = 793LLU;
	volatile uint8_t x531 = 1U;
	int32_t x532 = INT32_MAX;
	volatile int32_t t70 = 30617;

	t70 = (x529<=(x530%(x531<=x532)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x537 = INT16_MIN;
	volatile int16_t x538 = INT16_MIN;
	static int8_t x540 = -1;

	t71 = (x537<=(x538%(x539<=x540)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x541 = 1443645U;
	int64_t x542 = 17812LL;
	int64_t x543 = -286359LL;
	static int8_t x544 = 1;
	volatile int32_t t72 = -92254;

	t72 = (x541<=(x542%(x543<=x544)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x557 = 1U;
	int64_t x558 = INT64_MIN;
	uint64_t x559 = 41623851817LLU;
	int64_t x560 = -1089204870337LL;
	int32_t t73 = -290;

	t73 = (x557<=(x558%(x559<=x560)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x561 = 3U;
	static int8_t x562 = 39;
	int8_t x563 = -1;
	static int64_t x564 = -1LL;
	int32_t t74 = -6598941;

	t74 = (x561<=(x562%(x563<=x564)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x565 = INT64_MIN;
	int8_t x566 = 6;
	volatile int32_t x567 = -77580;
	int32_t t75 = -153889402;

	t75 = (x565<=(x566%(x567<=x568)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x573 = 44;
	static uint32_t x574 = 78776U;
	volatile int32_t t76 = 159;

	t76 = (x573<=(x574%(x575<=x576)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x589 = UINT8_MAX;
	int64_t x590 = -1LL;
	volatile int32_t x591 = -7676366;
	int32_t t77 = 250;

	t77 = (x589<=(x590%(x591<=x592)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x593 = -52;
	int8_t x594 = -1;
	volatile int64_t x595 = -1LL;
	int16_t x596 = INT16_MAX;
	volatile int32_t t78 = 529;

	t78 = (x593<=(x594%(x595<=x596)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x597 = 30U;
	int16_t x599 = -1;
	volatile uint64_t x600 = UINT64_MAX;
	volatile int32_t t79 = 2;

	t79 = (x597<=(x598%(x599<=x600)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x601 = -1;
	int32_t x602 = 52486;
	uint64_t x603 = 4643322107LLU;
	int8_t x604 = INT8_MIN;
	volatile int32_t t80 = 30652671;

	t80 = (x601<=(x602%(x603<=x604)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x605 = 4239;
	static uint16_t x606 = 27U;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t81 = -26827;

	t81 = (x605<=(x606%(x607<=x608)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x613 = 16;
	uint32_t x614 = 236320316U;
	volatile int32_t x616 = 470471932;
	volatile int32_t t82 = -178;

	t82 = (x613<=(x614%(x615<=x616)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x617 = INT16_MIN;
	int8_t x618 = -1;
	static volatile uint32_t x619 = 124580U;
	int8_t x620 = INT8_MIN;
	int32_t t83 = 69999;

	t83 = (x617<=(x618%(x619<=x620)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x637 = INT16_MIN;
	int8_t x638 = INT8_MIN;
	int64_t x640 = 122003338509388LL;
	volatile int32_t t84 = -3;

	t84 = (x637<=(x638%(x639<=x640)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x641 = 8524343U;
	int64_t x642 = -1LL;
	int8_t x643 = -1;
	uint16_t x644 = UINT16_MAX;
	int32_t t85 = -229919956;

	t85 = (x641<=(x642%(x643<=x644)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x647 = INT16_MIN;
	static uint16_t x648 = UINT16_MAX;
	volatile int32_t t86 = 5655;

	t86 = (x645<=(x646%(x647<=x648)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x649 = 1U;
	volatile int16_t x650 = INT16_MIN;
	int64_t x651 = -1LL;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t87 = 2;

	t87 = (x649<=(x650%(x651<=x652)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x657 = 43U;
	static int8_t x658 = INT8_MIN;
	static int8_t x659 = -1;
	volatile int8_t x660 = INT8_MAX;

	t88 = (x657<=(x658%(x659<=x660)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x669 = -4029362851785848385LL;
	int16_t x670 = -11;
	int32_t x671 = INT32_MIN;
	volatile int32_t t89 = 298091204;

	t89 = (x669<=(x670%(x671<=x672)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x673 = -1;
	int8_t x674 = INT8_MIN;
	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	volatile int32_t t90 = -1;

	t90 = (x673<=(x674%(x675<=x676)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x677 = UINT64_MAX;
	volatile int8_t x678 = INT8_MIN;
	volatile int32_t x679 = INT32_MIN;
	int16_t x680 = -1878;

	t91 = (x677<=(x678%(x679<=x680)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x689 = 6876986;
	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = 1;
	static int32_t t92 = -64752215;

	t92 = (x689<=(x690%(x691<=x692)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x701 = 1LLU;
	volatile int8_t x702 = -1;
	static uint16_t x703 = 1U;
	int8_t x704 = 27;
	int32_t t93 = 1;

	t93 = (x701<=(x702%(x703<=x704)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x709 = -10;
	volatile uint32_t x711 = 6473U;
	uint64_t x712 = UINT64_MAX;

	t94 = (x709<=(x710%(x711<=x712)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x717 = INT8_MIN;
	int8_t x718 = INT8_MIN;
	static int64_t x719 = -5486LL;
	int8_t x720 = -1;
	int32_t t95 = -1;

	t95 = (x717<=(x718%(x719<=x720)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x721 = 1U;
	int32_t x722 = -1;
	volatile int64_t x723 = -1LL;
	volatile int32_t x724 = 1883373;
	volatile int32_t t96 = -1652;

	t96 = (x721<=(x722%(x723<=x724)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x725 = 0U;
	volatile uint16_t x726 = 6889U;
	static uint32_t x727 = 2U;

	t97 = (x725<=(x726%(x727<=x728)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x730 = INT32_MAX;
	volatile int32_t x731 = 4;
	uint16_t x732 = 228U;
	volatile int32_t t98 = -1;

	t98 = (x729<=(x730%(x731<=x732)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x733 = INT32_MIN;
	static volatile int32_t x734 = 6;
	int32_t x735 = -1;
	int32_t t99 = -11;

	t99 = (x733<=(x734%(x735<=x736)));

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

