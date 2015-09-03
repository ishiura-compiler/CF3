#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -19;
int32_t t2 = 7057;
int8_t x15 = INT8_MIN;
uint16_t x21 = 25929U;
static volatile uint32_t x24 = UINT32_MAX;
volatile int32_t t4 = -117099415;
volatile int32_t t5 = 186;
volatile uint8_t x30 = UINT8_MAX;
volatile int32_t t6 = -2;
int64_t x36 = 853062652483LL;
uint16_t x37 = UINT16_MAX;
volatile int64_t x43 = -388850099LL;
int64_t x45 = INT64_MIN;
int16_t x51 = INT16_MIN;
int64_t x54 = 0LL;
volatile uint16_t x59 = 13904U;
uint8_t x75 = 1U;
volatile int64_t x79 = 118055143786084672LL;
int32_t x90 = -10135081;
int32_t t21 = 9189968;
int32_t x100 = 2244610;
int32_t t23 = 23052857;
int64_t x105 = -7350321995LL;
static int8_t x107 = 0;
static int32_t x108 = 1;
int64_t x112 = -596321880842742LL;
volatile int8_t x113 = -1;
volatile int32_t x117 = -144;
int8_t x122 = INT8_MIN;
volatile uint32_t x125 = 2912967U;
uint64_t x127 = 64LLU;
int8_t x128 = INT8_MAX;
uint8_t x135 = UINT8_MAX;
volatile int8_t x152 = -1;
int32_t t35 = 400585753;
static uint16_t x159 = 39U;
int64_t x161 = INT64_MIN;
int64_t x174 = INT64_MIN;
uint32_t x178 = 2364891U;
volatile int32_t t41 = 1950933;
uint64_t x181 = UINT64_MAX;
static volatile int16_t x190 = INT16_MIN;
uint16_t x192 = 524U;
uint64_t x198 = 1LLU;
volatile int32_t x204 = 6135376;
uint8_t x207 = 2U;
int16_t x209 = -1;
int8_t x210 = INT8_MIN;
uint64_t x211 = 4117947061212339LLU;
int32_t x217 = INT32_MIN;
int8_t x222 = 9;
static volatile uint32_t x223 = UINT32_MAX;
int64_t x233 = INT64_MAX;
uint64_t x235 = 162068357265439LLU;
volatile int16_t x242 = -1;
volatile int32_t t56 = -1;
static int64_t x245 = INT64_MAX;
uint64_t x247 = 126324047LLU;
int16_t x248 = 0;
static int64_t x258 = -1LL;
int16_t x261 = INT16_MIN;
uint8_t x268 = 0U;
static int8_t x282 = INT8_MAX;
int8_t x284 = INT8_MAX;
volatile int32_t t64 = -8728223;
int32_t x289 = INT32_MIN;
volatile int8_t x291 = INT8_MIN;
static int16_t x296 = INT16_MIN;
int8_t x305 = INT8_MIN;
uint8_t x307 = 27U;
uint16_t x311 = UINT16_MAX;
int16_t x314 = INT16_MAX;
static int32_t t71 = -41577;
static int16_t x318 = 1;
int32_t t72 = 10460;
int8_t x325 = 15;
int8_t x333 = 1;
volatile int32_t x335 = INT32_MAX;
int32_t x336 = -249071;
int8_t x339 = 20;
int8_t x342 = INT8_MIN;
uint32_t x346 = 0U;
volatile int32_t t78 = -494570071;
volatile uint8_t x352 = UINT8_MAX;
uint64_t x355 = 102111019035LLU;
int16_t x358 = -1532;
int32_t t81 = 47761;
uint64_t x366 = UINT64_MAX;
uint16_t x368 = 1867U;
int64_t x373 = -3352842163912413LL;
volatile int32_t t84 = 436;
uint64_t x383 = 67955658040LLU;
static uint16_t x384 = UINT16_MAX;
int64_t x390 = INT64_MIN;
int16_t x396 = INT16_MIN;
uint8_t x402 = 85U;
static uint16_t x404 = UINT16_MAX;
static int32_t x407 = INT32_MIN;
volatile int16_t x409 = INT16_MIN;
static volatile uint8_t x410 = 1U;
volatile int32_t t93 = -731862332;
volatile uint64_t x414 = UINT64_MAX;
uint8_t x422 = 11U;
volatile uint32_t x424 = 470798638U;
uint64_t x441 = UINT64_MAX;


