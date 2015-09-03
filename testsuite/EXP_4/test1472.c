#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = -6773202;
int32_t x17 = INT32_MAX;
int64_t x24 = INT64_MIN;
int64_t x26 = -1LL;
int32_t t6 = 30;
int16_t x31 = INT16_MAX;
static volatile uint16_t x32 = 90U;
int64_t x34 = INT64_MIN;
int64_t x38 = -91671397559964LL;
static volatile int64_t x40 = 2119730915060896349LL;
static int64_t x46 = -372597844881857453LL;
int64_t x48 = INT64_MAX;
int32_t t11 = 22;
uint16_t x54 = UINT16_MAX;
uint64_t x58 = 90846498LLU;
uint64_t x64 = 1302765671067526LLU;
int64_t x73 = -1LL;
int8_t x76 = INT8_MIN;
int16_t x84 = -35;
int32_t t20 = -322;
int16_t x90 = -1;
static int64_t x103 = INT64_MIN;
volatile int8_t x106 = INT8_MIN;
volatile int64_t x113 = -1LL;
int64_t x128 = INT64_MIN;
volatile int32_t t31 = -38;
int16_t x133 = -1;
int16_t x140 = INT16_MIN;
int8_t x148 = 2;
volatile int32_t t36 = 85;
int32_t t37 = -16629668;
int8_t x154 = 1;
int8_t x159 = 49;
uint16_t x164 = UINT16_MAX;
volatile uint64_t x174 = 14166LLU;
static int32_t x179 = -1277858;
static volatile uint8_t x184 = UINT8_MAX;
int32_t x185 = -1;
uint8_t x188 = 15U;
int64_t x190 = -58LL;
int64_t x195 = -1LL;
volatile int64_t t48 = -66754050466LL;
int8_t x197 = INT8_MIN;
uint16_t x199 = 79U;
int16_t x200 = INT16_MAX;
int16_t x203 = -1;
static volatile int32_t x204 = -1;
uint16_t x205 = 3738U;
uint64_t x206 = UINT64_MAX;
int32_t x214 = -826089396;
int16_t x215 = INT16_MAX;
int64_t x219 = 14802944165859038LL;
static int64_t x220 = INT64_MIN;
int64_t x226 = INT64_MAX;
static int16_t x230 = INT16_MAX;
int32_t x235 = INT32_MAX;
static int8_t x236 = INT8_MAX;
volatile int8_t x239 = INT8_MAX;
static uint64_t t59 = 1105874298138491797LLU;
int64_t x243 = -1974936516098895526LL;
volatile int16_t x259 = INT16_MIN;
volatile int64_t x266 = 4137442410LL;
int32_t t66 = -1;
static int32_t x269 = INT32_MAX;
int16_t x277 = 9;
int8_t x283 = -1;
int64_t x285 = INT64_MIN;
static uint64_t x288 = UINT64_MAX;
int64_t t71 = -2002938LL;
volatile int32_t t72 = 122;
static uint8_t x294 = 0U;
static uint32_t x306 = 3079341U;
int16_t x308 = INT16_MIN;
int8_t x309 = INT8_MIN;
volatile int32_t t77 = 799300393;
int32_t x313 = INT32_MIN;
int16_t x314 = INT16_MAX;
uint32_t x320 = 0U;
uint16_t x324 = 1081U;
uint64_t x326 = 168943136250LLU;
volatile int32_t x327 = -1;
int8_t x328 = 23;
uint8_t x333 = 2U;
static int32_t x341 = 1;
volatile int32_t x348 = INT32_MIN;
static int64_t t86 = INT64_MIN;
static volatile int64_t t88 = -13111588139075471LL;
int32_t t89 = 7448;
uint32_t t90 = 5114166U;
int16_t x366 = 646;
static uint64_t x367 = UINT64_MAX;
volatile int32_t x368 = INT32_MIN;
volatile int32_t t91 = -27132;
int16_t x371 = INT16_MIN;
uint16_t x377 = 4U;
static int64_t x378 = INT64_MAX;
volatile int8_t x379 = INT8_MAX;
volatile int64_t x381 = INT64_MAX;
volatile int32_t x387 = INT32_MIN;
int32_t x392 = INT32_MIN;
volatile int64_t x394 = INT64_MAX;
volatile int64_t t98 = 758908LL;
uint16_t x397 = 21U;


