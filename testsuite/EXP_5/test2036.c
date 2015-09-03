#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -13;
int32_t t1 = -1;
volatile int32_t t2 = 3209472;
int16_t x15 = -231;
static int64_t x19 = INT64_MIN;
volatile int32_t t4 = 2;
volatile int8_t x22 = 0;
static uint16_t x25 = 1055U;
volatile uint16_t x28 = UINT16_MAX;
uint16_t x29 = 15777U;
int16_t x31 = 0;
static int16_t x33 = -1;
int64_t x35 = INT64_MIN;
uint32_t x38 = 47953U;
int32_t t9 = -76665;
volatile int8_t x44 = INT8_MAX;
volatile int32_t t10 = -74676;
int16_t x58 = INT16_MAX;
uint8_t x60 = 61U;
volatile int32_t t16 = -351883320;
int32_t x74 = INT32_MAX;
uint16_t x78 = 21129U;
int64_t x88 = -97876365690008829LL;
int32_t x90 = INT32_MIN;
int8_t x96 = -1;
int16_t x97 = INT16_MAX;
volatile int8_t x104 = INT8_MIN;
static volatile int32_t t27 = 561974;
uint8_t x117 = UINT8_MAX;
static uint16_t x118 = UINT16_MAX;
int8_t x131 = -1;
volatile int32_t t29 = 15614499;
int16_t x139 = -1;
static int16_t x146 = INT16_MIN;
static volatile int32_t t34 = 52712;
uint8_t x157 = 0U;
volatile uint8_t x160 = 1U;
int32_t x163 = -7577;
int64_t x181 = 262333692901015042LL;
static uint32_t x183 = UINT32_MAX;
static int16_t x194 = 39;
volatile int32_t t42 = 503797;
volatile uint8_t x203 = UINT8_MAX;
int32_t x212 = 1380731;
volatile int64_t x213 = INT64_MAX;
uint32_t x215 = 59724U;
int32_t t47 = 3314;
static uint16_t x217 = 823U;
uint32_t x221 = UINT32_MAX;
int32_t x226 = 0;
uint8_t x232 = 0U;
int32_t t51 = 13883000;
int16_t x234 = -1;
int16_t x236 = 687;
volatile uint32_t x237 = 42689491U;
int64_t x238 = INT64_MIN;
int32_t x242 = INT32_MAX;
int64_t x265 = -1LL;
volatile uint64_t x274 = 8748753501770915334LLU;
int32_t x282 = 24;
uint16_t x283 = 0U;
uint16_t x286 = UINT16_MAX;
volatile int8_t x287 = INT8_MAX;
volatile int32_t t67 = -412339061;
uint8_t x304 = UINT8_MAX;
static uint16_t x308 = 40U;
int32_t x312 = -25788675;
int16_t x317 = INT16_MIN;
int32_t x321 = -1;
int32_t x327 = -1;
static int32_t x328 = -16;
int64_t x334 = -55661836779LL;
int32_t t77 = 152;
uint32_t x350 = UINT32_MAX;
static int64_t x356 = 509047172016661623LL;
uint64_t x360 = 280657591510LLU;
int64_t x377 = INT64_MIN;
uint8_t x380 = 2U;
volatile int32_t t85 = 50;
volatile int32_t t86 = -899;
int8_t x385 = 0;
static int32_t t90 = -8;
int64_t x411 = INT64_MAX;
int16_t x413 = -2957;
volatile int8_t x415 = 0;
volatile uint32_t x416 = 901U;
volatile int32_t t94 = -37;
int32_t x417 = INT32_MAX;
int8_t x418 = -11;
static int32_t x425 = -8441890;
uint32_t x426 = 144491868U;
volatile int8_t x427 = INT8_MAX;
uint16_t x435 = 8364U;
int32_t t98 = 1;
uint16_t x438 = 390U;


