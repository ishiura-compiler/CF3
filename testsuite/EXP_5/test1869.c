#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 359488932542533157LL;
uint8_t x8 = 0U;
volatile int32_t t1 = 480;
int64_t x10 = INT64_MIN;
uint64_t x11 = 362161920758605LLU;
int32_t t2 = 60;
int16_t x13 = INT16_MAX;
int64_t x15 = INT64_MAX;
int8_t x18 = INT8_MAX;
int64_t x20 = -2158297391746020337LL;
static int32_t t4 = 183390;
uint32_t x22 = 338U;
volatile int32_t t5 = 1030168593;
uint8_t x31 = 41U;
uint16_t x32 = 48U;
uint64_t x34 = 3648588LLU;
int32_t x35 = INT32_MAX;
int8_t x36 = 1;
int8_t x44 = INT8_MAX;
int32_t t12 = -38;
uint64_t x54 = 268LLU;
static int32_t x55 = 177780028;
int16_t x56 = INT16_MIN;
static volatile int16_t x61 = -1;
int32_t t15 = 0;
volatile uint64_t x67 = 2603496257425824195LLU;
int32_t x70 = -1;
uint64_t x80 = 1295118653153491LLU;
int64_t x84 = -310961857868LL;
static volatile int32_t t21 = -58;
int8_t x93 = INT8_MIN;
static int32_t t23 = -16327;
volatile int32_t t26 = -113295;
volatile uint8_t x114 = 21U;
int32_t t27 = -5;
volatile uint64_t x133 = UINT64_MAX;
static uint16_t x134 = UINT16_MAX;
static volatile int32_t t32 = -101;
static int8_t x141 = 20;
int8_t x142 = 6;
static int32_t x149 = -1;
volatile uint8_t x150 = UINT8_MAX;
static uint64_t x152 = 768156LLU;
volatile uint8_t x156 = 36U;
static int8_t x162 = INT8_MIN;
static volatile int32_t t39 = 1;
volatile uint32_t x172 = UINT32_MAX;
static volatile int32_t x175 = 104;
int32_t t42 = 15156;
static uint16_t x177 = 88U;
uint8_t x179 = 1U;
int64_t x180 = -203822160198909410LL;
volatile int64_t x192 = INT64_MIN;
static int32_t x195 = -1;
int64_t x196 = -1LL;
int32_t x199 = -16345;
int16_t x200 = 197;
uint32_t x203 = UINT32_MAX;
volatile int8_t x209 = -1;
int8_t x213 = INT8_MIN;
int16_t x216 = INT16_MAX;
static int32_t t51 = 998322678;
int32_t x221 = -1;
int64_t x224 = -1LL;
volatile int32_t t55 = -13;
int8_t x237 = INT8_MIN;
int32_t x240 = -1;
int32_t t57 = -24498;
int64_t x249 = 17506034058630LL;
uint32_t x262 = 21U;
volatile int32_t x266 = INT32_MAX;
static uint16_t x270 = 11U;
int16_t x279 = INT16_MAX;
volatile uint8_t x281 = 15U;
int8_t x282 = INT8_MIN;
uint16_t x284 = UINT16_MAX;
int32_t x287 = -1;
volatile int16_t x297 = INT16_MIN;
volatile int32_t t69 = -4158025;
uint16_t x301 = 2U;
uint64_t x308 = UINT64_MAX;
volatile int32_t t72 = 192174;
int16_t x314 = 5;
volatile int8_t x317 = 0;
static int32_t t75 = -94398891;
static uint32_t x325 = UINT32_MAX;
uint16_t x329 = UINT16_MAX;
static volatile int32_t t77 = 682766;
int32_t x333 = 1;
uint64_t x335 = UINT64_MAX;
int32_t t78 = 3;
int32_t t80 = -885;
int32_t t81 = 12205;
uint32_t x349 = UINT32_MAX;
int64_t x355 = -1020LL;
int8_t x359 = -1;
int16_t x362 = INT16_MIN;
uint8_t x375 = 49U;
static int16_t x376 = -9;
uint32_t x383 = 122947870U;
uint16_t x388 = UINT16_MAX;
int32_t x401 = -1;
uint8_t x404 = 7U;
volatile int32_t x416 = -1;
uint8_t x418 = 16U;
static int32_t x419 = INT32_MIN;
static int32_t x420 = -1;
int32_t x421 = -1333365;
volatile int32_t t98 = 332752;
uint64_t x435 = UINT64_MAX;
static int32_t t99 = 0;