void f0(void) {
	volatile uint64_t x1 = 11301332LLU;
	static int64_t x3 = -1LL;
	int64_t x4 = INT64_MIN;
	volatile uint64_t t0 = 1320LLU;

	t0 = (x1*(x2<=(x3<x4)));

	if (t0 != 11301332LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 13U;
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = UINT32_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -1738;

	t1 = (x5*(x6<=(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 5613844668168490LL;
	int16_t x10 = 1;
	int32_t x11 = 1943076;
	static int8_t x12 = INT8_MIN;
	int64_t t2 = -519650421190946LL;

	t2 = (x9*(x10<=(x11<x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static volatile uint32_t x14 = UINT32_MAX;
	int64_t x15 = -28706723244560LL;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 31422LL;

	t3 = (x13*(x14<=(x15<x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = 32;
	int32_t x20 = -1;
	volatile int32_t t4 = 27855;

	t4 = (x17*(x18<=(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -703;
	uint16_t x22 = 5661U;
	int32_t x23 = 26920317;
	volatile int32_t t5 = 11;

	t5 = (x21*(x22<=(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = 216839226;

	t6 = (x25*(x26<=(x27<x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x30 = UINT8_MAX;
	int64_t t7 = -19252911249LL;

	t7 = (x29*(x30<=(x31<x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MAX;
	int8_t x35 = -28;
	volatile int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -38538;

	t8 = (x33*(x34<=(x35<x36)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 3884472377652323205LL;
	uint16_t x39 = 16U;
	int64_t t9 = -856122619435LL;

	t9 = (x37*(x38<=(x39<x40)));

	if (t9 != 3884472377652323205LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile int64_t x42 = INT64_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MAX;
	static volatile int32_t t10 = -1339;

	t10 = (x41*(x42<=(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	int8_t x47 = -1;

	t11 = (x45*(x46<=(x47<x48)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = 0;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = INT32_MIN;

	t12 = (x49*(x50<=(x51<x52)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 81753923;
	volatile uint64_t x55 = UINT64_MAX;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = 757639;

	t13 = (x53*(x54<=(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -9540;
	uint32_t x59 = 2U;
	int32_t x60 = -515;
	volatile int32_t t14 = 26897;

	t14 = (x57*(x58<=(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 0U;
	int32_t x62 = 454;
	volatile int16_t x63 = INT16_MIN;
	static int32_t t15 = 1993;

	t15 = (x61*(x62<=(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint32_t x66 = 474629195U;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = 54U;
	int32_t t16 = -25339;

	t16 = (x65*(x66<=(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -200602;
	int64_t x70 = -1LL;
	static volatile uint16_t x71 = 27331U;
	int8_t x72 = 0;
	int32_t t17 = -4998054;

	t17 = (x69*(x70<=(x71<x72)));

	if (t17 != -200602) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = UINT32_MAX;
	volatile uint32_t x75 = UINT32_MAX;
	volatile int64_t t18 = -16017716768LL;

	t18 = (x73*(x74<=(x75<x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static uint16_t x78 = 1584U;
	int8_t x79 = INT8_MIN;
	static uint16_t x80 = 2148U;
	volatile int64_t t19 = -110373846593881LL;

	t19 = (x77*(x78<=(x79<x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 15910;
	uint8_t x82 = 34U;
	int16_t x83 = -1;

	t20 = (x81*(x82<=(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -1;
	static int32_t x86 = INT32_MIN;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MAX;
	int32_t t21 = 1;

	t21 = (x85*(x86<=(x87<x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 1445;
	int32_t x91 = 1828679;
	int32_t x92 = 111;
	volatile int32_t t22 = 7828;

	t22 = (x89*(x90<=(x91<x92)));

	if (t22 != 1445) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	int8_t x95 = 18;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = 7;

	t23 = (x93*(x94<=(x95<x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	static uint8_t x98 = 11U;
	int8_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	int64_t t24 = 1008757824751756312LL;

	t24 = (x97*(x98<=(x99<x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	static uint16_t x102 = 38U;
	uint16_t x104 = 40U;
	volatile int32_t t25 = 59;

	t25 = (x101*(x102<=(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x105 = 0U;
	static uint16_t x107 = 1077U;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 327;

	t26 = (x105*(x106<=(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = -1LL;
	int32_t x111 = -4446421;
	int8_t x112 = -6;
	static int32_t t27 = -121654;

	t27 = (x109*(x110<=(x111<x112)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = UINT16_MAX;
	int16_t x115 = INT16_MIN;
	int16_t x116 = -615;
	int64_t t28 = 39857517LL;

	t28 = (x113*(x114<=(x115<x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -5177LL;
	static volatile int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	volatile uint32_t x120 = 6952134U;
	volatile int64_t t29 = -207571723614768LL;

	t29 = (x117*(x118<=(x119<x120)));

	if (t29 != -5177LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	static volatile int64_t x122 = INT64_MAX;
	int32_t x123 = INT32_MIN;
	uint64_t x124 = 37577270079899805LLU;
	volatile int32_t t30 = -1;

	t30 = (x121*(x122<=(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 39;
	volatile int64_t x126 = 36036653106189490LL;
	int64_t x127 = INT64_MAX;

	t31 = (x125*(x126<=(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 19U;
	int32_t x130 = 30513;
	static uint16_t x131 = 5617U;
	uint16_t x132 = UINT16_MAX;
	uint32_t t32 = 1U;

	t32 = (x129*(x130<=(x131<x132)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = UINT8_MAX;
	uint32_t x135 = UINT32_MAX;
	uint8_t x136 = 8U;
	static int32_t t33 = 5128;

	t33 = (x133*(x134<=(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 16U;
	int16_t x138 = INT16_MAX;
	int32_t x139 = -775500759;
	int32_t t34 = 0;

	t34 = (x137*(x138<=(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 8349;
	int64_t x142 = INT64_MIN;
	volatile int8_t x143 = INT8_MIN;
	static int64_t x144 = -1LL;
	volatile int32_t t35 = 330744769;

	t35 = (x141*(x142<=(x143<x144)));

	if (t35 != 8349) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = -2004;

	t36 = (x145*(x146<=(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = 119U;
	uint64_t x150 = 441446752506087LLU;
	volatile int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MAX;

	t37 = (x149*(x150<=(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 798U;
	int8_t x155 = -1;
	uint64_t x156 = 55966012LLU;
	volatile int32_t t38 = -20642642;

	t38 = (x153*(x154<=(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = 26;
	int64_t x158 = -1070486LL;
	uint64_t x160 = 44481341377143482LLU;
	volatile int32_t t39 = 889973;

	t39 = (x157*(x158<=(x159<x160)));

	if (t39 != 26) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 193;
	int64_t x162 = 50278279862LL;
	int16_t x163 = INT16_MIN;
	int32_t t40 = -4115;

	t40 = (x161*(x162<=(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static int16_t x166 = -2;
	int8_t x167 = -1;
	int32_t x168 = INT32_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x165*(x166<=(x167<x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 54708U;
	uint32_t x170 = 3363559U;
	static volatile int32_t x171 = 630672;
	int8_t x172 = INT8_MAX;
	static uint32_t t42 = 5343734U;

	t42 = (x169*(x170<=(x171<x172)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = UINT16_MAX;
	static int32_t t43 = -16602600;

	t43 = (x173*(x174<=(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 26LLU;
	int32_t x178 = INT32_MAX;
	uint8_t x180 = 34U;
	volatile uint64_t t44 = 199611301723922LLU;

	t44 = (x177*(x178<=(x179<x180)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = -1;
	int8_t x183 = INT8_MIN;
	volatile int32_t t45 = INT32_MAX;

	t45 = (x181*(x182<=(x183<x184)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x186 = 29944;
	uint8_t x187 = 3U;
	static int32_t t46 = 13003;

	t46 = (x185*(x186<=(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	int16_t x192 = 383;
	volatile int32_t t47 = 8072;

	t47 = (x189*(x190<=(x191<x192)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MAX;
	volatile int8_t x196 = INT8_MIN;

	t48 = (x193*(x194<=(x195<x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x198 = INT32_MAX;
	static int32_t t49 = -924117;

	t49 = (x197*(x198<=(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int64_t x202 = -1LL;
	volatile int32_t t50 = 12;

	t50 = (x201*(x202<=(x203<x204)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = -1;
	uint64_t x208 = UINT64_MAX;
	static volatile int32_t t51 = 11;

	t51 = (x205*(x206<=(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	int16_t x210 = -1;
	int16_t x211 = 16;
	uint8_t x212 = 2U;
	int64_t t52 = -390520662904933473LL;

	t52 = (x209*(x210<=(x211<x212)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	int64_t x216 = 291941732LL;
	volatile int32_t t53 = -157705;

	t53 = (x213*(x214<=(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -88LL;
	volatile int8_t x218 = -1;
	int64_t t54 = -478LL;

	t54 = (x217*(x218<=(x219<x220)));

	if (t54 != -88LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = 11553;
	int32_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 48U;
	volatile int32_t t55 = -202028076;

	t55 = (x221*(x222<=(x223<x224)));

	if (t55 != 11553) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static uint8_t x227 = 10U;
	volatile int8_t x228 = INT8_MAX;
	static int32_t t56 = 808;

	t56 = (x225*(x226<=(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 522827233;
	int32_t x231 = -82108573;
	int64_t x232 = INT64_MIN;
	int32_t t57 = 8155;

	t57 = (x229*(x230<=(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MAX;
	int32_t x234 = INT32_MAX;
	static volatile int32_t t58 = 0;

	t58 = (x233*(x234<=(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 11426613LLU;
	int8_t x238 = -1;
	volatile uint16_t x240 = 18278U;

	t59 = (x237*(x238<=(x239<x240)));

	if (t59 != 11426613LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -201;
	int32_t x242 = -3674008;
	static int16_t x244 = INT16_MAX;
	int32_t t60 = 40564572;

	t60 = (x241*(x242<=(x243<x244)));

	if (t60 != -201) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = UINT32_MAX;
	int8_t x248 = -5;
	uint64_t t61 = UINT64_MAX;

	t61 = (x245*(x246<=(x247<x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = 2150618U;
	int32_t x252 = INT32_MAX;
	int32_t t62 = -201930616;

	t62 = (x249*(x250<=(x251<x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MAX;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = -1;
	volatile int32_t t63 = 328846785;

	t63 = (x253*(x254<=(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 1U;
	int8_t x258 = INT8_MAX;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -3148641;

	t64 = (x257*(x258<=(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 337U;
	static volatile int32_t t65 = -3049;

	t65 = (x261*(x262<=(x263<x264)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 11U;
	volatile int16_t x267 = INT16_MIN;
	int32_t x268 = -113491;

	t66 = (x265*(x266<=(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MIN;
	static int8_t x271 = 14;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t67 = INT32_MAX;

	t67 = (x269*(x270<=(x271<x272)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x273 = 30U;
	uint16_t x274 = 6147U;
	uint8_t x275 = 6U;
	static int32_t x276 = INT32_MAX;
	int32_t t68 = -458952491;

	t68 = (x273*(x274<=(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MAX;
	uint32_t x280 = 6758U;
	int32_t t69 = 152;

	t69 = (x277*(x278<=(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	uint32_t x284 = 5292U;
	volatile int32_t t70 = INT32_MIN;

	t70 = (x281*(x282<=(x283<x284)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x286 = INT64_MAX;
	uint32_t x287 = 20686005U;

	t71 = (x285*(x286<=(x287<x288)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 2U;
	int64_t x290 = INT64_MIN;
	volatile uint16_t x291 = 70U;
	static volatile int32_t x292 = 160554;

	t72 = (x289*(x290<=(x291<x292)));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 16117U;
	volatile int16_t x295 = INT16_MIN;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = 150926;

	t73 = (x293*(x294<=(x295<x296)));

	if (t73 != 16117) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -629189223LL;
	static uint64_t x298 = 266006506976592LLU;
	static uint8_t x299 = 10U;
	uint16_t x300 = 6868U;
	volatile int64_t t74 = 8174600529LL;

	t74 = (x297*(x298<=(x299<x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	int32_t x302 = -1;
	volatile int64_t x303 = INT64_MIN;
	static uint8_t x304 = UINT8_MAX;
	static volatile int32_t t75 = 520491485;

	t75 = (x301*(x302<=(x303<x304)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	static int64_t x307 = INT64_MIN;
	volatile int64_t t76 = -2254LL;

	t76 = (x305*(x306<=(x307<x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 43242462U;
	uint32_t x311 = 258930008U;
	volatile uint64_t x312 = 12818493095607631LLU;

	t77 = (x309*(x310<=(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x315 = INT8_MAX;
	uint8_t x316 = 39U;
	static int32_t t78 = 376586;

	t78 = (x313*(x314<=(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 0U;
	static volatile int32_t t79 = INT32_MIN;

	t79 = (x317*(x318<=(x319<x320)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MAX;
	static int8_t x323 = INT8_MIN;
	int32_t t80 = -77;

	t80 = (x321*(x322<=(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int32_t t81 = -3457447;

	t81 = (x325*(x326<=(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -14;
	volatile int64_t x330 = -1LL;
	int32_t x331 = 504;
	static uint32_t x332 = 18U;
	int32_t t82 = 5;

	t82 = (x329*(x330<=(x331<x332)));

	if (t82 != -14) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = 93272468506LLU;
	static int64_t x335 = -1LL;
	static int16_t x336 = -431;
	volatile int32_t t83 = -2943653;

	t83 = (x333*(x334<=(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 3642789291472686413LLU;
	volatile int8_t x338 = INT8_MAX;
	int8_t x339 = 6;
	int32_t x340 = INT32_MAX;
	static uint64_t t84 = 5LLU;

	t84 = (x337*(x338<=(x339<x340)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	int32_t x343 = -4364509;
	int16_t x344 = INT16_MAX;
	volatile int32_t t85 = -1;

	t85 = (x341*(x342<=(x343<x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	static volatile int16_t x346 = INT16_MIN;
	int64_t x347 = 3677947LL;

	t86 = (x345*(x346<=(x347<x348)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	int8_t x350 = INT8_MAX;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = -1;
	static int32_t t87 = -11;

	t87 = (x349*(x350<=(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MAX;
	uint32_t x354 = UINT32_MAX;
	volatile int64_t x355 = -561788LL;
	int16_t x356 = INT16_MIN;

	t88 = (x353*(x354<=(x355<x356)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	static volatile int32_t x359 = 31282;
	int64_t x360 = -1LL;

	t89 = (x357*(x358<=(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 479854623U;
	int16_t x362 = 285;
	int8_t x363 = 13;
	uint32_t x364 = 401293U;

	t90 = (x361*(x362<=(x363<x364)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;

	t91 = (x365*(x366<=(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	static int8_t x370 = INT8_MIN;
	static int32_t x372 = -1;
	int32_t t92 = INT32_MAX;

	t92 = (x369*(x370<=(x371<x372)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	uint16_t x374 = 3U;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 5578529855991549LL;
	volatile int64_t t93 = 13585581LL;

	t93 = (x373*(x374<=(x375<x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x380 = INT16_MIN;
	int32_t t94 = 19457;

	t94 = (x377*(x378<=(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	int32_t x383 = -1;
	int32_t x384 = 53147650;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x381*(x382<=(x383<x384)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MAX;
	volatile uint32_t x386 = 1735681867U;
	int16_t x388 = -1;
	int32_t t96 = 78;

	t96 = (x385*(x386<=(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 225584266874749LL;
	static int64_t x390 = INT64_MAX;
	static int32_t x391 = INT32_MAX;
	volatile int64_t t97 = -45315029378LL;

	t97 = (x389*(x390<=(x391<x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -366LL;
	uint16_t x395 = 1387U;
	uint16_t x396 = UINT16_MAX;

	t98 = (x393*(x394<=(x395<x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x398 = -1;
	int32_t x399 = INT32_MIN;
	int8_t x400 = -1;
	volatile int32_t t99 = -42;

	t99 = (x397*(x398<=(x399<x400)));

	if (t99 != 21) { NG(); } else { ; }
	
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

