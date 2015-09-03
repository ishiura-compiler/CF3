#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = UINT8_MAX;
volatile int32_t t2 = 105;
int16_t x19 = INT16_MIN;
uint8_t x23 = 104U;
int16_t x26 = -14405;
uint32_t x34 = UINT32_MAX;
int64_t x35 = INT64_MIN;
volatile int32_t t9 = -32;
int64_t x45 = INT64_MIN;
static volatile int32_t t12 = -664;
int16_t x54 = -4;
volatile int16_t x60 = INT16_MIN;
int32_t x63 = INT32_MIN;
int32_t t17 = 2;
int16_t x73 = -578;
volatile int32_t t19 = 10421699;
static int32_t x82 = 11;
volatile int32_t t21 = -1428;
int8_t x91 = -1;
int8_t x100 = INT8_MIN;
volatile int16_t x104 = 2037;
volatile int16_t x108 = INT16_MIN;
int8_t x114 = 4;
int32_t t28 = -3;
int32_t x119 = INT32_MIN;
static int32_t t29 = -1065402276;
int32_t x123 = INT32_MIN;
int64_t x126 = 20190220016639961LL;
uint64_t x131 = 1078002555360715896LLU;
static volatile int16_t x141 = INT16_MIN;
static volatile int16_t x142 = INT16_MAX;
int64_t x148 = -1LL;
static uint16_t x149 = 191U;
volatile int16_t x158 = INT16_MAX;
uint8_t x162 = 19U;
int32_t x165 = INT32_MIN;
int16_t x166 = -1;
static uint32_t x167 = UINT32_MAX;
static uint64_t x177 = 3140416LLU;
int32_t x178 = INT32_MAX;
int32_t t45 = 7365504;
static int32_t x188 = 101;
static uint8_t x189 = 36U;
volatile uint8_t x194 = 6U;
int16_t x196 = INT16_MAX;
int16_t x198 = -212;
int16_t x199 = -1;
volatile uint64_t x200 = 1846159LLU;
int64_t x201 = -3105736090176814702LL;
int64_t x203 = INT64_MIN;
volatile int32_t x209 = 4833557;
uint16_t x218 = 5349U;
static int32_t x219 = INT32_MIN;
volatile int32_t t56 = 1007;
uint64_t x230 = 38153850LLU;
int8_t x233 = -1;
int64_t x235 = -757271642LL;
static int16_t x236 = INT16_MIN;
uint16_t x242 = 61U;
int64_t x249 = INT64_MIN;
int32_t x255 = -1;
int16_t x258 = INT16_MAX;
int16_t x260 = INT16_MIN;
int64_t x261 = INT64_MIN;
volatile int32_t t65 = 2;
int16_t x268 = 2743;
int16_t x269 = INT16_MIN;
int8_t x270 = -6;
volatile int32_t t67 = 57482905;
volatile int32_t t68 = 3;
static volatile uint8_t x278 = UINT8_MAX;
uint16_t x279 = 12U;
int8_t x280 = INT8_MAX;
uint64_t x282 = 44070LLU;
volatile int64_t x283 = -1LL;
uint16_t x288 = 1U;
int32_t x291 = INT32_MAX;
static volatile int32_t x297 = INT32_MIN;
static int32_t x304 = INT32_MAX;
volatile int8_t x305 = INT8_MIN;
volatile int32_t t80 = 3414;
int32_t x325 = INT32_MIN;
uint32_t x330 = 114397246U;
volatile int32_t t82 = 4878;
int16_t x337 = 61;
volatile uint64_t x339 = 23669166070456LLU;
int16_t x342 = INT16_MIN;
int32_t t85 = 1000140998;
int32_t x353 = INT32_MAX;
volatile int8_t x356 = INT8_MIN;
uint32_t x358 = 195914U;
uint64_t x361 = UINT64_MAX;
volatile int8_t x370 = -1;
static int8_t x371 = INT8_MAX;
static int16_t x373 = INT16_MAX;
static uint8_t x375 = 61U;
int16_t x380 = -11235;
uint32_t x381 = UINT32_MAX;
int8_t x382 = -1;
int32_t x388 = INT32_MIN;
static int32_t t98 = 17;
int32_t x397 = -19;


