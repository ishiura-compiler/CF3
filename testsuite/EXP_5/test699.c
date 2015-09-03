#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MIN;
static volatile uint8_t x3 = UINT8_MAX;
static int8_t x4 = -1;
int8_t x5 = INT8_MAX;
int16_t x13 = INT16_MIN;
static int32_t x17 = -396;
static volatile int16_t x26 = -1;
static int8_t x30 = -1;
static volatile int32_t t7 = -239;
int8_t x34 = INT8_MAX;
int8_t x43 = INT8_MIN;
static int8_t x48 = -1;
volatile int32_t t11 = 9452198;
volatile int64_t x58 = INT64_MIN;
volatile uint64_t x76 = UINT64_MAX;
uint8_t x78 = UINT8_MAX;
volatile int32_t t20 = -8606;
uint32_t x86 = 1641656217U;
uint32_t x88 = UINT32_MAX;
int16_t x94 = INT16_MIN;
volatile int32_t t22 = 612768;
int8_t x99 = INT8_MIN;
int64_t x106 = -6697LL;
static uint64_t x115 = 50033872508202LLU;
uint8_t x117 = 25U;
int64_t x128 = INT64_MIN;
int32_t x129 = INT32_MAX;
uint64_t x131 = UINT64_MAX;
uint16_t x134 = UINT16_MAX;
int64_t x140 = -12066698010LL;
volatile uint8_t x145 = 12U;
uint32_t x148 = 4525637U;
static int16_t x152 = -430;
static volatile int64_t x153 = INT64_MIN;
int32_t x154 = 6767;
static volatile int32_t t37 = 273720286;
int8_t x162 = INT8_MAX;
int64_t x163 = 259940736546086462LL;
uint16_t x168 = 1910U;
int16_t x170 = -2;
int8_t x172 = INT8_MIN;
static int16_t x183 = -1;
int64_t x184 = -1LL;
volatile int32_t t43 = -12;
int16_t x185 = 7;
int16_t x187 = INT16_MAX;
int32_t x193 = INT32_MIN;
uint16_t x194 = 42U;
int8_t x196 = 0;
int32_t x199 = -2;
int64_t x209 = -8LL;
static int32_t t50 = -430852;
int32_t t54 = -6128;
static int64_t x238 = INT64_MIN;
int64_t x239 = -1LL;
static volatile int32_t t57 = 1;
static int64_t x248 = 6742020347499LL;
int32_t x254 = -1;
static int8_t x255 = INT8_MIN;
volatile int8_t x260 = -1;
int32_t x265 = INT32_MIN;
volatile int32_t t63 = -114463;
int32_t t64 = -1584227;
int64_t x276 = INT64_MAX;
volatile int32_t t65 = 15964473;
int16_t x281 = -1;
static int32_t t67 = 144217;
static volatile int16_t x289 = INT16_MIN;
int16_t x291 = INT16_MAX;
int32_t x295 = -8;
int16_t x297 = INT16_MIN;
int32_t x298 = INT32_MAX;
int32_t t72 = -4992105;
volatile int32_t t74 = -14488;
static uint32_t x317 = 0U;
uint8_t x318 = 1U;
int32_t x319 = -1;
uint32_t x320 = 16772643U;
int32_t t75 = 1860962;
static uint16_t x328 = 28U;
volatile uint64_t x334 = 688246LLU;
int64_t x339 = -25389989LL;
uint32_t x340 = 893U;
int8_t x343 = INT8_MIN;
static int16_t x350 = -1;
volatile int32_t x353 = INT32_MIN;
int32_t x357 = INT32_MIN;
int8_t x366 = -1;
volatile int64_t x387 = INT64_MIN;
static volatile int16_t x390 = INT16_MIN;
int16_t x391 = INT16_MIN;
static volatile int8_t x405 = -1;
int16_t x406 = INT16_MIN;
int32_t t95 = -4365;
static uint16_t x410 = UINT16_MAX;
int64_t x411 = -28550097141LL;
int64_t x412 = -430013559LL;
volatile int32_t t96 = -365;
int32_t t98 = -6721;
int64_t x424 = INT64_MIN;


