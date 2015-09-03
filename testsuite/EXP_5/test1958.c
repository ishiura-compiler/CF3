#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 2;
volatile int32_t x12 = INT32_MIN;
int32_t x26 = INT32_MAX;
int64_t x29 = INT64_MIN;
volatile uint64_t x31 = UINT64_MAX;
int64_t x38 = -1LL;
volatile uint8_t x41 = 12U;
volatile int32_t t11 = -2569487;
int32_t x49 = -1;
int8_t x51 = -3;
int32_t t13 = -927;
static volatile int8_t x57 = 1;
static uint8_t x58 = 10U;
int32_t t14 = 687682084;
volatile int64_t x61 = INT64_MAX;
volatile uint16_t x62 = UINT16_MAX;
int16_t x74 = INT16_MIN;
int64_t x81 = -1LL;
int8_t x82 = -1;
int8_t x84 = INT8_MAX;
uint64_t x86 = 8304721627252LLU;
volatile int32_t t21 = -235048661;
int32_t t22 = 878235852;
int32_t x95 = INT32_MIN;
int32_t x97 = 2182935;
int8_t x101 = INT8_MIN;
int8_t x105 = INT8_MIN;
static int16_t x108 = 0;
static uint32_t x112 = 1978012956U;
int32_t t28 = 77342952;
int8_t x117 = 2;
int8_t x119 = INT8_MIN;
volatile int8_t x122 = -1;
static int64_t x124 = INT64_MAX;
static int32_t t30 = 2103;
int64_t x126 = INT64_MIN;
static int32_t x133 = INT32_MIN;
static volatile int8_t x134 = INT8_MIN;
int32_t x146 = -1;
static int64_t x151 = INT64_MIN;
int32_t t37 = -25;
static uint16_t x160 = 0U;
volatile uint32_t x167 = 1412106U;
static uint16_t x168 = 4652U;
int64_t x176 = 875295141205309LL;
int64_t x178 = -35131782336988018LL;
static int64_t x182 = -7699709118199LL;
static int8_t x191 = -1;
uint16_t x192 = 22U;
int16_t x196 = -3;
int32_t t48 = 1;
int16_t x199 = 0;
volatile uint64_t x207 = UINT64_MAX;
int8_t x208 = INT8_MIN;
volatile int64_t x210 = INT64_MIN;
int16_t x211 = INT16_MIN;
int32_t t52 = 5;
int64_t x215 = INT64_MIN;
static volatile int32_t t53 = -1;
int8_t x221 = INT8_MIN;
int64_t x222 = -1290317840532LL;
uint16_t x225 = 2833U;
int16_t x229 = INT16_MIN;
uint8_t x233 = 52U;
int32_t x236 = INT32_MAX;
static int64_t x241 = INT64_MIN;
static volatile int32_t t61 = -398;
uint8_t x249 = UINT8_MAX;
int64_t x255 = INT64_MIN;
uint8_t x258 = 89U;
uint64_t x264 = 4889963LLU;
volatile int32_t t67 = 247;
static int8_t x275 = INT8_MAX;
static volatile int32_t t68 = 7995434;
volatile int32_t t69 = 69799;
int16_t x282 = 6;
uint32_t x299 = 29U;
int16_t x304 = -1;
int32_t t76 = -13687355;
uint8_t x310 = UINT8_MAX;
int32_t t77 = 1252134;
static int64_t x313 = INT64_MAX;
int16_t x320 = INT16_MIN;
static volatile int32_t t81 = -409155;
static volatile int32_t t82 = -1;
int64_t x342 = 2397567000LL;
static int64_t x345 = INT64_MIN;
int32_t x347 = INT32_MIN;
int8_t x349 = 22;
int16_t x351 = INT16_MIN;
int64_t x355 = INT64_MAX;
static int32_t t88 = 7;
int32_t x362 = INT32_MAX;
volatile int32_t x368 = -1;
uint16_t x370 = UINT16_MAX;
uint32_t x376 = 28129U;
int16_t x397 = INT16_MIN;
int32_t t99 = 82416270;