void f0(void) {
	volatile int64_t x1 = -1LL;
	volatile int16_t x2 = 23;
	volatile uint32_t x4 = 778428U;
	volatile int32_t t0 = 57189;

	t0 = ((x1<x2)^(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	static int16_t x6 = -1;
	int8_t x7 = -1;
	int16_t x8 = -1;
	static volatile int32_t t1 = 1;

	t1 = ((x5<x6)^(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 1U;
	static int16_t x12 = -1;

	t2 = ((x9<x10)^(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	static int32_t x16 = 131612377;
	int32_t t3 = -3;

	t3 = ((x13<x14)^(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1829LLU;
	int8_t x18 = -8;
	int64_t x20 = 7704168LL;
	volatile int32_t t4 = -364496;

	t4 = ((x17<x18)^(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int32_t x22 = 1015803;
	int32_t x24 = INT32_MAX;
	static volatile int32_t t5 = 831818;

	t5 = ((x21<x22)^(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x27 = -1LL;
	static int64_t x28 = -1LL;
	int32_t t6 = 5689608;

	t6 = ((x25<x26)^(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 229164U;
	uint8_t x30 = 24U;
	static int64_t x31 = -1LL;
	static volatile int32_t x32 = 99;
	volatile int32_t t7 = 78412;

	t7 = ((x29<x30)^(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	uint32_t x36 = 731012U;
	volatile int32_t t8 = 2;

	t8 = ((x33<x34)^(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	uint64_t x38 = 283317675523622LLU;
	static volatile uint16_t x39 = UINT16_MAX;
	int32_t x40 = INT32_MIN;

	t9 = ((x37<x38)^(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	static int64_t x44 = 0LL;
	static int32_t t10 = -4000356;

	t10 = ((x41<x42)^(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 24102;

	t11 = ((x45<x46)^(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 9U;
	int8_t x50 = 9;
	volatile int16_t x51 = -321;
	static int32_t x52 = INT32_MAX;

	t12 = ((x49<x50)^(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 488289226U;
	int16_t x55 = INT16_MAX;
	int64_t x56 = -20543442667539LL;
	int32_t t13 = -1016455;

	t13 = ((x53<x54)^(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile int32_t t14 = -5318;

	t14 = ((x57<x58)^(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static uint16_t x62 = UINT16_MAX;
	uint64_t x64 = 12291043301687020LLU;
	volatile int32_t t15 = -587;

	t15 = ((x61<x62)^(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = 23;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 523;

	t16 = ((x65<x66)^(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -1LL;

	t17 = ((x69<x70)^(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 27LL;
	volatile int32_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static int32_t t18 = -1;

	t18 = ((x73<x74)^(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1067217;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = 94U;
	int16_t x80 = INT16_MAX;

	t19 = ((x77<x78)^(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint8_t x83 = 2U;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 17;

	t20 = ((x81<x82)^(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -237;
	uint32_t x86 = 539839U;
	int64_t x87 = INT64_MIN;
	int64_t x88 = 1669LL;

	t21 = ((x85<x86)^(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = -1;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = 15837;

	t22 = ((x89<x90)^(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = INT64_MIN;
	static volatile int16_t x96 = INT16_MAX;
	static int32_t t23 = -808653864;

	t23 = ((x93<x94)^(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 230U;
	static uint8_t x98 = UINT8_MAX;
	uint16_t x99 = 115U;
	int32_t t24 = -590;

	t24 = ((x97<x98)^(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	static volatile uint16_t x102 = 11U;
	volatile int64_t x103 = 72682808560338LL;
	int32_t t25 = -70485;

	t25 = ((x101<x102)^(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = 1696;
	int32_t x106 = INT32_MIN;
	int16_t x107 = 1632;
	int32_t t26 = 51068;

	t26 = ((x105<x106)^(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MAX;
	volatile uint64_t x111 = 17544620091136810LLU;
	static volatile uint16_t x112 = 203U;
	int32_t t27 = -388;

	t27 = ((x109<x110)^(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -475673935125566LL;
	volatile int64_t x115 = INT64_MIN;
	static volatile uint64_t x116 = 6LLU;

	t28 = ((x113<x114)^(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -25;
	volatile int8_t x118 = 54;
	uint64_t x120 = 734073832596721LLU;

	t29 = ((x117<x118)^(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = UINT64_MAX;
	int64_t x122 = INT64_MIN;
	uint64_t x124 = 3563701539LLU;
	int32_t t30 = -65;

	t30 = ((x121<x122)^(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x125 = INT16_MAX;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -1322;

	t31 = ((x125<x126)^(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static int16_t x130 = -1;
	volatile uint8_t x132 = 3U;
	int32_t t32 = 47968960;

	t32 = ((x129<x130)^(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 40;
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = 395963LL;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t33 = -167;

	t33 = ((x133<x134)^(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile int64_t x138 = INT64_MAX;
	volatile int16_t x139 = 76;
	uint64_t x140 = 86914LLU;
	int32_t t34 = 5;

	t34 = ((x137<x138)^(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x143 = INT8_MAX;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 1027;

	t35 = ((x141<x142)^(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1013791LL;
	uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = INT16_MAX;
	static volatile int32_t t36 = 55192;

	t36 = ((x145<x146)^(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	static uint8_t x151 = 117U;
	volatile int32_t x152 = -4;
	volatile int32_t t37 = -32190804;

	t37 = ((x149<x150)^(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	static volatile int32_t x154 = INT32_MIN;
	uint64_t x155 = 56624116LLU;
	int8_t x156 = -1;
	int32_t t38 = -1309;

	t38 = ((x153<x154)^(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 3741462085719557743LLU;
	volatile int8_t x159 = INT8_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 13;

	t39 = ((x157<x158)^(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static uint64_t x163 = UINT64_MAX;
	uint64_t x164 = 29794LLU;
	volatile int32_t t40 = -317671701;

	t40 = ((x161<x162)^(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x168 = -14;
	int32_t t41 = 0;

	t41 = ((x165<x166)^(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 3U;
	volatile int8_t x170 = 1;
	int8_t x171 = INT8_MIN;
	static volatile int16_t x172 = -1;
	static volatile int32_t t42 = 1;

	t42 = ((x169<x170)^(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = -219;
	static int8_t x175 = 1;
	static int32_t x176 = -14129;
	int32_t t43 = -5;

	t43 = ((x173<x174)^(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x179 = -50;
	int64_t x180 = -28284649819LL;
	int32_t t44 = -187122352;

	t44 = ((x177<x178)^(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 12557U;
	static int8_t x182 = INT8_MIN;
	int32_t x183 = -1;
	int8_t x184 = INT8_MAX;

	t45 = ((x181<x182)^(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	static int64_t x186 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	int32_t t46 = -106478;

	t46 = ((x185<x186)^(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = 52802921LLU;
	volatile int32_t t47 = 59;

	t47 = ((x189<x190)^(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 17U;
	int32_t x195 = INT32_MAX;
	int32_t t48 = 550;

	t48 = ((x193<x194)^(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MAX;
	static int32_t t49 = 5;

	t49 = ((x197<x198)^(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x202 = 4U;
	volatile uint16_t x204 = 0U;
	static int32_t t50 = -240;

	t50 = ((x201<x202)^(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 883;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = -1LL;
	int16_t x208 = -3;
	volatile int32_t t51 = -155877;

	t51 = ((x205<x206)^(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x210 = UINT16_MAX;
	uint16_t x211 = 61U;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t52 = -1;

	t52 = ((x209<x210)^(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	int16_t x214 = -1;
	uint8_t x215 = 3U;
	int32_t x216 = 83710;
	volatile int32_t t53 = -1;

	t53 = ((x213<x214)^(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 2446585;

	t54 = ((x217<x218)^(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 15U;
	int64_t x222 = INT64_MIN;
	volatile int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MAX;
	int32_t t55 = -1004356;

	t55 = ((x221<x222)^(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	volatile uint32_t x226 = 385777556U;
	int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;

	t56 = ((x225<x226)^(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 3U;
	uint64_t x231 = 16524389835168LLU;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t57 = 199;

	t57 = ((x229<x230)^(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	int32_t t58 = 1;

	t58 = ((x233<x234)^(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	int16_t x240 = -3;
	static int32_t t59 = 120333126;

	t59 = ((x237<x238)^(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	volatile int32_t t60 = 0;

	t60 = ((x241<x242)^(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MAX;
	volatile int16_t x246 = -1086;
	int16_t x247 = INT16_MIN;
	volatile int16_t x248 = 1813;
	static int32_t t61 = 7;

	t61 = ((x245<x246)^(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	volatile int32_t x251 = 16165431;
	int64_t x252 = INT64_MIN;
	static volatile int32_t t62 = -1;

	t62 = ((x249<x250)^(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -2489;
	uint16_t x254 = UINT16_MAX;
	int32_t x256 = -1;
	volatile int32_t t63 = 7527;

	t63 = ((x253<x254)^(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 570621009062600907LL;
	uint16_t x259 = UINT16_MAX;
	int32_t t64 = 6248;

	t64 = ((x257<x258)^(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x262 = 7558922468202LLU;
	uint32_t x263 = 3U;
	uint8_t x264 = UINT8_MAX;

	t65 = ((x261<x262)^(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = 23953713509039LLU;
	uint16_t x267 = 32033U;
	volatile int32_t t66 = 1502;

	t66 = ((x265<x266)^(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x271 = 0U;
	uint64_t x272 = 22861986806790087LLU;

	t67 = ((x269<x270)^(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;

	t68 = ((x273<x274)^(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 8115404217220LLU;
	volatile int32_t t69 = 572746053;

	t69 = ((x277<x278)^(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 13716223U;
	int32_t x284 = 5473068;
	int32_t t70 = 0;

	t70 = ((x281<x282)^(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 27920U;
	uint16_t x286 = 621U;
	uint16_t x287 = 1143U;
	volatile int32_t t71 = -41484138;

	t71 = ((x285<x286)^(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	volatile int16_t x290 = 32;
	int32_t x292 = -1;
	static volatile int32_t t72 = 281926531;

	t72 = ((x289<x290)^(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 6695U;
	volatile int32_t t73 = -26649;

	t73 = ((x293<x294)^(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = INT32_MIN;
	int8_t x300 = -1;
	int32_t t74 = 105;

	t74 = ((x297<x298)^(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	volatile int32_t x302 = 120;
	int16_t x303 = INT16_MIN;
	int32_t t75 = -1582757;

	t75 = ((x301<x302)^(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x306 = 131U;
	int8_t x307 = -21;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 3678;

	t76 = ((x305<x306)^(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 180654505088018868LL;
	uint8_t x310 = 0U;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MAX;
	volatile int32_t t77 = 27626;

	t77 = ((x309<x310)^(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint32_t x314 = 2842492U;
	int8_t x315 = INT8_MIN;
	static volatile int32_t x316 = INT32_MIN;
	static int32_t t78 = -1905;

	t78 = ((x313<x314)^(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 5468724241LLU;
	uint32_t x319 = 3527979U;
	volatile int32_t x320 = -64;
	int32_t t79 = -100;

	t79 = ((x317<x318)^(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 136720695967709LLU;
	int16_t x322 = INT16_MAX;
	int64_t x323 = 470LL;
	static int64_t x324 = INT64_MIN;

	t80 = ((x321<x322)^(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -1LL;
	int64_t x327 = 79013412505LL;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = -2110113;

	t81 = ((x325<x326)^(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	volatile int16_t x331 = -1;
	int32_t x332 = INT32_MIN;

	t82 = ((x329<x330)^(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 0U;
	int16_t x334 = -6237;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	volatile int32_t t83 = 35;

	t83 = ((x333<x334)^(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -1;
	static int64_t x340 = INT64_MIN;
	int32_t t84 = -109895;

	t84 = ((x337<x338)^(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x341 = UINT8_MAX;
	static int32_t x343 = INT32_MIN;
	uint16_t x344 = 4439U;

	t85 = ((x341<x342)^(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -332382995;
	int32_t x346 = 0;
	int32_t x347 = INT32_MIN;
	volatile int16_t x348 = INT16_MIN;
	int32_t t86 = 1221;

	t86 = ((x345<x346)^(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = -1;
	uint64_t x351 = 190902521185732785LLU;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -189487;

	t87 = ((x349<x350)^(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MAX;
	volatile int32_t t88 = 281;

	t88 = ((x353<x354)^(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	static uint32_t x359 = 3U;
	static int64_t x360 = 29LL;
	static int32_t t89 = 53699444;

	t89 = ((x357<x358)^(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	volatile uint64_t x363 = 130794437LLU;
	static uint32_t x364 = 15U;
	static volatile int32_t t90 = 15226;

	t90 = ((x361<x362)^(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 0;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 2U;
	volatile int8_t x368 = -1;
	static int32_t t91 = 4;

	t91 = ((x365<x366)^(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1365953793U;
	volatile uint64_t x372 = 53650944683086053LLU;
	int32_t t92 = 711238906;

	t92 = ((x369<x370)^(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 1579298249LLU;
	int16_t x376 = 1;
	volatile int32_t t93 = -120155056;

	t93 = ((x373<x374)^(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 15U;
	static int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	volatile int32_t t94 = 163;

	t94 = ((x377<x378)^(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x383 = -1;
	uint8_t x384 = 9U;
	volatile int32_t t95 = 7;

	t95 = ((x381<x382)^(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x386 = 225LLU;
	int16_t x387 = 8;
	volatile int32_t t96 = -8246627;

	t96 = ((x385<x386)^(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	int8_t x391 = -1;
	volatile int16_t x392 = INT16_MIN;
	static volatile int32_t t97 = -1;

	t97 = ((x389<x390)^(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MAX;
	static uint16_t x396 = 29236U;

	t98 = ((x393<x394)^(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x398 = INT8_MIN;
	volatile int16_t x399 = 559;
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 36;

	t99 = ((x397<x398)^(x399==x400));

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

