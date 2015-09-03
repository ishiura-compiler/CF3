#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
int8_t x4 = 5;
volatile uint64_t x9 = 222262LLU;
int64_t x18 = -1LL;
int32_t t4 = 637;
volatile uint8_t x23 = 6U;
static uint32_t x26 = 13768U;
int32_t x34 = INT32_MIN;
int64_t x41 = 109153809366853LL;
int16_t x46 = INT16_MIN;
int8_t x50 = 11;
volatile int32_t t12 = -3;
static volatile uint32_t x56 = 1506430106U;
static volatile int16_t x57 = INT16_MIN;
static volatile int32_t t17 = -108315;
static volatile int8_t x81 = INT8_MAX;
static int32_t t21 = -2476205;
static volatile uint8_t x101 = 6U;
int32_t t26 = 7;
int32_t t28 = -8252564;
volatile uint8_t x132 = 25U;
int16_t x136 = INT16_MIN;
volatile int32_t t33 = -133534814;
int32_t x138 = INT32_MIN;
int64_t x141 = INT64_MIN;
volatile uint8_t x142 = 51U;
volatile int32_t t35 = -821;
int64_t x145 = 156690387LL;
uint8_t x153 = UINT8_MAX;
volatile int32_t t40 = -6;
uint64_t x166 = UINT64_MAX;
volatile int32_t t41 = 0;
int8_t x169 = INT8_MAX;
volatile int32_t t44 = -237164;
static uint8_t x183 = UINT8_MAX;
uint64_t x187 = 3843085717533LLU;
int32_t t46 = -4;
uint32_t x189 = 2259910U;
int8_t x193 = -1;
static volatile uint16_t x203 = 8315U;
static int32_t x210 = INT32_MIN;
volatile int32_t x215 = INT32_MAX;
int32_t t53 = 15599945;
int8_t x227 = 0;
int16_t x237 = -1;
int32_t x239 = -1;
uint16_t x248 = UINT16_MAX;
int32_t t61 = 4310271;
volatile int32_t x256 = INT32_MAX;
int32_t t66 = -142114380;
int32_t t67 = -93527;
int16_t x276 = INT16_MIN;
static volatile int32_t t68 = -479;
int8_t x282 = 1;
static int64_t x285 = 6736LL;
static int32_t x293 = INT32_MIN;
int8_t x299 = INT8_MAX;
volatile int8_t x310 = INT8_MIN;
static int32_t t77 = 339;
int32_t t78 = -90796;
int64_t x319 = -631699762976875618LL;
volatile int16_t x322 = INT16_MAX;
int16_t x324 = -5;
int8_t x327 = -1;
uint32_t x335 = UINT32_MAX;
int32_t t84 = -1;
static volatile uint64_t x348 = 306819987LLU;
volatile int32_t t86 = 119721;
int8_t x353 = 1;
int16_t x354 = INT16_MIN;
int32_t x358 = INT32_MIN;
int8_t x362 = -31;
int8_t x364 = -1;
int8_t x365 = -1;
static uint16_t x368 = 8U;
static int64_t x372 = INT64_MIN;
int32_t t92 = -1;
volatile int32_t t93 = 18;
int8_t x377 = 17;
static int16_t x380 = INT16_MAX;
int32_t t94 = -394608119;
uint32_t x383 = UINT32_MAX;
uint32_t x386 = 2048U;
uint8_t x387 = UINT8_MAX;
static volatile int64_t x388 = 1LL;
int32_t t96 = -9505435;
int8_t x393 = -38;
volatile int32_t t98 = -119618994;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint8_t x3 = 25U;
	volatile int32_t t0 = -1;

	t0 = ((x1<x2)*(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MAX;
	uint64_t x8 = 20005593618418410LLU;
	int32_t t1 = 16779875;

	t1 = ((x5<x6)*(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 12U;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 2602;

	t2 = ((x9<x10)*(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint8_t x14 = 70U;
	uint16_t x15 = UINT16_MAX;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -6;

	t3 = ((x13<x14)*(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x19 = INT32_MIN;
	volatile int16_t x20 = INT16_MIN;

	t4 = ((x17<x18)*(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint8_t x22 = 1U;
	volatile int32_t x24 = 7;
	volatile int32_t t5 = 1;

	t5 = ((x21<x22)*(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	uint16_t x27 = 3U;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = 15;

	t6 = ((x25<x26)*(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 15628550U;
	static volatile uint16_t x30 = 2U;
	volatile int16_t x31 = 0;
	uint32_t x32 = UINT32_MAX;
	static volatile int32_t t7 = 179320;

	t7 = ((x29<x30)*(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	volatile uint8_t x35 = 6U;
	int16_t x36 = -56;
	static volatile int32_t t8 = -432;

	t8 = ((x33<x34)*(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = -1;
	uint64_t x40 = 255940246895LLU;
	int32_t t9 = 7354038;

	t9 = ((x37<x38)*(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x42 = 29;
	static int64_t x43 = 27403600030693LL;
	int64_t x44 = -15LL;
	volatile int32_t t10 = -2684;

	t10 = ((x41<x42)*(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int8_t x47 = -6;
	int64_t x48 = -1LL;
	int32_t t11 = 0;

	t11 = ((x45<x46)*(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 1471U;
	int32_t x51 = 28812;
	int32_t x52 = -1;

	t12 = ((x49<x50)*(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 226U;
	uint32_t x54 = 140005U;
	int64_t x55 = -931979773969670684LL;
	volatile int32_t t13 = -491;

	t13 = ((x53<x54)*(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	int8_t x60 = -17;
	int32_t t14 = -8;

	t14 = ((x57<x58)*(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 436;
	static uint32_t x62 = 894397758U;
	volatile uint8_t x63 = UINT8_MAX;
	int64_t x64 = 9LL;
	int32_t t15 = 49;

	t15 = ((x61<x62)*(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 13U;
	int32_t x66 = INT32_MIN;
	int64_t x67 = INT64_MAX;
	volatile int8_t x68 = -1;
	int32_t t16 = -735400879;

	t16 = ((x65<x66)*(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x70 = INT32_MIN;
	int32_t x71 = -1;
	static int64_t x72 = INT64_MIN;

	t17 = ((x69<x70)*(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	int64_t x75 = -1LL;
	volatile uint32_t x76 = UINT32_MAX;
	int32_t t18 = 510245;

	t18 = ((x73<x74)*(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -627664484;
	uint16_t x78 = 1893U;
	int16_t x79 = -90;
	int8_t x80 = -1;
	volatile int32_t t19 = 272;

	t19 = ((x77<x78)*(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = -32820LL;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = -5717657629351541LL;
	static int32_t t20 = 0;

	t20 = ((x81<x82)*(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 42U;
	uint64_t x86 = 5008553964774258633LLU;
	int64_t x87 = INT64_MAX;
	static uint64_t x88 = UINT64_MAX;

	t21 = ((x85<x86)*(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 20U;
	volatile uint8_t x91 = UINT8_MAX;
	uint8_t x92 = 3U;
	volatile int32_t t22 = 1149569;

	t22 = ((x89<x90)*(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	volatile uint8_t x94 = 127U;
	uint16_t x95 = 667U;
	int64_t x96 = INT64_MIN;
	static int32_t t23 = -308377;

	t23 = ((x93<x94)*(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	volatile uint16_t x99 = UINT16_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = 23906868;

	t24 = ((x97<x98)*(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MAX;
	int8_t x103 = -1;
	int64_t x104 = INT64_MIN;
	static volatile int32_t t25 = -48413;

	t25 = ((x101<x102)*(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MIN;
	volatile int16_t x107 = -51;
	int16_t x108 = 1;

	t26 = ((x105<x106)*(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 83U;
	static int32_t x112 = -1;
	volatile int32_t t27 = 22122248;

	t27 = ((x109<x110)*(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 10;
	static uint16_t x114 = 153U;
	int64_t x115 = -1LL;
	int64_t x116 = 79834690805393LL;

	t28 = ((x113<x114)*(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static uint16_t x118 = 0U;
	uint64_t x119 = 49432305467LLU;
	int8_t x120 = 0;
	volatile int32_t t29 = 8938886;

	t29 = ((x117<x118)*(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -891396LL;
	int32_t x122 = -1;
	int32_t x123 = -1;
	int64_t x124 = 117699220LL;
	volatile int32_t t30 = 642;

	t30 = ((x121<x122)*(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = UINT32_MAX;
	static int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	uint32_t x128 = 0U;
	int32_t t31 = 1;

	t31 = ((x125<x126)*(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static volatile uint16_t x130 = 243U;
	int64_t x131 = INT64_MIN;
	int32_t t32 = -1187;

	t32 = ((x129<x130)*(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -24;

	t33 = ((x133<x134)*(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 58;

	t34 = ((x137<x138)*(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x143 = -22983802LL;
	volatile int8_t x144 = INT8_MIN;

	t35 = ((x141<x142)*(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 1;
	int16_t x147 = -1;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -1;

	t36 = ((x145<x146)*(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 8085168009LL;
	int8_t x150 = INT8_MIN;
	volatile int16_t x151 = -1;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = 6;

	t37 = ((x149<x150)*(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -1LL;
	static volatile int8_t x155 = 0;
	int64_t x156 = -6807LL;
	int32_t t38 = 8;

	t38 = ((x153<x154)*(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	static int64_t x158 = -179366676235023LL;
	int8_t x159 = 2;
	uint8_t x160 = UINT8_MAX;
	static volatile int32_t t39 = -485046;

	t39 = ((x157<x158)*(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 7823U;
	uint8_t x162 = UINT8_MAX;
	int16_t x163 = -20;
	uint64_t x164 = UINT64_MAX;

	t40 = ((x161<x162)*(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 190;
	static int8_t x167 = INT8_MIN;
	volatile uint16_t x168 = 380U;

	t41 = ((x165<x166)*(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x170 = -1;
	int16_t x171 = -1;
	int16_t x172 = 0;
	int32_t t42 = 1153;

	t42 = ((x169<x170)*(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	static volatile uint64_t x174 = 97LLU;
	volatile int32_t x175 = -1;
	static uint16_t x176 = 1U;
	int32_t t43 = -110;

	t43 = ((x173<x174)*(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	int64_t x178 = 89825310750LL;
	volatile uint32_t x179 = 396259691U;
	int32_t x180 = INT32_MIN;

	t44 = ((x177<x178)*(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 1U;
	int16_t x184 = 15;
	static int32_t t45 = -413;

	t45 = ((x181<x182)*(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	uint32_t x186 = 7290454U;
	volatile uint8_t x188 = UINT8_MAX;

	t46 = ((x185<x186)*(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 136609300200556884LLU;
	int16_t x191 = INT16_MIN;
	static int32_t x192 = -1;
	int32_t t47 = 116140;

	t47 = ((x189<x190)*(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	volatile int16_t x195 = INT16_MIN;
	int16_t x196 = 1120;
	volatile int32_t t48 = 2116416;

	t48 = ((x193<x194)*(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static int64_t x198 = 12LL;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	static int32_t t49 = 23702151;

	t49 = ((x197<x198)*(x199<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	uint16_t x202 = UINT16_MAX;
	static int64_t x204 = -278969LL;
	static int32_t t50 = -370256996;

	t50 = ((x201<x202)*(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	volatile int32_t x206 = INT32_MAX;
	int16_t x207 = 135;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -14006;

	t51 = ((x205<x206)*(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile int8_t x211 = INT8_MIN;
	volatile int64_t x212 = -387512939481587LL;
	int32_t t52 = 15231;

	t52 = ((x209<x210)*(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 8428465805878619995LLU;
	volatile int32_t x216 = 2214;

	t53 = ((x213<x214)*(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 813U;
	int32_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 45509;

	t54 = ((x217<x218)*(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	volatile int16_t x222 = -1;
	int16_t x223 = -9;
	int64_t x224 = 3057LL;
	int32_t t55 = -463;

	t55 = ((x221<x222)*(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x226 = 46003817167LL;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 6;

	t56 = ((x225<x226)*(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint16_t x230 = 766U;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = 101U;
	volatile int32_t t57 = 110069271;

	t57 = ((x229<x230)*(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 11745;
	static volatile int8_t x234 = -17;
	int64_t x235 = INT64_MAX;
	static uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 5236027;

	t58 = ((x233<x234)*(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 25;
	int16_t x240 = -2658;
	volatile int32_t t59 = 425478098;

	t59 = ((x237<x238)*(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = 0U;
	static uint32_t x244 = UINT32_MAX;
	static int32_t t60 = -421011;

	t60 = ((x241<x242)*(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -57;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -93827LL;

	t61 = ((x245<x246)*(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 644519U;
	static int16_t x250 = INT16_MIN;
	volatile int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MAX;
	int32_t t62 = -9363;

	t62 = ((x249<x250)*(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 785677780813LLU;
	static int32_t x254 = INT32_MAX;
	volatile uint8_t x255 = UINT8_MAX;
	static int32_t t63 = 7;

	t63 = ((x253<x254)*(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 6U;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 171LLU;
	static uint32_t x260 = 1U;
	volatile int32_t t64 = 817;

	t64 = ((x257<x258)*(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	uint64_t x262 = UINT64_MAX;
	uint16_t x263 = 33U;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -8105041;

	t65 = ((x261<x262)*(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 0;
	volatile int32_t x266 = 71885262;
	static uint8_t x267 = 60U;
	static int8_t x268 = INT8_MIN;

	t66 = ((x265<x266)*(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 27879LLU;
	uint16_t x270 = 908U;
	uint64_t x271 = UINT64_MAX;
	volatile uint16_t x272 = 29U;

	t67 = ((x269<x270)*(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;

	t68 = ((x273<x274)*(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -1;
	uint32_t x278 = 34U;
	int32_t x279 = INT32_MAX;
	uint64_t x280 = 2LLU;
	int32_t t69 = -2986;

	t69 = ((x277<x278)*(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	volatile int64_t x283 = -4807577LL;
	int8_t x284 = INT8_MAX;
	volatile int32_t t70 = -18;

	t70 = ((x281<x282)*(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MIN;
	static volatile int16_t x288 = -6364;
	volatile int32_t t71 = 30;

	t71 = ((x285<x286)*(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -20;
	uint64_t x290 = 854087881113LLU;
	int32_t x291 = -7577;
	int64_t x292 = -10332072261LL;
	int32_t t72 = -4718830;

	t72 = ((x289<x290)*(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MAX;
	int32_t x295 = 29455602;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -478472067;

	t73 = ((x293<x294)*(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -13530028;
	static int32_t x298 = INT32_MIN;
	int64_t x300 = 912834744522930LL;
	static volatile int32_t t74 = 29490090;

	t74 = ((x297<x298)*(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 4LLU;
	int16_t x302 = -1;
	volatile int8_t x303 = 1;
	int16_t x304 = -290;
	int32_t t75 = 3592;

	t75 = ((x301<x302)*(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int16_t x306 = INT16_MIN;
	static int8_t x307 = 1;
	static volatile int32_t x308 = -86693820;
	int32_t t76 = 24911514;

	t76 = ((x305<x306)*(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile int32_t x311 = INT32_MIN;
	uint8_t x312 = 4U;

	t77 = ((x309<x310)*(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = 88121447U;
	int32_t x314 = 1;
	int16_t x315 = INT16_MIN;
	volatile int32_t x316 = -1;

	t78 = ((x313<x314)*(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -15;
	uint8_t x318 = 0U;
	int64_t x320 = -909339LL;
	volatile int32_t t79 = -6525687;

	t79 = ((x317<x318)*(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = -1056;
	static int32_t x323 = INT32_MIN;
	static int32_t t80 = 11137;

	t80 = ((x321<x322)*(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -1;
	static volatile uint16_t x326 = 3U;
	static uint64_t x328 = 5LLU;
	int32_t t81 = -53;

	t81 = ((x325<x326)*(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	uint64_t x330 = 30943121728575LLU;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -1;
	int32_t t82 = -84;

	t82 = ((x329<x330)*(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -507934451914LL;
	int32_t x334 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	volatile int32_t t83 = 66145;

	t83 = ((x333<x334)*(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	volatile int8_t x338 = INT8_MIN;
	volatile int8_t x339 = INT8_MIN;
	uint64_t x340 = 60257LLU;

	t84 = ((x337<x338)*(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 3276;
	int16_t x342 = -1759;
	uint64_t x343 = 112032LLU;
	static int64_t x344 = INT64_MIN;
	int32_t t85 = -148378327;

	t85 = ((x341<x342)*(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	static uint16_t x346 = 43U;
	volatile int32_t x347 = INT32_MIN;

	t86 = ((x345<x346)*(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int32_t x350 = -1;
	int32_t x351 = INT32_MIN;
	static uint8_t x352 = 6U;
	static volatile int32_t t87 = -268616;

	t87 = ((x349<x350)*(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x355 = 22U;
	uint64_t x356 = 1906035703297055527LLU;
	volatile int32_t t88 = -17894891;

	t88 = ((x353<x354)*(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	int16_t x360 = 0;
	static int32_t t89 = 622672824;

	t89 = ((x357<x358)*(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	volatile int64_t x363 = INT64_MAX;
	volatile int32_t t90 = -3630049;

	t90 = ((x361<x362)*(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x366 = INT64_MAX;
	int32_t x367 = -7804;
	volatile int32_t t91 = 69938;

	t91 = ((x365<x366)*(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 1U;
	volatile int64_t x370 = INT64_MIN;
	int8_t x371 = -15;

	t92 = ((x369<x370)*(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 16683627767940LLU;
	uint8_t x374 = 4U;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = 2;

	t93 = ((x373<x374)*(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 1318U;
	int32_t x379 = -10;

	t94 = ((x377<x378)*(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -71266079;
	int64_t x382 = INT64_MIN;
	int64_t x384 = -1LL;
	volatile int32_t t95 = -24;

	t95 = ((x381<x382)*(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = 31361LL;

	t96 = ((x385<x386)*(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = 1;
	uint64_t x391 = 471914409480LLU;
	static uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = -943;

	t97 = ((x389<x390)*(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x394 = -31438383LL;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 17701U;

	t98 = ((x393<x394)*(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = 14526;
	int64_t x398 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	volatile uint16_t x400 = 11803U;
	static volatile int32_t t99 = -7;

	t99 = ((x397<x398)*(x399<x400));

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