void f0(void) {
	volatile uint64_t x1 = 4754280LLU;
	int32_t x2 = 18916007;
	int16_t x3 = -1;
	int64_t x4 = -2961207LL;
	int32_t t0 = -1013;

	t0 = (x1==(x2|(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1270U;
	uint64_t x6 = 628323166550499LLU;
	uint8_t x8 = 12U;
	static int32_t t1 = 79294773;

	t1 = (x5==(x6|(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint64_t x10 = 308294LLU;
	volatile uint64_t x11 = 8483389267199610LLU;
	static int16_t x12 = -365;

	t2 = (x9==(x10|(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static uint16_t x14 = 118U;
	int32_t x16 = 1637;
	volatile int32_t t3 = -54299;

	t3 = (x13==(x14|(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -2;
	volatile uint32_t x23 = 22242U;

	t4 = (x21==(x22|(x23+x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	static volatile uint32_t x26 = UINT32_MAX;
	int64_t x27 = -596345LL;
	uint64_t x28 = 1046491213341472LLU;

	t5 = (x25==(x26|(x27+x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -673174;
	static volatile int32_t x31 = INT32_MIN;
	static uint64_t x32 = UINT64_MAX;

	t6 = (x29==(x30|(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = INT8_MAX;
	uint64_t x34 = 13388340704541475LLU;
	uint64_t x35 = 3008678502479074697LLU;
	int32_t t7 = 1300;

	t7 = (x33==(x34|(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x38 = UINT16_MAX;
	uint64_t x39 = 1030373287744666803LLU;
	static int64_t x40 = INT64_MIN;
	int32_t t8 = 1;

	t8 = (x37==(x38|(x39+x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = -1;
	int64_t x44 = -196957LL;
	int32_t t9 = -2;

	t9 = (x41==(x42|(x43+x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x46 = INT64_MIN;
	int16_t x47 = 2786;
	int64_t x48 = 72LL;
	volatile int32_t t10 = 340;

	t10 = (x45==(x46|(x47+x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -1LL;
	int16_t x52 = INT16_MAX;
	volatile int32_t t11 = 0;

	t11 = (x49==(x50|(x51+x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = 78084507;
	uint64_t x55 = 424LLU;
	volatile int16_t x56 = -1;
	volatile int32_t t12 = 134720717;

	t12 = (x53==(x54|(x55+x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	static uint32_t x58 = 987716U;
	static int32_t x60 = -1;
	static volatile int32_t t13 = 2;

	t13 = (x57==(x58|(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	int8_t x66 = -2;
	uint64_t x67 = 1048570101018496LLU;
	int64_t x68 = INT64_MIN;
	volatile int32_t t14 = -1;

	t14 = (x65==(x66|(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = 0;
	uint64_t x72 = 53LLU;
	static int32_t t15 = -19669623;

	t15 = (x69==(x70|(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x74 = -10539;
	int64_t x76 = -288511LL;
	int32_t t16 = 340;

	t16 = (x73==(x74|(x75+x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = 3908962;
	static uint32_t x78 = 1U;
	int8_t x80 = 46;
	volatile int32_t t17 = -55542507;

	t17 = (x77==(x78|(x79+x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 12904723885319826LL;
	int8_t x82 = -1;
	volatile int32_t x83 = INT32_MIN;
	static uint64_t x84 = 1298592805LLU;
	volatile int32_t t18 = -492816;

	t18 = (x81==(x82|(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 7124625133263070LLU;
	int16_t x86 = 5034;
	uint16_t x87 = 6U;
	volatile uint16_t x88 = 10U;
	int32_t t19 = -57443;

	t19 = (x85==(x86|(x87+x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	uint32_t x91 = 1U;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t20 = 1;

	t20 = (x89==(x90|(x91+x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -6;
	int32_t x94 = INT32_MAX;
	static uint32_t x95 = 5425447U;
	int8_t x96 = INT8_MIN;

	t21 = (x93==(x94|(x95+x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MAX;
	int32_t t22 = -860019;

	t22 = (x97==(x98|(x99+x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	static volatile uint8_t x103 = UINT8_MAX;
	static volatile int64_t x104 = 5610LL;

	t23 = (x101==(x102|(x103+x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x106 = 1;
	static volatile int32_t t24 = 3;

	t24 = (x105==(x106|(x107+x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x109 = -12719398393969917LL;
	volatile int16_t x110 = -1;
	int8_t x111 = -1;
	int32_t t25 = 125;

	t25 = (x109==(x110|(x111+x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x114 = -1;
	uint16_t x115 = 4233U;
	int8_t x116 = INT8_MIN;
	int32_t t26 = 0;

	t26 = (x113==(x114|(x115+x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x118 = 261889U;
	uint32_t x119 = 1118447U;
	int64_t x120 = INT64_MIN;
	int32_t t27 = 3963335;

	t27 = (x117==(x118|(x119+x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	volatile int32_t x123 = 2;
	static uint16_t x124 = 2U;
	int32_t t28 = 195106244;

	t28 = (x121==(x122|(x123+x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x126 = UINT64_MAX;
	volatile int32_t t29 = -13438128;

	t29 = (x125==(x126|(x127+x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = 3064;
	volatile int64_t x131 = INT64_MAX;
	int16_t x132 = -1;
	volatile int32_t t30 = 233676339;

	t30 = (x129==(x130|(x131+x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -1;
	static int8_t x134 = -1;
	static uint64_t x136 = 44LLU;
	volatile int32_t t31 = 0;

	t31 = (x133==(x134|(x135+x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 6U;
	uint32_t x138 = 1316U;
	static uint32_t x139 = 1U;
	volatile int8_t x140 = INT8_MAX;
	static int32_t t32 = -1634762;

	t32 = (x137==(x138|(x139+x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 113LL;
	uint16_t x142 = 137U;
	volatile int64_t x143 = INT64_MIN;
	volatile int16_t x144 = 265;
	volatile int32_t t33 = -202492330;

	t33 = (x141==(x142|(x143+x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 195612715458427LLU;
	volatile int64_t x146 = -1LL;
	int8_t x147 = INT8_MAX;
	static volatile int64_t x148 = -1LL;
	static int32_t t34 = -179;

	t34 = (x145==(x146|(x147+x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x149 = -1446;
	int16_t x150 = -1;
	static volatile uint8_t x151 = UINT8_MAX;

	t35 = (x149==(x150|(x151+x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = -1;
	static int64_t x158 = INT64_MIN;
	uint64_t x160 = UINT64_MAX;
	int32_t t36 = -38;

	t36 = (x157==(x158|(x159+x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x162 = INT64_MAX;
	static int64_t x163 = -1LL;
	int32_t x164 = 60455200;
	int32_t t37 = -1015464;

	t37 = (x161==(x162|(x163+x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x165 = -1;
	int8_t x166 = -1;
	static volatile int8_t x167 = -1;
	int32_t x168 = -53;
	int32_t t38 = 57;

	t38 = (x165==(x166|(x167+x168)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	static uint8_t x171 = 35U;
	static uint8_t x172 = 18U;
	volatile int32_t t39 = 0;

	t39 = (x169==(x170|(x171+x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = 4308546142018362LL;
	static int16_t x175 = 6409;
	uint8_t x176 = 5U;
	volatile int32_t t40 = -554;

	t40 = (x173==(x174|(x175+x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x177 = INT8_MAX;
	uint64_t x179 = 1183125461011169LLU;
	int16_t x180 = INT16_MAX;

	t41 = (x177==(x178|(x179+x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x182 = INT64_MIN;
	static int8_t x183 = INT8_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t42 = 165683;

	t42 = (x181==(x182|(x183+x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = INT32_MAX;
	volatile int16_t x186 = -1;
	static uint8_t x187 = 5U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t43 = 774;

	t43 = (x185==(x186|(x187+x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x189 = INT32_MAX;
	static uint8_t x191 = 1U;
	volatile int32_t t44 = -161446286;

	t44 = (x189==(x190|(x191+x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = -244407416LL;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = INT64_MIN;
	static volatile int32_t x196 = INT32_MAX;
	static volatile int32_t t45 = 68721138;

	t45 = (x193==(x194|(x195+x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -708200152;
	static int32_t x199 = -1;
	uint32_t x200 = 74988202U;
	volatile int32_t t46 = 209853484;

	t46 = (x197==(x198|(x199+x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	static uint64_t x202 = 1032534995LLU;
	static uint32_t x203 = 6512036U;
	int32_t t47 = 2;

	t47 = (x201==(x202|(x203+x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = -791123;
	volatile int64_t x206 = -220425LL;
	uint32_t x208 = 786U;
	volatile int32_t t48 = -5247669;

	t48 = (x205==(x206|(x207+x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x212 = 62LLU;
	int32_t t49 = -46;

	t49 = (x209==(x210|(x211+x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	int64_t x215 = -7096684884LL;
	int32_t x216 = INT32_MIN;
	volatile int32_t t50 = 960152;

	t50 = (x213==(x214|(x215+x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x218 = 21843U;
	static int32_t x219 = -15700;
	int16_t x220 = 1070;
	static volatile int32_t t51 = 0;

	t51 = (x217==(x218|(x219+x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = INT32_MIN;
	int16_t x224 = 8;
	volatile int32_t t52 = -822510;

	t52 = (x221==(x222|(x223+x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -742859083868206695LL;
	int16_t x226 = -1;
	volatile int16_t x227 = -3;
	static volatile uint32_t x228 = UINT32_MAX;
	static int32_t t53 = 214296;

	t53 = (x225==(x226|(x227+x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MAX;
	volatile int16_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	static uint16_t x232 = 395U;
	int32_t t54 = 41;

	t54 = (x229==(x230|(x231+x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = INT16_MIN;
	int32_t x236 = INT32_MAX;
	int32_t t55 = -3;

	t55 = (x233==(x234|(x235+x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -1;
	static int32_t x243 = 116118;
	static int32_t x244 = -1;

	t56 = (x241==(x242|(x243+x244)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x246 = 2;
	volatile int32_t t57 = 117201031;

	t57 = (x245==(x246|(x247+x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MIN;
	static uint32_t x250 = 0U;
	static int8_t x251 = INT8_MIN;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t58 = -8;

	t58 = (x249==(x250|(x251+x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 3U;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = -1LL;
	int8_t x256 = 33;
	volatile int32_t t59 = 373971747;

	t59 = (x253==(x254|(x255+x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = UINT64_MAX;
	int16_t x259 = INT16_MIN;
	uint32_t x260 = 11183157U;
	volatile int32_t t60 = -95693952;

	t60 = (x257==(x258|(x259+x260)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x262 = -1;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = 205313LLU;
	volatile int32_t t61 = 198349;

	t61 = (x261==(x262|(x263+x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 152U;
	int32_t x266 = INT32_MAX;
	int16_t x267 = 20;
	int32_t t62 = 146;

	t62 = (x265==(x266|(x267+x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x277 = 45U;
	volatile uint8_t x278 = 0U;
	volatile int8_t x279 = -54;
	int32_t x280 = INT32_MAX;
	volatile int32_t t63 = 2;

	t63 = (x277==(x278|(x279+x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x281 = INT16_MIN;
	int8_t x283 = INT8_MIN;

	t64 = (x281==(x282|(x283+x284)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x285 = -1;
	uint8_t x286 = 60U;
	int8_t x287 = -1;
	static int64_t x288 = -3893LL;
	int32_t t65 = 216619397;

	t65 = (x285==(x286|(x287+x288)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x290 = UINT16_MAX;
	uint32_t x292 = 10379U;
	int32_t t66 = 14129653;

	t66 = (x289==(x290|(x291+x292)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x293 = -25096888;
	int32_t x294 = 1926293;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t t67 = 370288863;

	t67 = (x293==(x294|(x295+x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x297 = 1650U;
	volatile int32_t x298 = INT32_MIN;
	static int64_t x299 = -1LL;
	static int64_t x300 = INT64_MAX;
	volatile int32_t t68 = -1;

	t68 = (x297==(x298|(x299+x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x306 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	volatile int32_t t69 = -27876362;

	t69 = (x305==(x306|(x307+x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x309 = INT64_MAX;
	static int64_t x310 = INT64_MIN;
	volatile int32_t x312 = -1;
	static volatile int32_t t70 = -23;

	t70 = (x309==(x310|(x311+x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;

	t71 = (x313==(x314|(x315+x316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x317 = 8U;
	int16_t x319 = INT16_MIN;
	static int64_t x320 = -1LL;

	t72 = (x317==(x318|(x319+x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x326 = -67250931LL;
	int8_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t73 = 19;

	t73 = (x325==(x326|(x327+x328)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = 1U;
	uint8_t x330 = 6U;
	volatile int64_t x331 = -18772953805350288LL;
	int8_t x332 = -1;
	int32_t t74 = 182;

	t74 = (x329==(x330|(x331+x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x334 = 1422874U;
	int32_t t75 = -97319;

	t75 = (x333==(x334|(x335+x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = -1;
	uint32_t x338 = 2562U;
	int64_t x340 = -1LL;
	volatile int32_t t76 = -2144508;

	t76 = (x337==(x338|(x339+x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = -1;
	static int32_t t77 = 75973658;

	t77 = (x341==(x342|(x343+x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x345 = INT8_MIN;
	int64_t x347 = 0LL;
	volatile uint16_t x348 = 267U;

	t78 = (x345==(x346|(x347+x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = 0;
	int32_t x350 = -3204;
	static int8_t x351 = INT8_MIN;
	int32_t t79 = -1025907481;

	t79 = (x349==(x350|(x351+x352)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 96U;
	uint32_t x356 = UINT32_MAX;
	int32_t t80 = 1;

	t80 = (x353==(x354|(x355+x356)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x357 = UINT8_MAX;
	int16_t x359 = 193;
	int8_t x360 = INT8_MIN;

	t81 = (x357==(x358|(x359+x360)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MIN;
	volatile uint64_t x362 = 4601325565712275373LLU;
	volatile int64_t x363 = INT64_MIN;
	volatile uint32_t x364 = 42692U;
	static volatile int32_t t82 = -225366429;

	t82 = (x361==(x362|(x363+x364)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = -1;
	volatile int32_t x367 = -1;
	volatile int32_t t83 = -1747531;

	t83 = (x365==(x366|(x367+x368)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x374 = INT8_MAX;
	int8_t x375 = 1;
	int8_t x376 = INT8_MIN;

	t84 = (x373==(x374|(x375+x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MIN;
	static int16_t x378 = INT16_MAX;
	int64_t x379 = -937673026446LL;
	int32_t x380 = INT32_MIN;
	static int32_t t85 = -7359048;

	t85 = (x377==(x378|(x379+x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x381 = 0U;
	uint64_t x382 = 16LLU;
	volatile int32_t t86 = 2246023;

	t86 = (x381==(x382|(x383+x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x385 = 103858;
	volatile int8_t x386 = INT8_MIN;
	int8_t x387 = 1;
	int8_t x388 = INT8_MIN;
	int32_t t87 = -15516705;

	t87 = (x385==(x386|(x387+x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MAX;
	int64_t x391 = 31LL;
	int32_t x392 = -1;
	int32_t t88 = 458;

	t88 = (x389==(x390|(x391+x392)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x393 = INT64_MIN;
	uint64_t x394 = 70855155957012LLU;
	int16_t x395 = -3;
	int32_t t89 = 203563;

	t89 = (x393==(x394|(x395+x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = 6;
	int64_t x398 = -1LL;
	int16_t x399 = -1;
	volatile int64_t x400 = 118LL;
	volatile int32_t t90 = 469909126;

	t90 = (x397==(x398|(x399+x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x401 = INT64_MAX;
	int16_t x403 = -1;
	static volatile int32_t t91 = 1132;

	t91 = (x401==(x402|(x403+x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = -1LL;
	volatile uint8_t x406 = 0U;
	int16_t x408 = INT16_MAX;
	volatile int32_t t92 = 15050;

	t92 = (x405==(x406|(x407+x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x411 = 13959LL;
	int32_t x412 = INT32_MIN;

	t93 = (x409==(x410|(x411+x412)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x413 = INT8_MAX;
	static int64_t x415 = 1073036460280LL;
	uint8_t x416 = 1U;
	volatile int32_t t94 = -1599;

	t94 = (x413==(x414|(x415+x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x417 = INT32_MIN;
	volatile int64_t x418 = 15595855759970LL;
	volatile int32_t x419 = -40;
	static int8_t x420 = INT8_MAX;
	static int32_t t95 = 2;

	t95 = (x417==(x418|(x419+x420)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = INT32_MIN;
	uint32_t x423 = 12343U;
	static int32_t t96 = 124;

	t96 = (x421==(x422|(x423+x424)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = 513784815;
	uint64_t x426 = 57499572LLU;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t97 = 72469877;

	t97 = (x425==(x426|(x427+x428)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = 19U;
	int32_t x438 = INT32_MIN;
	int8_t x439 = 0;
	int64_t x440 = 3683LL;
	static volatile int32_t t98 = 29;

	t98 = (x437==(x438|(x439+x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x442 = -16;
	uint32_t x443 = 3301468U;
	static int16_t x444 = INT16_MIN;
	int32_t t99 = 1328;

	t99 = (x441==(x442|(x443+x444)));

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