void f0(void) {
	static uint8_t x1 = 33U;
	int8_t x2 = -10;
	volatile uint8_t x3 = 5U;
	uint32_t x4 = 67656365U;
	volatile int32_t t0 = 14589;

	t0 = (x1<=((x2|x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 581452421984LLU;
	static int8_t x7 = INT8_MAX;

	t1 = (x5<=((x6|x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x12 = INT64_MIN;

	t2 = (x9<=((x10|x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 125U;
	int64_t x16 = -1LL;
	int32_t t3 = -956167791;

	t3 = (x13<=((x14|x15)+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	uint32_t x19 = UINT32_MAX;

	t4 = (x17<=((x18|x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 4U;
	uint8_t x23 = 4U;
	volatile int16_t x24 = -1;

	t5 = (x21<=((x22|x23)+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 111U;
	int16_t x27 = INT16_MAX;
	uint32_t x28 = 3464U;
	static int32_t t6 = -757517917;

	t6 = (x25<=((x26|x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 1U;
	int32_t x30 = INT32_MIN;
	static int32_t t7 = -132;

	t7 = (x29<=((x30|x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	volatile int32_t t8 = 329969079;

	t8 = (x33<=((x34|x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	int8_t x38 = -15;
	uint64_t x39 = UINT64_MAX;
	static volatile int8_t x40 = 1;
	int32_t t9 = -572317;

	t9 = (x37<=((x38|x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 220528487;

	t10 = (x41<=((x42|x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	static uint16_t x48 = 12U;
	int32_t t11 = -1;

	t11 = (x45<=((x46|x47)+x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 4933;
	uint32_t x50 = 7679U;
	uint64_t x51 = 236271864632915LLU;
	int64_t x52 = INT64_MIN;

	t12 = (x49<=((x50|x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -63;
	static int32_t t13 = 76;

	t13 = (x53<=((x54|x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	int64_t x58 = 34220812906543642LL;
	static int16_t x59 = -6;
	static int32_t x60 = -1;
	volatile int32_t t14 = 1;

	t14 = (x57<=((x58|x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	int8_t x63 = -1;
	static int16_t x64 = INT16_MAX;

	t15 = (x61<=((x62|x63)+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint16_t x66 = 462U;
	int16_t x68 = -30;
	volatile int32_t t16 = 3741;

	t16 = (x65<=((x66|x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	static int64_t x71 = INT64_MIN;
	int64_t x72 = 2LL;
	volatile int32_t t17 = 1931772;

	t17 = (x69<=((x70|x71)+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1433346U;
	static int16_t x74 = INT16_MIN;
	volatile uint64_t x75 = 15467618915LLU;
	int16_t x76 = 11752;
	int32_t t18 = 133;

	t18 = (x73<=((x74|x75)+x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -1;
	static int8_t x78 = INT8_MAX;
	volatile int16_t x79 = INT16_MAX;
	static int32_t t19 = 1240;

	t19 = (x77<=((x78|x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static int8_t x82 = INT8_MAX;
	uint8_t x83 = UINT8_MAX;
	int32_t t20 = -1;

	t20 = (x81<=((x82|x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -51022064LL;
	static uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;

	t21 = (x85<=((x86|x87)+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	int16_t x90 = 5224;
	uint8_t x91 = 28U;
	volatile int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -16148;

	t22 = (x89<=((x90|x91)+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x94 = 1U;
	int32_t x95 = -38;
	int8_t x96 = INT8_MIN;

	t23 = (x93<=((x94|x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static int8_t x98 = -1;
	int32_t x99 = INT32_MAX;
	volatile uint64_t x100 = 45535123462146LLU;
	static volatile int32_t t24 = 1392811;

	t24 = (x97<=((x98|x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -239;
	static uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 470U;
	static int16_t x108 = INT16_MIN;
	int32_t t25 = 21188;

	t25 = (x105<=((x106|x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = -906;
	uint8_t x110 = 0U;
	uint32_t x111 = 732251002U;
	uint32_t x112 = 396492U;

	t26 = (x109<=((x110|x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 4U;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;

	t27 = (x113<=((x114|x115)+x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = 0U;
	uint16_t x118 = 180U;
	volatile uint32_t x119 = 97U;
	volatile int16_t x120 = INT16_MAX;
	static volatile int32_t t28 = -255;

	t28 = (x117<=((x118|x119)+x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = 0;
	int64_t x122 = INT64_MIN;
	int64_t x123 = -1LL;
	volatile int32_t x124 = -1;
	int32_t t29 = 1;

	t29 = (x121<=((x122|x123)+x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 8751U;
	int32_t x126 = -112;
	static int8_t x127 = INT8_MAX;
	int32_t x128 = 10401712;
	volatile int32_t t30 = 563743;

	t30 = (x125<=((x126|x127)+x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = 235LLU;
	uint8_t x130 = 2U;
	int8_t x131 = INT8_MAX;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t31 = -7353014;

	t31 = (x129<=((x130|x131)+x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 175926U;

	t32 = (x133<=((x134|x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	static uint16_t x140 = 7504U;
	static volatile int32_t t33 = 3297;

	t33 = (x137<=((x138|x139)+x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t34 = 57411245;

	t34 = (x141<=((x142|x143)+x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	int32_t x146 = -48;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -1LL;
	volatile int32_t t35 = -134704;

	t35 = (x145<=((x146|x147)+x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x151 = 123U;
	int32_t t36 = 104597581;

	t36 = (x149<=((x150|x151)+x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -32080284526731558LL;
	volatile uint16_t x154 = 1873U;
	volatile int64_t x155 = -8017032LL;
	volatile int32_t t37 = 593;

	t37 = (x153<=((x154|x155)+x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -21;
	int32_t x158 = -1;
	volatile uint64_t x159 = UINT64_MAX;
	uint32_t x160 = 2200667U;
	int32_t t38 = 798;

	t38 = (x157<=((x158|x159)+x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x163 = 2582153U;
	uint32_t x164 = UINT32_MAX;

	t39 = (x161<=((x162|x163)+x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = INT32_MAX;
	static uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	int64_t x168 = -1LL;
	int32_t t40 = 437;

	t40 = (x165<=((x166|x167)+x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MIN;
	uint8_t x171 = UINT8_MAX;
	volatile int32_t t41 = -4936;

	t41 = (x169<=((x170|x171)+x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MIN;
	static volatile int32_t x174 = 94997;
	uint8_t x176 = UINT8_MAX;

	t42 = (x173<=((x174|x175)+x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = 119148930LL;
	int32_t t43 = 62;

	t43 = (x177<=((x178|x179)+x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = -8LL;
	int16_t x187 = -1710;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t44 = -1;

	t44 = (x185<=((x186|x187)+x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = UINT64_MAX;
	uint32_t x190 = 249728574U;
	volatile int8_t x191 = -1;
	volatile int32_t t45 = 49792;

	t45 = (x189<=((x190|x191)+x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	static int16_t x194 = INT16_MAX;
	volatile int32_t t46 = -123703118;

	t46 = (x193<=((x194|x195)+x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 3U;
	static int16_t x198 = INT16_MIN;
	static int32_t t47 = 1;

	t47 = (x197<=((x198|x199)+x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = 249U;
	static uint8_t x202 = UINT8_MAX;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t48 = 121;

	t48 = (x201<=((x202|x203)+x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = INT16_MAX;
	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t49 = -230687911;

	t49 = (x205<=((x206|x207)+x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x210 = INT8_MAX;
	uint64_t x211 = 141592LLU;
	int8_t x212 = INT8_MIN;
	volatile int32_t t50 = -3374;

	t50 = (x209<=((x210|x211)+x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = -1;
	int32_t x215 = INT32_MIN;

	t51 = (x213<=((x214|x215)+x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MAX;
	static uint64_t x218 = 9217LLU;
	volatile uint8_t x219 = UINT8_MAX;
	static int64_t x220 = -1LL;
	static int32_t t52 = 1789;

	t52 = (x217<=((x218|x219)+x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x222 = 4U;
	volatile int16_t x223 = 3170;
	static volatile int32_t t53 = -185182;

	t53 = (x221<=((x222|x223)+x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 12U;
	uint32_t x226 = 34U;
	int16_t x227 = 5;
	int16_t x228 = -1499;
	int32_t t54 = -6763;

	t54 = (x225<=((x226|x227)+x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x233 = 7;
	volatile int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = INT16_MAX;

	t55 = (x233<=((x234|x235)+x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MAX;
	int32_t t56 = -27;

	t56 = (x237<=((x238|x239)+x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x241 = 3U;
	int32_t x242 = -66;
	static int64_t x243 = 3820361331LL;
	uint8_t x244 = 1U;

	t57 = (x241<=((x242|x243)+x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = INT64_MAX;
	int8_t x246 = -3;
	static uint8_t x247 = 6U;
	uint32_t x248 = 13U;
	int32_t t58 = 10697;

	t58 = (x245<=((x246|x247)+x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x250 = -1;
	int32_t x251 = -13;
	int8_t x252 = 9;
	int32_t t59 = -187;

	t59 = (x249<=((x250|x251)+x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x257 = INT8_MAX;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MAX;
	uint16_t x260 = 12U;
	volatile int32_t t60 = 163462;

	t60 = (x257<=((x258|x259)+x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MIN;
	int64_t x263 = 500606LL;
	static volatile int8_t x264 = INT8_MIN;
	volatile int32_t t61 = 1;

	t61 = (x261<=((x262|x263)+x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 40U;
	int64_t x267 = 1209LL;
	uint16_t x268 = 37U;
	int32_t t62 = -6;

	t62 = (x265<=((x266|x267)+x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x269 = 3U;
	int16_t x271 = 9171;
	volatile int8_t x272 = INT8_MAX;
	int32_t t63 = 60;

	t63 = (x269<=((x270|x271)+x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x277 = 2U;
	int8_t x278 = 30;
	int32_t x280 = -83293251;
	static volatile int32_t t64 = 14933;

	t64 = (x277<=((x278|x279)+x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x283 = 245864U;
	volatile int32_t t65 = 1;

	t65 = (x281<=((x282|x283)+x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x285 = 9827;
	int64_t x286 = 9LL;
	static uint32_t x288 = UINT32_MAX;
	int32_t t66 = 1801;

	t66 = (x285<=((x286|x287)+x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = 3624;
	uint64_t x290 = 5LLU;
	volatile uint64_t x291 = 1690931070757843LLU;
	int64_t x292 = INT64_MIN;
	static int32_t t67 = -61953669;

	t67 = (x289<=((x290|x291)+x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = 109U;
	uint8_t x294 = 15U;
	volatile uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t68 = -2;

	t68 = (x293<=((x294|x295)+x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x298 = 3895U;
	int16_t x299 = INT16_MAX;
	static uint8_t x300 = UINT8_MAX;

	t69 = (x297<=((x298|x299)+x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x302 = -1LL;
	uint32_t x303 = UINT32_MAX;
	static int8_t x304 = 5;
	volatile int32_t t70 = 1;

	t70 = (x301<=((x302|x303)+x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MAX;
	uint32_t x306 = 2899748U;
	static uint16_t x307 = 7U;
	int32_t t71 = -125603;

	t71 = (x305<=((x306|x307)+x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 902948LLU;
	static int8_t x310 = 1;
	uint16_t x311 = 101U;
	volatile int8_t x312 = INT8_MIN;

	t72 = (x309<=((x310|x311)+x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 383130259LLU;
	int16_t x315 = 6329;
	int8_t x316 = INT8_MAX;
	volatile int32_t t73 = 0;

	t73 = (x313<=((x314|x315)+x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t74 = 9;

	t74 = (x317<=((x318|x319)+x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 17U;
	static uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t75 = (x321<=((x322|x323)+x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = -1LL;
	int8_t x327 = -1;
	volatile int64_t x328 = 252285517732334LL;
	static int32_t t76 = 40688043;

	t76 = (x325<=((x326|x327)+x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x330 = -70;
	uint16_t x331 = 31708U;
	static uint32_t x332 = 1845948621U;

	t77 = (x329<=((x330|x331)+x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x334 = -1LL;
	int64_t x336 = INT64_MIN;

	t78 = (x333<=((x334|x335)+x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = 1778;
	static uint8_t x338 = 0U;
	uint32_t x339 = 100506U;
	static int32_t x340 = -2052393;
	volatile int32_t t79 = 112848937;

	t79 = (x337<=((x338|x339)+x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x341 = 19U;
	volatile int64_t x342 = -255794157872LL;
	uint32_t x343 = 24U;
	int16_t x344 = INT16_MIN;

	t80 = (x341<=((x342|x343)+x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = 8056;
	uint64_t x346 = 104424LLU;
	volatile uint16_t x347 = UINT16_MAX;
	static volatile int16_t x348 = 487;

	t81 = (x345<=((x346|x347)+x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x350 = -1LL;
	static int16_t x351 = INT16_MIN;
	uint16_t x352 = 850U;
	static volatile int32_t t82 = -6055;

	t82 = (x349<=((x350|x351)+x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 0U;
	volatile int8_t x356 = INT8_MAX;
	int32_t t83 = -4;

	t83 = (x353<=((x354|x355)+x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MAX;
	int16_t x358 = -1142;
	volatile int64_t x360 = -1LL;
	volatile int32_t t84 = 1;

	t84 = (x357<=((x358|x359)+x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile int64_t x363 = INT64_MAX;
	uint64_t x364 = UINT64_MAX;
	int32_t t85 = -18491703;

	t85 = (x361<=((x362|x363)+x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x365 = 8U;
	volatile int32_t x366 = -194321;
	static uint8_t x367 = UINT8_MAX;
	static int8_t x368 = INT8_MAX;
	volatile int32_t t86 = 3292;

	t86 = (x365<=((x366|x367)+x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x369 = -109;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -21112675215378LL;
	int8_t x372 = 2;
	volatile int32_t t87 = 2;

	t87 = (x369<=((x370|x371)+x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = 49716U;
	volatile int8_t x374 = INT8_MIN;
	volatile int32_t t88 = 48046192;

	t88 = (x373<=((x374|x375)+x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = 14334;
	int64_t x379 = -1LL;
	static int64_t x380 = -1LL;
	static int32_t t89 = 184149;

	t89 = (x377<=((x378|x379)+x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = INT32_MAX;
	int64_t x384 = -66393610LL;
	int32_t t90 = 210508;

	t90 = (x381<=((x382|x383)+x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 27U;
	volatile uint64_t x386 = UINT64_MAX;
	uint16_t x387 = UINT16_MAX;
	static volatile int32_t t91 = 413082;

	t91 = (x385<=((x386|x387)+x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x397 = 20843913;
	static volatile int64_t x398 = -139707675395LL;
	static uint32_t x399 = 1932972153U;
	static volatile int32_t x400 = INT32_MIN;
	int32_t t92 = 718057;

	t92 = (x397<=((x398|x399)+x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	int32_t t93 = 226852596;

	t93 = (x401<=((x402|x403)+x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MIN;
	volatile int64_t x406 = -2637588323058121LL;
	static uint32_t x407 = 2869U;
	int8_t x408 = -1;
	volatile int32_t t94 = -950;

	t94 = (x405<=((x406|x407)+x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x413 = -1;
	static int32_t x414 = INT32_MIN;
	uint16_t x415 = 316U;
	volatile int32_t t95 = -298;

	t95 = (x413<=((x414|x415)+x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = -990;
	int32_t t96 = 1;

	t96 = (x417<=((x418|x419)+x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x422 = UINT64_MAX;
	volatile int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t97 = -75340528;

	t97 = (x421<=((x422|x423)+x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = -1LL;
	uint64_t x426 = 2LLU;
	int16_t x427 = -1;
	int32_t x428 = 18;

	t98 = (x425<=((x426|x427)+x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	volatile int16_t x434 = -1;
	volatile int8_t x436 = INT8_MIN;

	t99 = (x433<=((x434|x435)+x436));

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

