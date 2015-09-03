#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int32_t x16 = INT32_MIN;
int32_t t2 = 247929423;
uint16_t x20 = UINT16_MAX;
int32_t x23 = INT32_MIN;
volatile int32_t t4 = INT32_MIN;
volatile uint8_t x38 = UINT8_MAX;
volatile int32_t t10 = -1193393;
uint8_t x61 = 22U;
int64_t x63 = INT64_MAX;
int16_t x67 = INT16_MIN;
uint16_t x71 = 28198U;
int64_t x74 = 349904920LL;
int16_t x84 = INT16_MAX;
volatile uint32_t t17 = 128675U;
static uint64_t x87 = 3992158787358LLU;
int32_t x89 = INT32_MAX;
uint64_t x90 = 3030776175433926462LLU;
volatile int16_t x94 = 0;
uint32_t t22 = 242689U;
int32_t x109 = 177218690;
uint64_t x110 = UINT64_MAX;
volatile int16_t x115 = INT16_MIN;
static int8_t x117 = -1;
int8_t x122 = INT8_MAX;
uint8_t x123 = 124U;
uint64_t x124 = UINT64_MAX;
uint16_t x126 = 786U;
uint8_t x151 = UINT8_MAX;
volatile int32_t t31 = -596588;
uint16_t x161 = UINT16_MAX;
uint32_t x165 = 0U;
int64_t x166 = -21LL;
static volatile uint16_t x167 = 11590U;
static volatile int32_t x168 = 2923047;
volatile int8_t x169 = -1;
volatile int8_t x173 = -1;
int64_t x174 = INT64_MAX;
volatile uint64_t x175 = 953292LLU;
int32_t x178 = 1;
int64_t x183 = INT64_MIN;
int16_t x186 = INT16_MIN;
volatile int32_t t42 = -629337;
uint16_t x205 = 6230U;
int32_t x211 = -129893970;
int32_t t46 = -1;
volatile int32_t t47 = 67790793;
uint8_t x230 = 8U;
int64_t x237 = -8592922658619592LL;
volatile int32_t x238 = -1;
uint32_t x248 = UINT32_MAX;
volatile uint32_t t53 = 1096540377U;
int64_t t54 = 36629979LL;
int64_t x253 = -782383LL;
static uint16_t x254 = 7U;
int64_t x261 = -25289LL;
uint64_t x273 = UINT64_MAX;
static uint16_t x275 = UINT16_MAX;
int16_t x277 = -1;
uint32_t x279 = 173181514U;
volatile uint64_t x288 = 7LLU;
volatile int32_t t64 = 8124294;
static int32_t x301 = -1;
int64_t x302 = 915937LL;
int32_t t65 = 210;
static int32_t x306 = INT32_MIN;
volatile int32_t t66 = 1274;
int8_t x323 = 1;
volatile int64_t t68 = INT64_MIN;
static int8_t x333 = -1;
volatile uint32_t x335 = 739541U;
uint32_t t71 = 0U;
int16_t x342 = 898;
uint32_t t72 = 74U;
int8_t x346 = INT8_MAX;
volatile int16_t x347 = INT16_MIN;
volatile uint64_t x354 = 3151277LLU;
uint64_t x358 = 196247082777LLU;
uint32_t x360 = UINT32_MAX;
volatile uint32_t t77 = 100U;
int16_t x369 = INT16_MAX;
int8_t x382 = INT8_MIN;
int16_t x393 = INT16_MAX;
volatile uint16_t x397 = UINT16_MAX;
volatile int32_t t84 = -51;
int64_t x417 = 786966838LL;
volatile int8_t x419 = -1;
volatile int64_t x425 = INT64_MIN;
int32_t t90 = 42;
int32_t x430 = -1455;
uint32_t t91 = 1441U;
int16_t x439 = -1;
volatile int8_t x440 = INT8_MIN;
volatile int64_t t93 = 2313565743LL;
volatile int16_t x445 = INT16_MAX;
int64_t x450 = -834908829935LL;
uint32_t x453 = UINT32_MAX;
volatile uint32_t t97 = 976U;
int64_t x468 = -1LL;