void f0(void) {
	int32_t x1 = 50156;
	static int32_t x2 = INT32_MAX;
	uint32_t x3 = UINT32_MAX;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = -62701;

	t0 = (x1==((x2^x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x7 = 1;
	int16_t x8 = INT16_MAX;

	t1 = (x5==((x6^x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 11;
	static int8_t x10 = -1;
	volatile int8_t x11 = INT8_MAX;
	uint16_t x12 = UINT16_MAX;

	t2 = (x9==((x10^x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 77658737;

	t3 = (x13==((x14^x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = -13117387737149LL;
	uint64_t x18 = 13495749308LLU;
	static uint8_t x20 = UINT8_MAX;

	t4 = (x17==((x18^x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 2U;
	uint8_t x23 = 114U;
	uint16_t x24 = 5U;
	static int32_t t5 = 155;

	t5 = (x21==((x22^x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = -26;
	static volatile uint64_t x27 = 45685930018LLU;
	int32_t t6 = -200258375;

	t6 = (x25==((x26^x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = 18695533;

	t7 = (x29==((x30^x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = -1;
	volatile uint8_t x36 = 0U;
	volatile int32_t t8 = 0;

	t8 = (x33==((x34^x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -3;
	int64_t x39 = -23608675839004148LL;
	int8_t x40 = -1;

	t9 = (x37==((x38^x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -2982121;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = 604;

	t10 = (x41==((x42^x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint8_t x46 = UINT8_MAX;
	static int32_t x47 = INT32_MIN;
	static volatile int8_t x48 = -1;
	volatile int32_t t11 = -749624124;

	t11 = (x45==((x46^x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 42U;
	uint8_t x50 = 14U;
	int16_t x51 = -1;
	int8_t x52 = 1;
	volatile int32_t t12 = 2;

	t12 = (x49==((x50^x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -1004523;

	t13 = (x53==((x54^x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = 3237;
	int64_t x59 = INT64_MIN;
	static int32_t t14 = -621095;

	t14 = (x57==((x58^x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 73008649;
	static int8_t x62 = 1;
	int8_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = -168097232;

	t15 = (x61==((x62^x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -2030;
	static uint8_t x66 = 47U;
	int32_t x67 = INT32_MAX;
	int64_t x68 = -112LL;

	t16 = (x65==((x66^x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MIN;
	int64_t x75 = -22290LL;
	static uint8_t x76 = 15U;
	int32_t t17 = -4;

	t17 = (x73==((x74^x75)+x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	uint16_t x79 = UINT16_MAX;
	volatile uint8_t x80 = 5U;
	volatile int32_t t18 = 319240093;

	t18 = (x77==((x78^x79)+x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	int32_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t19 = 142829;

	t19 = (x81==((x82^x83)+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = 5;
	static int8_t x86 = INT8_MIN;
	static uint16_t x87 = 4910U;
	volatile int32_t t20 = 2;

	t20 = (x85==((x86^x87)+x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	int8_t x91 = -1;
	static volatile int16_t x92 = -11491;
	int32_t t21 = -212910282;

	t21 = (x89==((x90^x91)+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	uint16_t x95 = 11595U;
	volatile int32_t t22 = 380;

	t22 = (x93==((x94^x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x98 = 20U;
	uint16_t x99 = 70U;
	int16_t x100 = INT16_MIN;
	int32_t t23 = 5;

	t23 = (x97==((x98^x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 0U;
	volatile int32_t x102 = -1;
	int16_t x103 = 1;
	int32_t t24 = -454;

	t24 = (x101==((x102^x103)+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	static int8_t x106 = 5;
	int8_t x107 = INT8_MIN;
	volatile int32_t x108 = INT32_MAX;
	volatile int32_t t25 = -73861;

	t25 = (x105==((x106^x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MAX;
	uint32_t x110 = 156130735U;
	uint16_t x111 = 19493U;
	uint8_t x112 = 44U;
	int32_t t26 = 53913174;

	t26 = (x109==((x110^x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = UINT64_MAX;
	static int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	uint8_t x116 = 1U;

	t27 = (x113==((x114^x115)+x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = -1;
	static uint64_t x120 = 478017120219590297LLU;
	volatile int32_t t28 = 178098094;

	t28 = (x117==((x118^x119)+x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = -116;
	static int16_t x130 = -1;
	uint8_t x132 = UINT8_MAX;

	t29 = (x129==((x130^x131)+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x133 = 4271257U;
	int32_t x134 = -1;
	volatile int16_t x135 = -1;
	static int16_t x136 = -7057;
	int32_t t30 = 82;

	t30 = (x133==((x134^x135)+x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = -1;
	uint8_t x138 = 122U;
	static uint8_t x140 = UINT8_MAX;
	static int32_t t31 = 11918;

	t31 = (x137==((x138^x139)+x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = 3261129LL;
	static int8_t x147 = 0;
	int8_t x148 = INT8_MAX;
	int32_t t32 = -10889;

	t32 = (x145==((x146^x147)+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 3544U;
	static uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = -439230238;

	t33 = (x149==((x150^x151)+x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x153 = -1;
	int16_t x154 = -1;
	int8_t x155 = -1;
	int32_t x156 = INT32_MAX;

	t34 = (x153==((x154^x155)+x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x158 = INT64_MAX;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t t35 = -735329447;

	t35 = (x157==((x158^x159)+x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	volatile int16_t x162 = -1;
	uint16_t x164 = 0U;
	volatile int32_t t36 = -14715;

	t36 = (x161==((x162^x163)+x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = -7;
	static uint64_t x174 = 331355006189LLU;
	int8_t x175 = -12;
	static volatile int32_t x176 = INT32_MIN;
	volatile int32_t t37 = 1673839;

	t37 = (x173==((x174^x175)+x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x177 = 782;
	uint64_t x178 = 7813253570227959532LLU;
	uint64_t x179 = 1LLU;
	uint64_t x180 = UINT64_MAX;
	int32_t t38 = -1;

	t38 = (x177==((x178^x179)+x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x182 = INT16_MIN;
	uint32_t x184 = 80420U;
	static int32_t t39 = 50508;

	t39 = (x181==((x182^x183)+x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x185 = 4;
	static int32_t x186 = 12;
	static int8_t x187 = INT8_MIN;
	static uint16_t x188 = UINT16_MAX;
	int32_t t40 = -24616260;

	t40 = (x185==((x186^x187)+x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x189 = 4995974674361LLU;
	static volatile int64_t x190 = 2757490659LL;
	volatile uint64_t x191 = 8582970519LLU;
	int32_t x192 = -1;
	volatile int32_t t41 = 5551;

	t41 = (x189==((x190^x191)+x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	static int32_t x196 = -114;

	t42 = (x193==((x194^x195)+x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = 753675LL;
	static volatile int64_t x199 = 62135994622340869LL;
	static uint64_t x200 = 321607607316LLU;
	int32_t t43 = -685190;

	t43 = (x197==((x198^x199)+x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	static uint16_t x202 = UINT16_MAX;
	uint64_t x204 = 2655LLU;
	int32_t t44 = 3527;

	t44 = (x201==((x202^x203)+x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -5842504746453LL;
	int16_t x206 = INT16_MIN;
	static uint64_t x207 = 43935643412LLU;
	int8_t x208 = -7;
	int32_t t45 = 24114006;

	t45 = (x205==((x206^x207)+x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x209 = 710U;
	int32_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int32_t t46 = -64254036;

	t46 = (x209==((x210^x211)+x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x214 = INT16_MIN;
	int16_t x216 = INT16_MAX;

	t47 = (x213==((x214^x215)+x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x218 = 62279076U;
	int32_t x219 = INT32_MIN;
	static volatile uint64_t x220 = 8408681219633LLU;
	volatile int32_t t48 = -61379;

	t48 = (x217==((x218^x219)+x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x222 = 1267LL;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;
	int32_t t49 = -14;

	t49 = (x221==((x222^x223)+x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	int32_t x227 = -14;
	static int16_t x228 = INT16_MIN;
	int32_t t50 = 2009;

	t50 = (x225==((x226^x227)+x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x229 = 47937250LLU;
	int8_t x230 = INT8_MIN;
	uint8_t x231 = UINT8_MAX;

	t51 = (x229==((x230^x231)+x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = 506463476LL;
	volatile int32_t x235 = -1;
	static volatile int32_t t52 = 892;

	t52 = (x233==((x234^x235)+x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x239 = 299;
	static int16_t x240 = -1;
	volatile int32_t t53 = 327;

	t53 = (x237==((x238^x239)+x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 3770U;
	volatile uint32_t x243 = 20U;
	volatile uint32_t x244 = 65482U;
	volatile int32_t t54 = -22888644;

	t54 = (x241==((x242^x243)+x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	int16_t x247 = 0;
	int32_t x248 = -1;
	volatile int32_t t55 = -39;

	t55 = (x245==((x246^x247)+x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x249 = INT32_MIN;
	int32_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = -7;
	volatile int32_t t56 = 245636;

	t56 = (x249==((x250^x251)+x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x253 = -1LL;
	static uint64_t x254 = UINT64_MAX;
	static int64_t x255 = INT64_MAX;
	int16_t x256 = -3724;
	int32_t t57 = -5425;

	t57 = (x253==((x254^x255)+x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = 0;
	uint32_t x258 = 216047778U;
	uint16_t x259 = 1632U;
	int16_t x260 = INT16_MIN;
	int32_t t58 = -1;

	t58 = (x257==((x258^x259)+x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 2U;
	uint32_t x262 = 240U;
	uint32_t x263 = 68347049U;
	int8_t x264 = -18;
	static int32_t t59 = 98;

	t59 = (x261==((x262^x263)+x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x266 = 2U;
	int64_t x267 = INT64_MAX;
	int16_t x268 = -1;
	int32_t t60 = 303674634;

	t60 = (x265==((x266^x267)+x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = -248320700LL;
	uint32_t x270 = 2031535U;
	int8_t x271 = 51;
	static int8_t x272 = -1;
	static volatile int32_t t61 = 2819021;

	t61 = (x269==((x270^x271)+x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = INT8_MAX;
	uint8_t x275 = 4U;
	volatile int64_t x276 = INT64_MAX;
	volatile int32_t t62 = 90729;

	t62 = (x273==((x274^x275)+x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = 1466;
	uint32_t x278 = UINT32_MAX;
	volatile int16_t x279 = 62;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t63 = -380452052;

	t63 = (x277==((x278^x279)+x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = -1LL;
	uint32_t x284 = 7036U;
	volatile int32_t t64 = -2460;

	t64 = (x281==((x282^x283)+x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x285 = -802256310;
	volatile int32_t x288 = INT32_MIN;
	static volatile int32_t t65 = -54471;

	t65 = (x285==((x286^x287)+x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -13532;
	static int8_t x294 = -1;
	static int8_t x295 = -1;
	static uint8_t x296 = 59U;
	static int32_t t66 = -504;

	t66 = (x293==((x294^x295)+x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = -63937;
	int64_t x299 = 1LL;
	uint8_t x300 = 40U;

	t67 = (x297==((x298^x299)+x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x301 = INT8_MAX;
	uint8_t x302 = UINT8_MAX;
	uint8_t x303 = 20U;
	volatile int32_t t68 = 1058614;

	t68 = (x301==((x302^x303)+x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = 11;
	int32_t x306 = INT32_MAX;
	static uint32_t x307 = 1587938578U;
	volatile int32_t t69 = -6;

	t69 = (x305==((x306^x307)+x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = -1;
	int32_t x310 = 1;
	int16_t x311 = INT16_MIN;
	volatile int32_t t70 = 194727337;

	t70 = (x309==((x310^x311)+x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x313 = -14721440;
	int8_t x314 = INT8_MIN;
	static volatile uint16_t x315 = 10U;
	uint8_t x316 = 8U;
	volatile int32_t t71 = 171129;

	t71 = (x313==((x314^x315)+x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x318 = 0LLU;
	int16_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	static int32_t t72 = -1137897;

	t72 = (x317==((x318^x319)+x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x322 = INT8_MIN;
	int16_t x323 = 4808;
	int16_t x324 = -1;
	static int32_t t73 = -239;

	t73 = (x321==((x322^x323)+x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = -6;
	int64_t x326 = 33213101871905LL;
	int32_t t74 = -751909311;

	t74 = (x325==((x326^x327)+x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x329 = -3LL;
	volatile int16_t x330 = -9;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = INT64_MIN;
	int32_t t75 = 1;

	t75 = (x329==((x330^x331)+x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x335 = -95404530LL;
	int64_t x336 = INT64_MIN;
	int32_t t76 = -1665331;

	t76 = (x333==((x334^x335)+x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	static uint64_t x343 = UINT64_MAX;
	static volatile int64_t x344 = INT64_MIN;

	t77 = (x341==((x342^x343)+x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = INT64_MIN;
	static int64_t x346 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	uint64_t x348 = 195LLU;
	int32_t t78 = -203637;

	t78 = (x345==((x346^x347)+x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = 0;
	uint8_t x351 = 4U;
	uint32_t x352 = UINT32_MAX;
	static int32_t t79 = 299555;

	t79 = (x349==((x350^x351)+x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = 7532590LLU;
	int32_t x354 = INT32_MAX;
	uint8_t x355 = 30U;
	volatile int32_t t80 = -1805891;

	t80 = (x353==((x354^x355)+x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = 1380036161LL;
	uint8_t x358 = 7U;
	int32_t x359 = INT32_MIN;
	int32_t t81 = 210;

	t81 = (x357==((x358^x359)+x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = INT64_MIN;
	uint8_t x362 = 1U;
	static int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -1;
	static int32_t t82 = -927909;

	t82 = (x361==((x362^x363)+x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int32_t x366 = -92099536;
	uint32_t x367 = UINT32_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t83 = 367;

	t83 = (x365==((x366^x367)+x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	static volatile int32_t t84 = 121;

	t84 = (x373==((x374^x375)+x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x378 = INT32_MAX;
	int32_t x379 = -83498644;

	t85 = (x377==((x378^x379)+x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MIN;
	uint64_t x382 = 135144569052249LLU;
	volatile int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MIN;

	t86 = (x381==((x382^x383)+x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	int8_t x388 = 28;
	int32_t t87 = -1025815;

	t87 = (x385==((x386^x387)+x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x389 = 2088612U;
	static volatile int8_t x390 = INT8_MAX;
	int64_t x391 = 45LL;
	uint8_t x392 = 0U;
	volatile int32_t t88 = 9619;

	t88 = (x389==((x390^x391)+x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = -1;
	int16_t x395 = 4;
	uint16_t x396 = 59U;
	volatile int32_t t89 = 5778;

	t89 = (x393==((x394^x395)+x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = 38;
	static volatile int64_t x398 = INT64_MAX;
	int8_t x399 = -1;
	volatile uint64_t x400 = UINT64_MAX;

	t90 = (x397==((x398^x399)+x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x401 = UINT32_MAX;
	uint8_t x402 = 1U;
	int16_t x403 = INT16_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile int32_t t91 = -40;

	t91 = (x401==((x402^x403)+x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x405 = INT8_MAX;
	int16_t x406 = -312;
	static volatile uint32_t x407 = 7658U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t92 = 170;

	t92 = (x405==((x406^x407)+x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x409 = UINT32_MAX;
	int64_t x410 = INT64_MIN;
	int8_t x412 = -1;
	int32_t t93 = 6451170;

	t93 = (x409==((x410^x411)+x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x414 = UINT8_MAX;

	t94 = (x413==((x414^x415)+x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t95 = -33;

	t95 = (x417==((x418^x419)+x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x421 = 17736177U;
	volatile uint64_t x422 = UINT64_MAX;
	uint8_t x423 = UINT8_MAX;
	static int32_t x424 = INT32_MIN;
	int32_t t96 = 8640;

	t96 = (x421==((x422^x423)+x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x428 = INT32_MIN;
	static int32_t t97 = -1;

	t97 = (x425==((x426^x427)+x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MIN;
	int32_t x436 = INT32_MAX;

	t98 = (x433==((x434^x435)+x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	volatile int8_t x440 = 0;
	static volatile int32_t t99 = 0;

	t99 = (x437==((x438^x439)+x440));

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