void f0(void) {
	volatile uint64_t x1 = 121509584224182LLU;
	int64_t x3 = INT64_MAX;
	uint8_t x4 = 1U;
	int32_t t0 = -4875;

	t0 = (x1==((x2|x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 24;
	uint64_t x6 = 2295021LLU;
	static uint64_t x7 = UINT64_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -3415;

	t1 = (x5==((x6|x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 8235859885546455LLU;
	uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = INT8_MAX;
	static int32_t t2 = -79766981;

	t2 = (x9==((x10|x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = UINT8_MAX;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = -8LL;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = -1859;

	t3 = (x13==((x14|x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	int32_t x18 = INT32_MIN;
	static volatile int16_t x19 = INT16_MAX;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 1;

	t4 = (x17==((x18|x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 133U;
	int8_t x22 = -4;
	int32_t x23 = INT32_MIN;
	uint32_t x24 = 4744290U;
	int32_t t5 = -1;

	t5 = (x21==((x22|x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 12U;
	uint64_t x27 = 545578205828LLU;
	uint64_t x28 = 609104LLU;
	static int32_t t6 = 3229362;

	t6 = (x25==((x26|x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 11;
	int8_t x32 = -1;
	int32_t t7 = 1;

	t7 = (x29==((x30|x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int32_t x34 = INT32_MIN;
	volatile uint16_t x35 = 5480U;
	int64_t x36 = -1LL;
	int32_t t8 = 0;

	t8 = (x33==((x34|x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x39 = -1;
	int64_t x40 = 2180LL;
	int32_t t9 = 1025697;

	t9 = (x37==((x38|x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = INT64_MIN;
	static uint8_t x43 = UINT8_MAX;
	volatile int16_t x44 = 0;
	volatile int32_t t10 = -1;

	t10 = (x41==((x42|x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1858901466698LL;
	static int64_t x46 = -4140575115LL;
	static uint64_t x47 = 2148327941LLU;
	int64_t x48 = 520631275403LL;

	t11 = (x45==((x46|x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -2812;

	t12 = (x49==((x50|x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = -4;
	int16_t x56 = -4009;

	t13 = (x53==((x54|x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x59 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;

	t14 = (x57==((x58|x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MIN;
	uint32_t x64 = 140555964U;
	int32_t t15 = -1;

	t15 = (x61==((x62|x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	uint32_t x66 = 8220U;
	volatile uint16_t x67 = 6082U;
	static volatile int32_t x68 = 2;
	volatile int32_t t16 = -1781;

	t16 = (x65==((x66|x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	volatile int16_t x71 = INT16_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 2;

	t17 = (x69==((x70|x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 0;
	int16_t x75 = 100;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 111267858;

	t18 = (x73==((x74|x75)==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 311;

	t19 = (x77==((x78|x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = INT8_MIN;
	int32_t t20 = 6;

	t20 = (x81==((x82|x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int8_t x88 = 29;

	t21 = (x85==((x86|x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	static volatile int64_t x90 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;

	t22 = (x89==((x90|x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 3U;
	uint64_t x94 = UINT64_MAX;
	int16_t x96 = INT16_MAX;
	int32_t t23 = 2;

	t23 = (x93==((x94|x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	volatile int8_t x99 = -3;
	uint8_t x100 = 52U;
	static volatile int32_t t24 = 1;

	t24 = (x97==((x98|x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x102 = UINT32_MAX;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 1352;

	t25 = (x101==((x102|x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = -1;
	volatile int32_t t26 = -42;

	t26 = (x105==((x106|x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 3;
	int16_t x110 = 3329;
	static int32_t x111 = INT32_MIN;
	static int32_t t27 = 29143;

	t27 = (x109==((x110|x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 2700929U;
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = INT8_MIN;

	t28 = (x113==((x114|x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x118 = UINT64_MAX;
	static volatile uint16_t x120 = 2254U;
	volatile int32_t t29 = 242038;

	t29 = (x117==((x118|x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 47;
	int8_t x123 = INT8_MAX;

	t30 = (x121==((x122|x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 13U;
	static volatile uint32_t x127 = UINT32_MAX;
	volatile int32_t x128 = -31942180;
	int32_t t31 = 1556;

	t31 = (x125==((x126|x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -46;
	static int8_t x130 = -1;
	int8_t x131 = -15;
	int8_t x132 = -9;
	volatile int32_t t32 = 32775901;

	t32 = (x129==((x130|x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 75;

	t33 = (x133==((x134|x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 29563545510616515LLU;
	int32_t x138 = INT32_MIN;
	volatile int16_t x139 = INT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -72945622;

	t34 = (x137==((x138|x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MAX;
	static int16_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = 4848U;
	int32_t t35 = 1;

	t35 = (x141==((x142|x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x147 = 11296U;
	static volatile uint32_t x148 = 18696U;
	volatile int32_t t36 = -702;

	t36 = (x145==((x146|x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int64_t x150 = INT64_MIN;
	static int8_t x152 = -25;

	t37 = (x149==((x150|x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -23050590;
	uint8_t x154 = 1U;
	int16_t x155 = INT16_MIN;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -24084902;

	t38 = (x153==((x154|x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MAX;
	static int32_t t39 = 126728320;

	t39 = (x157==((x158|x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -2526433006LL;
	int64_t x162 = -20168570884LL;
	uint64_t x163 = UINT64_MAX;
	static volatile int8_t x164 = -1;
	volatile int32_t t40 = -2;

	t40 = (x161==((x162|x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 219943LL;
	volatile uint16_t x166 = 1315U;
	static int32_t t41 = 224401374;

	t41 = (x165==((x166|x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = 13;
	uint32_t x170 = 1169U;
	int32_t x171 = -1;
	int8_t x172 = 12;
	static int32_t t42 = -192398976;

	t42 = (x169==((x170|x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 9;
	static int8_t x174 = -25;
	volatile int64_t x175 = INT64_MAX;
	static int32_t t43 = -745;

	t43 = (x173==((x174|x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = 63;

	t44 = (x177==((x178|x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x181 = INT32_MIN;
	volatile int16_t x183 = 1;
	int64_t x184 = 3601806638LL;
	int32_t t45 = 22415305;

	t45 = (x181==((x182|x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = INT8_MIN;
	int64_t x186 = 244751875747156LL;
	int64_t x187 = -1LL;
	int8_t x188 = -1;
	volatile int32_t t46 = 2;

	t46 = (x185==((x186|x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MIN;
	int32_t x190 = -4010;
	volatile int32_t t47 = -96401;

	t47 = (x189==((x190|x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	volatile int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;

	t48 = (x193==((x194|x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	int64_t x198 = -1LL;
	uint64_t x200 = 16962101721LLU;
	volatile int32_t t49 = -49;

	t49 = (x197==((x198|x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static uint8_t x202 = 56U;
	static volatile uint64_t x203 = 829173428117376LLU;
	uint32_t x204 = UINT32_MAX;
	static int32_t t50 = -15132887;

	t50 = (x201==((x202|x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 0U;
	volatile uint16_t x206 = 1U;
	int32_t t51 = 1;

	t51 = (x205==((x206|x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 0U;
	uint8_t x212 = UINT8_MAX;

	t52 = (x209==((x210|x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	int8_t x214 = 1;
	int16_t x216 = INT16_MIN;

	t53 = (x213==((x214|x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	static uint16_t x218 = 2U;
	volatile uint64_t x219 = 310616440279981128LLU;
	uint64_t x220 = 16184545927032LLU;
	volatile int32_t t54 = 84;

	t54 = (x217==((x218|x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x223 = -19296746;
	int8_t x224 = INT8_MIN;
	static int32_t t55 = 0;

	t55 = (x221==((x222|x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = 34802571;
	uint16_t x227 = 365U;
	static uint64_t x228 = 244404679997150350LLU;
	static volatile int32_t t56 = -147;

	t56 = (x225==((x226|x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x230 = INT8_MIN;
	volatile int32_t x231 = INT32_MIN;
	static int64_t x232 = -1LL;
	volatile int32_t t57 = -2482629;

	t57 = (x229==((x230|x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x234 = INT64_MAX;
	uint64_t x235 = UINT64_MAX;
	static volatile int32_t t58 = -200;

	t58 = (x233==((x234|x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	volatile int32_t x238 = INT32_MIN;
	static volatile int64_t x239 = INT64_MIN;
	int8_t x240 = 1;
	int32_t t59 = 29476;

	t59 = (x237==((x238|x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = -170340552442195LL;
	int16_t x243 = INT16_MIN;
	volatile uint64_t x244 = 2469LLU;
	volatile int32_t t60 = 668;

	t60 = (x241==((x242|x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = UINT8_MAX;
	int8_t x246 = -1;
	volatile int8_t x247 = INT8_MIN;
	uint8_t x248 = UINT8_MAX;

	t61 = (x245==((x246|x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -267340557;
	int8_t x251 = 1;
	uint16_t x252 = 1U;
	static int32_t t62 = -778429;

	t62 = (x249==((x250|x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = UINT16_MAX;
	volatile int32_t x254 = 218342;
	int8_t x256 = INT8_MAX;
	static volatile int32_t t63 = 37;

	t63 = (x253==((x254|x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	volatile int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -8102;

	t64 = (x257==((x258|x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	int64_t x263 = INT64_MAX;
	int32_t t65 = 95448;

	t65 = (x261==((x262|x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = -2;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MAX;
	volatile int32_t t66 = -35;

	t66 = (x265==((x266|x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x269 = 4903;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 3U;
	static uint16_t x272 = 1628U;

	t67 = (x269==((x270|x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = -11;
	uint8_t x276 = UINT8_MAX;

	t68 = (x273==((x274|x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 0;
	volatile int64_t x278 = -72573899417LL;
	uint8_t x279 = 1U;
	uint64_t x280 = 4192940432684196213LLU;

	t69 = (x277==((x278|x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	uint8_t x283 = 6U;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 7;

	t70 = (x281==((x282|x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x285 = 1230459696012553LLU;
	static int8_t x286 = -3;
	uint64_t x287 = 2555450144655LLU;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = 232535;

	t71 = (x285==((x286|x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	int8_t x290 = -39;
	uint16_t x291 = 6337U;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 72273;

	t72 = (x289==((x290|x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 0U;
	int8_t x294 = INT8_MAX;
	static volatile int16_t x295 = -1;
	int32_t x296 = -296013;
	volatile int32_t t73 = 6523;

	t73 = (x293==((x294|x295)==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -191662921509538230LL;
	int8_t x298 = INT8_MAX;
	static uint32_t x300 = 79461U;
	volatile int32_t t74 = 3472;

	t74 = (x297==((x298|x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	volatile int64_t x302 = -1LL;
	volatile int64_t x303 = -1LL;
	static int32_t t75 = -15;

	t75 = (x301==((x302|x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = 736U;
	int16_t x306 = -1;
	int16_t x307 = INT16_MAX;
	int32_t x308 = -1;

	t76 = (x305==((x306|x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x311 = 1895277680LLU;
	volatile int32_t x312 = INT32_MAX;

	t77 = (x309==((x310|x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	uint32_t x316 = 55U;
	static int32_t t78 = 17966134;

	t78 = (x313==((x314|x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = 84777395169LLU;
	static volatile int64_t x319 = INT64_MAX;
	int32_t t79 = 11876;

	t79 = (x317==((x318|x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	static int8_t x322 = 0;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MAX;
	int32_t t80 = -1110371;

	t80 = (x321==((x322|x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	volatile int32_t x326 = -1;
	uint32_t x327 = 3U;
	static int64_t x328 = -1LL;

	t81 = (x325==((x326|x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MAX;
	uint16_t x330 = 8U;
	int64_t x331 = INT64_MIN;
	static int32_t x332 = INT32_MIN;

	t82 = (x329==((x330|x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	uint64_t x334 = 4179803LLU;
	int8_t x335 = -26;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -452;

	t83 = (x333==((x334|x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int8_t x338 = 1;
	int64_t x339 = -24LL;
	uint64_t x340 = UINT64_MAX;
	int32_t t84 = 1455676;

	t84 = (x337==((x338|x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x343 = INT8_MAX;
	static int16_t x344 = INT16_MAX;
	int32_t t85 = -927734364;

	t85 = (x341==((x342|x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x346 = UINT64_MAX;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -3429;

	t86 = (x345==((x346|x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x350 = 1915520989396LL;
	volatile uint32_t x352 = 9979U;
	static volatile int32_t t87 = -2087181;

	t87 = (x349==((x350|x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 644793707113LL;
	static volatile int16_t x354 = -26;
	int8_t x356 = INT8_MAX;

	t88 = (x353==((x354|x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	int32_t x360 = -4758155;
	volatile int32_t t89 = 1;

	t89 = (x357==((x358|x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 5371285869357899LLU;
	int32_t x363 = INT32_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -326967;

	t90 = (x361==((x362|x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	static int8_t x366 = INT8_MIN;
	volatile int32_t x367 = -1;
	volatile int32_t t91 = -232133;

	t91 = (x365==((x366|x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 1645U;
	volatile int8_t x371 = -1;
	int64_t x372 = 5044442249454788LL;
	volatile int32_t t92 = -52733;

	t92 = (x369==((x370|x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	static uint32_t x374 = 261418U;
	uint32_t x375 = 23326U;
	volatile int32_t t93 = 991094;

	t93 = (x373==((x374|x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = UINT8_MAX;
	static uint16_t x378 = UINT16_MAX;
	int32_t x379 = 0;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -6148578;

	t94 = (x377==((x378|x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = UINT16_MAX;
	int8_t x382 = -5;
	static int16_t x383 = INT16_MIN;
	int32_t x384 = -1;
	volatile int32_t t95 = -11966360;

	t95 = (x381==((x382|x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 44099782;
	static volatile int64_t x386 = INT64_MAX;
	int64_t x387 = -1LL;
	int32_t x388 = 1;
	static volatile int32_t t96 = -6602221;

	t96 = (x385==((x386|x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = 19704439;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = INT32_MIN;
	int32_t t97 = -1946;

	t97 = (x389==((x390|x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 5320U;
	int8_t x394 = INT8_MIN;
	volatile uint16_t x395 = UINT16_MAX;
	uint16_t x396 = UINT16_MAX;
	static volatile int32_t t98 = -27770818;

	t98 = (x393==((x394|x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 77U;

	t99 = (x397==((x398|x399)==x400));

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