void f0(void) {
	uint64_t x1 = 636826385LLU;
	uint64_t x2 = 47499714766898645LLU;
	int32_t x3 = 23340183;
	volatile int32_t t0 = 0;

	t0 = (((x1<=x2)^x3)+x4);

	if (t0 != 23307414) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 29409894LL;
	static volatile int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;
	static volatile int64_t t1 = -6423LL;

	t1 = (((x9<=x10)^x11)+x12);

	if (t1 != -32769LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = INT64_MIN;
	static int64_t x14 = 401338996366225239LL;
	int16_t x15 = 7603;

	t2 = (((x13<=x14)^x15)+x16);

	if (t2 != -2147476046) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint64_t x18 = 5002064973879948LLU;
	static int16_t x19 = 2277;
	volatile int32_t t3 = -1;

	t3 = (((x17<=x18)^x19)+x20);

	if (t3 != 67811) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 52720019U;
	int32_t x22 = -1;
	volatile int16_t x24 = -1;

	t4 = (((x21<=x22)^x23)+x24);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	volatile int16_t x26 = 94;
	uint32_t x27 = 1043269U;
	int32_t x28 = INT32_MIN;
	uint32_t t5 = 4692U;

	t5 = (((x25<=x26)^x27)+x28);

	if (t5 != 2148526916U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = 5U;
	volatile int32_t t6 = 64349964;

	t6 = (((x29<=x30)^x31)+x32);

	if (t6 != -122) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile int16_t x34 = 149;
	static int16_t x35 = INT16_MIN;
	static volatile int16_t x36 = INT16_MIN;
	int32_t t7 = -13170033;

	t7 = (((x33<=x34)^x35)+x36);

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 1266U;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MAX;
	volatile int64_t t8 = -2073181956787754195LL;

	t8 = (((x37<=x38)^x39)+x40);

	if (t8 != 2147483646LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MAX;
	uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 3319766830997LLU;
	int8_t x44 = INT8_MIN;
	static volatile uint64_t t9 = 11816008897LLU;

	t9 = (((x41<=x42)^x43)+x44);

	if (t9 != 3319766830868LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 4566411216063701LLU;
	uint8_t x46 = 9U;
	volatile uint16_t x47 = 1633U;
	uint8_t x48 = UINT8_MAX;

	t10 = (((x45<=x46)^x47)+x48);

	if (t10 != 1888) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	static volatile int8_t x50 = INT8_MIN;
	volatile int16_t x51 = 5388;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t11 = 96547772;

	t11 = (((x49<=x50)^x51)+x52);

	if (t11 != 5643) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MAX;
	static volatile int8_t x54 = INT8_MIN;
	uint32_t x55 = 913231U;
	int64_t x56 = INT64_MIN;
	static int64_t t12 = -1640819043673791855LL;

	t12 = (((x53<=x54)^x55)+x56);

	if (t12 != -9223372036853862577LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	static int64_t t13 = -34980290989LL;

	t13 = (((x61<=x62)^x63)+x64);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x68 = -1;
	int32_t t14 = -3417;

	t14 = (((x65<=x66)^x67)+x68);

	if (t14 != -32769) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 74714026451081856LLU;
	volatile int8_t x70 = INT8_MIN;
	int16_t x72 = -11;
	volatile int32_t t15 = -1140;

	t15 = (((x69<=x70)^x71)+x72);

	if (t15 != 28188) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -75063;
	int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t16 = -943387;

	t16 = (((x73<=x74)^x75)+x76);

	if (t16 != 2147450878) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 189230U;

	t17 = (((x81<=x82)^x83)+x84);

	if (t17 != 221997U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x85 = 6871U;
	uint64_t x86 = 240340418941LLU;
	static volatile int16_t x88 = INT16_MIN;
	uint64_t t18 = 180LLU;

	t18 = (((x85<=x86)^x87)+x88);

	if (t18 != 3992158754591LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x91 = -1LL;
	int16_t x92 = INT16_MIN;
	volatile int64_t t19 = -69688950071038LL;

	t19 = (((x89<=x90)^x91)+x92);

	if (t19 != -32770LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x93 = 3546909462LLU;
	uint32_t x95 = 272U;
	static volatile int16_t x96 = -1;
	uint32_t t20 = 2683U;

	t20 = (((x93<=x94)^x95)+x96);

	if (t20 != 271U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = 2088142;
	uint32_t x99 = UINT32_MAX;
	static volatile uint64_t x100 = 417LLU;
	volatile uint64_t t21 = 2738113136595LLU;

	t21 = (((x97<=x98)^x99)+x100);

	if (t21 != 4294967712LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = -900;
	volatile int16_t x106 = 4;
	uint32_t x107 = 99913207U;
	volatile int8_t x108 = -9;

	t22 = (((x105<=x106)^x107)+x108);

	if (t22 != 99913197U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x111 = INT64_MIN;
	uint16_t x112 = 140U;
	volatile int64_t t23 = 26005000913793LL;

	t23 = (((x109<=x110)^x111)+x112);

	if (t23 != -9223372036854775667LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x114 = 3U;
	uint16_t x116 = 2U;
	int32_t t24 = -1;

	t24 = (((x113<=x114)^x115)+x116);

	if (t24 != -32765) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	static uint8_t x120 = 2U;
	static int32_t t25 = -3264;

	t25 = (((x117<=x118)^x119)+x120);

	if (t25 != 32769) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	volatile uint64_t t26 = 80LLU;

	t26 = (((x121<=x122)^x123)+x124);

	if (t26 != 124LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = 139U;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 14427LLU;
	volatile uint64_t t27 = 523609561LLU;

	t27 = (((x125<=x126)^x127)+x128);

	if (t27 != 9223372036854790236LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t28 = -406;

	t28 = (((x133<=x134)^x135)+x136);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x137 = -3;
	static volatile int8_t x138 = 28;
	static uint64_t x139 = UINT64_MAX;
	volatile int64_t x140 = INT64_MIN;
	uint64_t t29 = 1LLU;

	t29 = (((x137<=x138)^x139)+x140);

	if (t29 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = -27292585000941219LL;
	static uint8_t x146 = 4U;
	volatile int16_t x147 = INT16_MAX;
	volatile uint32_t x148 = 253133U;
	uint32_t t30 = 16118U;

	t30 = (((x145<=x146)^x147)+x148);

	if (t30 != 285899U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = UINT64_MAX;
	uint64_t x150 = UINT64_MAX;
	int16_t x152 = INT16_MAX;

	t31 = (((x149<=x150)^x151)+x152);

	if (t31 != 33021) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -55;
	int16_t x155 = 29;
	volatile int64_t x156 = INT64_MIN;
	static volatile int64_t t32 = -4LL;

	t32 = (((x153<=x154)^x155)+x156);

	if (t32 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = -1;
	int64_t x158 = INT64_MAX;
	int16_t x159 = -1;
	static volatile uint16_t x160 = 919U;
	int32_t t33 = 1;

	t33 = (((x157<=x158)^x159)+x160);

	if (t33 != 917) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x162 = 40U;
	volatile int64_t x163 = 8253746519LL;
	volatile int64_t x164 = 48724131490843013LL;
	volatile int64_t t34 = 496252339822089329LL;

	t34 = (((x161<=x162)^x163)+x164);

	if (t34 != 48724139744589532LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t t35 = 1;

	t35 = (((x165<=x166)^x167)+x168);

	if (t35 != 2934637) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x170 = -1;
	volatile uint32_t x171 = 0U;
	volatile uint8_t x172 = 22U;
	uint32_t t36 = 4412593U;

	t36 = (((x169<=x170)^x171)+x172);

	if (t36 != 23U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x176 = INT64_MAX;
	volatile uint64_t t37 = 7154996LLU;

	t37 = (((x173<=x174)^x175)+x176);

	if (t37 != 9223372036855729100LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x177 = UINT8_MAX;
	int8_t x179 = -2;
	int8_t x180 = INT8_MIN;
	int32_t t38 = 910;

	t38 = (((x177<=x178)^x179)+x180);

	if (t38 != -130) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 5637229U;
	uint32_t x182 = 12052571U;
	static uint16_t x184 = 23713U;
	int64_t t39 = 145157650565529428LL;

	t39 = (((x181<=x182)^x183)+x184);

	if (t39 != -9223372036854752094LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = INT16_MIN;
	uint32_t x187 = 309140015U;
	volatile uint16_t x188 = 2U;
	volatile uint32_t t40 = 0U;

	t40 = (((x185<=x186)^x187)+x188);

	if (t40 != 309140016U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = 58;
	uint32_t x191 = 287U;
	static uint16_t x192 = UINT16_MAX;
	uint32_t t41 = 12001118U;

	t41 = (((x189<=x190)^x191)+x192);

	if (t41 != 65822U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MIN;
	static int64_t x194 = -1LL;
	volatile int32_t x195 = -1044124840;
	int8_t x196 = 10;

	t42 = (((x193<=x194)^x195)+x196);

	if (t42 != -1044124829) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x199 = -14145052047LL;
	int16_t x200 = INT16_MAX;
	volatile int64_t t43 = 503779788760077533LL;

	t43 = (((x197<=x198)^x199)+x200);

	if (t43 != -14145019280LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = 1;
	volatile int32_t x202 = -1;
	static uint16_t x203 = 1U;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t44 = -85666;

	t44 = (((x201<=x202)^x203)+x204);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x206 = 7U;
	uint8_t x207 = 30U;
	int64_t x208 = INT64_MIN;
	volatile int64_t t45 = -1LL;

	t45 = (((x205<=x206)^x207)+x208);

	if (t45 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	uint8_t x210 = UINT8_MAX;
	int32_t x212 = INT32_MAX;

	t46 = (((x209<=x210)^x211)+x212);

	if (t46 != 2017589678) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = 1;
	int32_t x214 = -5448967;
	volatile uint16_t x215 = UINT16_MAX;
	int16_t x216 = -1;

	t47 = (((x213<=x214)^x215)+x216);

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x217 = 1LL;
	int64_t x218 = -1LL;
	static uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t48 = 345513;

	t48 = (((x217<=x218)^x219)+x220);

	if (t48 != -2147483393) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	uint8_t x223 = UINT8_MAX;
	volatile uint8_t x224 = 17U;
	int32_t t49 = -24441407;

	t49 = (((x221<=x222)^x223)+x224);

	if (t49 != 271) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x229 = -2;
	uint16_t x231 = 7U;
	uint8_t x232 = 2U;
	volatile int32_t t50 = -290259107;

	t50 = (((x229<=x230)^x231)+x232);

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = 365313569962LL;
	uint64_t x236 = 7242198LLU;
	static volatile uint64_t t51 = 46897338267699LLU;

	t51 = (((x233<=x234)^x235)+x236);

	if (t51 != 365320812161LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x239 = 443U;
	int16_t x240 = -5111;
	uint32_t t52 = 1067551401U;

	t52 = (((x237<=x238)^x239)+x240);

	if (t52 != 4294962627U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x245 = -1;
	int8_t x246 = INT8_MAX;
	volatile int8_t x247 = INT8_MAX;

	t53 = (((x245<=x246)^x247)+x248);

	if (t53 != 125U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MIN;
	int64_t x251 = -1LL;
	int32_t x252 = 74420113;

	t54 = (((x249<=x250)^x251)+x252);

	if (t54 != 74420112LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x255 = 2U;
	static int8_t x256 = INT8_MAX;
	volatile int32_t t55 = -5452506;

	t55 = (((x253<=x254)^x255)+x256);

	if (t55 != 130) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = -3;
	int32_t x258 = INT32_MAX;
	uint8_t x259 = 14U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t56 = -1;

	t56 = (((x257<=x258)^x259)+x260);

	if (t56 != -113) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x262 = -1;
	static uint32_t x263 = 46725910U;
	volatile int8_t x264 = INT8_MAX;
	volatile uint32_t t57 = 56U;

	t57 = (((x261<=x262)^x263)+x264);

	if (t57 != 46726038U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x265 = INT64_MAX;
	int8_t x266 = INT8_MIN;
	static int8_t x267 = INT8_MIN;
	int16_t x268 = 0;
	int32_t t58 = 64141754;

	t58 = (((x265<=x266)^x267)+x268);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x274 = -1;
	int32_t x276 = -1;
	volatile int32_t t59 = -135;

	t59 = (((x273<=x274)^x275)+x276);

	if (t59 != 65533) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x278 = UINT32_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t60 = 3096241LL;

	t60 = (((x277<=x278)^x279)+x280);

	if (t60 != -9223372036681594293LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x281 = -1049;
	static int16_t x282 = INT16_MIN;
	int32_t x283 = -4;
	int32_t x284 = -1;
	int32_t t61 = 174;

	t61 = (((x281<=x282)^x283)+x284);

	if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x285 = 16057789U;
	static volatile uint64_t x286 = 2027LLU;
	static int32_t x287 = -814313;
	uint64_t t62 = 2652311705486747770LLU;

	t62 = (((x285<=x286)^x287)+x288);

	if (t62 != 18446744073708737310LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MIN;
	static volatile int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -357999462;
	volatile int32_t t63 = -127;

	t63 = (((x289<=x290)^x291)+x292);

	if (t63 != -358032229) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = 18786052;
	uint16_t x294 = UINT16_MAX;
	static int8_t x295 = INT8_MIN;
	int8_t x296 = 6;

	t64 = (((x293<=x294)^x295)+x296);

	if (t64 != -122) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x303 = 1;
	int16_t x304 = INT16_MAX;

	t65 = (((x301<=x302)^x303)+x304);

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x305 = 15628;
	volatile int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MIN;

	t66 = (((x305<=x306)^x307)+x308);

	if (t66 != 2147450879) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = UINT16_MAX;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t67 = -325071085;

	t67 = (((x313<=x314)^x315)+x316);

	if (t67 != 65406) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x321 = UINT32_MAX;
	int16_t x322 = -1;
	static volatile int64_t x324 = INT64_MIN;

	t68 = (((x321<=x322)^x323)+x324);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = -30166177LL;
	int32_t x326 = 66503413;
	volatile int64_t x327 = -1LL;
	static volatile int8_t x328 = INT8_MIN;
	static volatile int64_t t69 = -2177321243033LL;

	t69 = (((x325<=x326)^x327)+x328);

	if (t69 != -130LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = -1;
	static volatile uint32_t x330 = 172028816U;
	volatile uint64_t x331 = 2200406125160771018LLU;
	int16_t x332 = 1;
	uint64_t t70 = 171546870623757LLU;

	t70 = (((x329<=x330)^x331)+x332);

	if (t70 != 2200406125160771019LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x334 = -129103LL;
	uint32_t x336 = UINT32_MAX;

	t71 = (((x333<=x334)^x335)+x336);

	if (t71 != 739540U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x341 = -1;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 60U;

	t72 = (((x341<=x342)^x343)+x344);

	if (t72 != 4294934589U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x345 = INT16_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t73 = -253;

	t73 = (((x345<=x346)^x347)+x348);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = 10946770LLU;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 42U;
	uint64_t t74 = 2009LLU;

	t74 = (((x349<=x350)^x351)+x352);

	if (t74 != 41LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = -1;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 360LLU;
	uint64_t t75 = 2597363459869072597LLU;

	t75 = (((x353<=x354)^x355)+x356);

	if (t75 != 615LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = 835874124496LL;
	volatile int64_t x359 = INT64_MIN;
	static int64_t t76 = 6567383LL;

	t76 = (((x357<=x358)^x359)+x360);

	if (t76 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int32_t x362 = -1;
	volatile int32_t x363 = INT32_MAX;
	static uint32_t x364 = 226372254U;

	t77 = (((x361<=x362)^x363)+x364);

	if (t77 != 2373855901U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x370 = INT16_MIN;
	int32_t x371 = -231;
	int16_t x372 = -1;
	int32_t t78 = 27783294;

	t78 = (((x369<=x370)^x371)+x372);

	if (t78 != -232) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x377 = 3U;
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 155LLU;
	uint64_t x380 = 2142834724503142LLU;
	uint64_t t79 = 1740980583553LLU;

	t79 = (((x377<=x378)^x379)+x380);

	if (t79 != 2142834724503296LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = INT32_MAX;
	static uint8_t x383 = UINT8_MAX;
	volatile int8_t x384 = INT8_MIN;
	int32_t t80 = -240;

	t80 = (((x381<=x382)^x383)+x384);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = INT16_MAX;
	uint32_t x386 = 845U;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = -1;
	volatile int32_t t81 = -1;

	t81 = (((x385<=x386)^x387)+x388);

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = -1;
	int32_t x390 = -1;
	volatile uint32_t x391 = 3254042U;
	int64_t x392 = -1LL;
	volatile int64_t t82 = 288142616049847LL;

	t82 = (((x389<=x390)^x391)+x392);

	if (t82 != 3254042LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x394 = INT64_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	static int16_t x396 = -1;
	uint64_t t83 = 25984918LLU;

	t83 = (((x393<=x394)^x395)+x396);

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x398 = INT64_MIN;
	int32_t x399 = -433778666;
	static int16_t x400 = INT16_MIN;

	t84 = (((x397<=x398)^x399)+x400);

	if (t84 != -433811434) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x401 = 1;
	int64_t x402 = INT64_MIN;
	uint64_t x403 = 164641LLU;
	int32_t x404 = 3;
	uint64_t t85 = 1974448771660753185LLU;

	t85 = (((x401<=x402)^x403)+x404);

	if (t85 != 164644LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x406 = INT32_MIN;
	int64_t x407 = -1LL;
	int8_t x408 = -32;
	int64_t t86 = -4827818896751304LL;

	t86 = (((x405<=x406)^x407)+x408);

	if (t86 != -33LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = INT8_MIN;
	uint16_t x410 = 941U;
	static int64_t x411 = -8278534LL;
	static volatile int32_t x412 = 1000264564;
	volatile int64_t t87 = 17427343657636LL;

	t87 = (((x409<=x410)^x411)+x412);

	if (t87 != 991986031LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x418 = INT8_MAX;
	int8_t x420 = -1;
	volatile int32_t t88 = -13;

	t88 = (((x417<=x418)^x419)+x420);

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x421 = 3331LLU;
	volatile uint32_t x422 = UINT32_MAX;
	volatile int16_t x423 = -1;
	uint16_t x424 = 1242U;
	static int32_t t89 = 92;

	t89 = (((x421<=x422)^x423)+x424);

	if (t89 != 1240) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x426 = 122491048810967LLU;
	int16_t x427 = -82;
	volatile int16_t x428 = INT16_MAX;

	t90 = (((x425<=x426)^x427)+x428);

	if (t90 != 32685) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MIN;
	uint32_t x431 = 485505215U;
	volatile int32_t x432 = INT32_MAX;

	t91 = (((x429<=x430)^x431)+x432);

	if (t91 != 2632988862U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x437 = UINT64_MAX;
	int32_t x438 = -1;
	int32_t t92 = 2005;

	t92 = (((x437<=x438)^x439)+x440);

	if (t92 != -130) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x441 = 1925858263U;
	volatile uint8_t x442 = UINT8_MAX;
	volatile int64_t x443 = 247353028699648747LL;
	static int16_t x444 = INT16_MAX;

	t93 = (((x441<=x442)^x443)+x444);

	if (t93 != 247353028699681514LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x446 = INT8_MIN;
	volatile int64_t x447 = INT64_MIN;
	static uint64_t x448 = 433LLU;
	static volatile uint64_t t94 = 5LLU;

	t94 = (((x445<=x446)^x447)+x448);

	if (t94 != 9223372036854776241LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = INT16_MIN;
	uint32_t x451 = 8802601U;
	uint32_t x452 = 63587U;
	volatile uint32_t t95 = 22774U;

	t95 = (((x449<=x450)^x451)+x452);

	if (t95 != 8866188U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x454 = 246943;
	int8_t x455 = -8;
	int64_t x456 = INT64_MAX;
	int64_t t96 = -38LL;

	t96 = (((x453<=x454)^x455)+x456);

	if (t96 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x457 = 33U;
	int32_t x458 = -172915485;
	uint32_t x459 = 10137U;
	int16_t x460 = -1;

	t97 = (((x457<=x458)^x459)+x460);

	if (t97 != 10136U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = -1;
	volatile int16_t x462 = -3;
	uint16_t x463 = 2040U;
	int8_t x464 = -1;
	int32_t t98 = -84455;

	t98 = (((x461<=x462)^x463)+x464);

	if (t98 != 2039) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = INT64_MIN;
	int16_t x466 = -1;
	int32_t x467 = INT32_MAX;
	volatile int64_t t99 = -24399686790LL;

	t99 = (((x465<=x466)^x467)+x468);

	if (t99 != 2147483645LL) { NG(); } else { ; }
	
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