void f0(void) {
	int16_t x1 = 90;
	volatile int32_t t0 = -209182846;

	t0 = (x1<=((x2%x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -2;
	int32_t x7 = INT32_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -399;

	t1 = (x5<=((x6%x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile uint32_t x10 = UINT32_MAX;
	uint16_t x11 = 114U;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 446479302;

	t2 = (x9<=((x10%x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = -15630373033629360LL;
	uint64_t x15 = 1LLU;
	int64_t x16 = -1LL;
	static volatile int32_t t3 = 113;

	t3 = (x13<=((x14%x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = -711;
	static uint64_t x19 = 23986600013777LLU;
	volatile int32_t x20 = -1;
	int32_t t4 = 7;

	t4 = (x17<=((x18%x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int16_t x22 = 0;
	volatile int8_t x23 = INT8_MAX;
	int32_t x24 = -1;
	int32_t t5 = -15855142;

	t5 = (x21<=((x22%x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	volatile uint16_t x27 = UINT16_MAX;
	static int8_t x28 = -1;
	volatile int32_t t6 = -4892;

	t6 = (x25<=((x26%x27)-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 8674506LLU;
	static int16_t x31 = -1;
	volatile uint32_t x32 = UINT32_MAX;

	t7 = (x29<=((x30%x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int8_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = -2300;

	t8 = (x33<=((x34%x35)-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int8_t x38 = INT8_MIN;
	volatile int32_t x39 = -1;
	volatile uint16_t x40 = 198U;
	volatile int32_t t9 = 14;

	t9 = (x37<=((x38%x39)-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -1;
	uint16_t x42 = 1U;
	int32_t x44 = -1;
	int32_t t10 = -451637926;

	t10 = (x41<=((x42%x43)-x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	volatile int8_t x47 = INT8_MIN;

	t11 = (x45<=((x46%x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1586652;
	int32_t x50 = -3462732;
	static int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = -1;

	t12 = (x49<=((x50%x51)-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int16_t x54 = -1;
	static uint16_t x55 = 5U;
	uint64_t x56 = 0LLU;
	volatile int32_t t13 = 279919748;

	t13 = (x53<=((x54%x55)-x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static volatile uint64_t x59 = 26139938375LLU;
	static volatile int32_t x60 = INT32_MIN;
	int32_t t14 = 47;

	t14 = (x57<=((x58%x59)-x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 6986202637LLU;
	static int16_t x62 = INT16_MIN;
	uint32_t x63 = 58305U;
	volatile uint64_t x64 = 65469600612LLU;
	volatile int32_t t15 = 56209;

	t15 = (x61<=((x62%x63)-x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = -28;
	int8_t x67 = 25;
	volatile int64_t x68 = INT64_MIN;
	static int32_t t16 = -922387973;

	t16 = (x65<=((x66%x67)-x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -709;
	volatile int32_t x70 = -35064;
	volatile int16_t x71 = 961;
	uint32_t x72 = 239U;
	volatile int32_t t17 = -873517;

	t17 = (x69<=((x70%x71)-x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 60LLU;
	uint64_t x74 = 1093545094711933LLU;
	volatile int16_t x75 = INT16_MIN;
	volatile int32_t t18 = 95202299;

	t18 = (x73<=((x74%x75)-x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 21U;
	int32_t x79 = INT32_MIN;
	int32_t x80 = -1;
	int32_t t19 = -1437390;

	t19 = (x77<=((x78%x79)-x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 0U;
	uint8_t x82 = 66U;
	int64_t x83 = INT64_MAX;
	static volatile uint16_t x84 = 2U;

	t20 = (x81<=((x82%x83)-x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1006U;
	int16_t x87 = 1109;
	int32_t t21 = 1;

	t21 = (x85<=((x86%x87)-x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = UINT8_MAX;
	static int32_t x95 = -38;
	int8_t x96 = INT8_MIN;

	t22 = (x93<=((x94%x95)-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint32_t x98 = UINT32_MAX;
	uint8_t x100 = 3U;
	int32_t t23 = 14;

	t23 = (x97<=((x98%x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = -94;
	static int32_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	volatile int64_t x104 = -1LL;
	int32_t t24 = 539552887;

	t24 = (x101<=((x102%x103)-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 1U;
	int8_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t25 = 23;

	t25 = (x105<=((x106%x107)-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	static int8_t x111 = INT8_MAX;
	int8_t x112 = INT8_MAX;
	volatile int32_t t26 = 915582627;

	t26 = (x109<=((x110%x111)-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MAX;
	static int32_t x116 = -132;
	int32_t t27 = 505870;

	t27 = (x113<=((x114%x115)-x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x118 = -18;
	int16_t x119 = INT16_MAX;
	static volatile uint16_t x120 = 18443U;
	volatile int32_t t28 = -148;

	t28 = (x117<=((x118%x119)-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x122 = INT8_MIN;
	uint8_t x123 = 9U;
	static uint64_t x124 = 94473566622LLU;
	volatile int32_t t29 = 13562;

	t29 = (x121<=((x122%x123)-x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = UINT64_MAX;
	static uint32_t x127 = 1149U;
	static volatile int32_t t30 = -20871217;

	t30 = (x125<=((x126%x127)-x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = 68;
	uint16_t x132 = UINT16_MAX;
	int32_t t31 = -30881;

	t31 = (x129<=((x130%x131)-x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 770521526;
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = 116LLU;
	volatile int32_t t32 = 20673;

	t32 = (x133<=((x134%x135)-x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -24;
	volatile uint32_t x138 = UINT32_MAX;
	volatile int8_t x139 = INT8_MAX;
	volatile int32_t t33 = 137318384;

	t33 = (x137<=((x138%x139)-x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1;
	volatile int64_t x142 = INT64_MAX;
	int32_t x143 = -27085;
	static uint8_t x144 = 1U;
	volatile int32_t t34 = 16137339;

	t34 = (x141<=((x142%x143)-x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MAX;
	static volatile int32_t t35 = 39330121;

	t35 = (x145<=((x146%x147)-x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x149 = 860225U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	static volatile int32_t t36 = -1460;

	t36 = (x149<=((x150%x151)-x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = UINT16_MAX;

	t37 = (x153<=((x154%x155)-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x164 = -15;
	volatile int32_t t38 = 494043;

	t38 = (x161<=((x162%x163)-x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -202379LL;
	volatile int16_t x166 = INT16_MAX;
	volatile int32_t x167 = -815287444;
	volatile int32_t t39 = 3;

	t39 = (x165<=((x166%x167)-x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	uint16_t x171 = 879U;
	volatile int32_t t40 = -450219;

	t40 = (x169<=((x170%x171)-x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x173 = 2LLU;
	static volatile int16_t x174 = INT16_MIN;
	int64_t x175 = -1LL;
	uint8_t x176 = 5U;
	int32_t t41 = 7;

	t41 = (x173<=((x174%x175)-x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x177 = -1;
	static int32_t x178 = 213;
	static volatile uint16_t x179 = UINT16_MAX;
	static uint64_t x180 = 102615625LLU;
	volatile int32_t t42 = 79;

	t42 = (x177<=((x178%x179)-x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MAX;
	uint16_t x182 = 3876U;

	t43 = (x181<=((x182%x183)-x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x186 = -25;
	int64_t x188 = 1592LL;
	volatile int32_t t44 = -14;

	t44 = (x185<=((x186%x187)-x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = 7U;
	int8_t x192 = INT8_MIN;
	int32_t t45 = 209174612;

	t45 = (x189<=((x190%x191)-x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x195 = -1;
	int32_t t46 = -6193;

	t46 = (x193<=((x194%x195)-x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 55647917LLU;
	static uint32_t x198 = 12U;
	int32_t x200 = INT32_MAX;
	int32_t t47 = -1;

	t47 = (x197<=((x198%x199)-x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	static int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = -1;
	int32_t t48 = -195;

	t48 = (x201<=((x202%x203)-x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = UINT16_MAX;
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = 624354574428241667LLU;
	volatile int16_t x208 = -5;
	volatile int32_t t49 = 38955057;

	t49 = (x205<=((x206%x207)-x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = 0;

	t50 = (x209<=((x210%x211)-x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 10U;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	uint16_t x216 = 389U;
	int32_t t51 = 1;

	t51 = (x213<=((x214%x215)-x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x217 = -1;
	uint8_t x218 = 1U;
	int16_t x219 = -493;
	uint16_t x220 = UINT16_MAX;
	int32_t t52 = 2239;

	t52 = (x217<=((x218%x219)-x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = 1;
	uint16_t x222 = 63U;
	int32_t x223 = -225;
	static int16_t x224 = -1;
	volatile int32_t t53 = -1;

	t53 = (x221<=((x222%x223)-x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x229 = 28835319U;
	uint8_t x230 = 1U;
	static int64_t x231 = 153855LL;
	int32_t x232 = -1;

	t54 = (x229<=((x230%x231)-x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x233 = 1616398129LLU;
	volatile uint8_t x234 = 1U;
	volatile int16_t x235 = 24;
	volatile int64_t x236 = 0LL;
	int32_t t55 = 20141552;

	t55 = (x233<=((x234%x235)-x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = -426633684;
	int64_t x240 = INT64_MAX;
	volatile int32_t t56 = 231244;

	t56 = (x237<=((x238%x239)-x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 3U;
	int32_t x243 = -90122882;
	int8_t x244 = INT8_MIN;

	t57 = (x241<=((x242%x243)-x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MIN;
	static int32_t x246 = -1;
	volatile uint32_t x247 = UINT32_MAX;
	int32_t t58 = 24324479;

	t58 = (x245<=((x246%x247)-x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x249 = 45U;
	uint8_t x250 = 2U;
	static int64_t x251 = INT64_MIN;
	int64_t x252 = 2602LL;
	volatile int32_t t59 = 7438185;

	t59 = (x249<=((x250%x251)-x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	static int64_t x256 = INT64_MIN;
	int32_t t60 = 106220426;

	t60 = (x253<=((x254%x255)-x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	static volatile int64_t x258 = -1LL;
	int16_t x259 = 9274;
	volatile int32_t t61 = -1;

	t61 = (x257<=((x258%x259)-x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x261 = -1;
	int16_t x262 = 75;
	int64_t x263 = 608118659867LL;
	int8_t x264 = -3;
	static volatile int32_t t62 = 251;

	t62 = (x261<=((x262%x263)-x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x266 = UINT16_MAX;
	static uint8_t x267 = 14U;
	volatile uint16_t x268 = UINT16_MAX;

	t63 = (x265<=((x266%x267)-x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = 18765079;
	int32_t x271 = -91251134;
	int32_t x272 = 11744428;

	t64 = (x269<=((x270%x271)-x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = 30;
	int64_t x275 = -1LL;

	t65 = (x273<=((x274%x275)-x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x277 = INT8_MIN;
	int32_t x278 = 6;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t66 = -847897567;

	t66 = (x277<=((x278%x279)-x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x282 = 44625310U;
	int32_t x283 = -1;
	volatile int8_t x284 = -1;

	t67 = (x281<=((x282%x283)-x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x285 = 0U;
	int32_t x286 = INT32_MIN;
	static int64_t x287 = 65459818LL;
	int32_t x288 = 245734857;
	int32_t t68 = 24;

	t68 = (x285<=((x286%x287)-x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = 6;
	static volatile int32_t x292 = -1;
	volatile int32_t t69 = -400;

	t69 = (x289<=((x290%x291)-x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = 103362U;
	int8_t x294 = INT8_MIN;
	static volatile int64_t x296 = 16051335622544LL;
	volatile int32_t t70 = -709448673;

	t70 = (x293<=((x294%x295)-x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x299 = INT64_MAX;
	uint32_t x300 = 350U;
	volatile int32_t t71 = -21;

	t71 = (x297<=((x298%x299)-x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x301 = INT16_MIN;
	uint8_t x302 = 1U;
	int16_t x303 = INT16_MIN;
	volatile int8_t x304 = 2;

	t72 = (x301<=((x302%x303)-x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = 1;
	int8_t x311 = 1;
	int32_t x312 = -1;
	int32_t t73 = -144;

	t73 = (x309<=((x310%x311)-x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x313 = INT64_MIN;
	uint64_t x314 = 70552301812940LLU;
	int8_t x315 = INT8_MIN;
	static uint8_t x316 = 20U;

	t74 = (x313<=((x314%x315)-x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {


	t75 = (x317<=((x318%x319)-x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x321 = 0U;
	int32_t x322 = -3;
	uint64_t x323 = 415021LLU;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t76 = -129;

	t76 = (x321<=((x322%x323)-x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	static volatile int32_t x326 = -1194285;
	uint16_t x327 = UINT16_MAX;
	int32_t t77 = -6;

	t77 = (x325<=((x326%x327)-x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile int16_t x335 = -10;
	static int16_t x336 = 71;
	int32_t t78 = 167970640;

	t78 = (x333<=((x334%x335)-x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x337 = -282729486615LL;
	static uint64_t x338 = 2119370468968153LLU;
	int32_t t79 = 187555;

	t79 = (x337<=((x338%x339)-x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x341 = INT32_MIN;
	static uint16_t x342 = 135U;
	volatile int64_t x344 = -553366LL;
	int32_t t80 = 7;

	t80 = (x341<=((x342%x343)-x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 121U;
	volatile int64_t x346 = INT64_MAX;
	int32_t x347 = -1689;
	static uint64_t x348 = 895328561040897LLU;
	int32_t t81 = -65648284;

	t81 = (x345<=((x346%x347)-x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = 0;
	volatile int64_t x351 = -1LL;
	int32_t x352 = -1;
	static volatile int32_t t82 = 7;

	t82 = (x349<=((x350%x351)-x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t83 = 68;

	t83 = (x353<=((x354%x355)-x356));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t84 = -4;

	t84 = (x357<=((x358%x359)-x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = 0;
	uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MAX;
	uint16_t x364 = 440U;
	int32_t t85 = -1;

	t85 = (x361<=((x362%x363)-x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = 1910025;
	int64_t x367 = INT64_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t86 = 1901382;

	t86 = (x365<=((x366%x367)-x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x369 = 1;
	int64_t x370 = -81163858019979222LL;
	uint32_t x371 = 111U;
	int32_t x372 = -22614;
	volatile int32_t t87 = -1;

	t87 = (x369<=((x370%x371)-x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x373 = UINT64_MAX;
	volatile int32_t x374 = 134844;
	static volatile int16_t x375 = INT16_MAX;
	static uint8_t x376 = UINT8_MAX;
	volatile int32_t t88 = 56;

	t88 = (x373<=((x374%x375)-x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x377 = 10U;
	static int32_t x378 = INT32_MAX;
	uint8_t x379 = 98U;
	int8_t x380 = 0;
	int32_t t89 = 28;

	t89 = (x377<=((x378%x379)-x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x381 = -459853315;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = -1325;
	int64_t x384 = -19572992154LL;
	int32_t t90 = -6815;

	t90 = (x381<=((x382%x383)-x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int8_t x388 = INT8_MAX;
	static int32_t t91 = 1;

	t91 = (x385<=((x386%x387)-x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x389 = 5450459796LLU;
	int16_t x392 = 6;
	int32_t t92 = -211;

	t92 = (x389<=((x390%x391)-x392));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile int64_t x396 = 69781011584749LL;
	int32_t t93 = -43;

	t93 = (x393<=((x394%x395)-x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	static uint64_t x398 = 1241721511466672LLU;
	static volatile int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t94 = 9370396;

	t94 = (x397<=((x398%x399)-x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x407 = 18511445U;
	int8_t x408 = INT8_MIN;

	t95 = (x405<=((x406%x407)-x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x409 = -1;

	t96 = (x409<=((x410%x411)-x412));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = 229U;
	int16_t x414 = -1;
	volatile uint32_t x415 = UINT32_MAX;
	volatile int64_t x416 = -87867430879LL;
	int32_t t97 = -6624842;

	t97 = (x413<=((x414%x415)-x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x417 = 0;
	static int64_t x418 = INT64_MIN;
	int16_t x419 = -23;
	volatile int8_t x420 = -1;

	t98 = (x417<=((x418%x419)-x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	int32_t x423 = 953824524;
	volatile int32_t t99 = 1632;

	t99 = (x421<=((x422%x423)-x424));

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

