#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x2 = INT8_MAX;
uint64_t x10 = UINT64_MAX;
uint64_t x15 = UINT64_MAX;
uint64_t x20 = UINT64_MAX;
uint8_t x31 = UINT8_MAX;
uint8_t x32 = UINT8_MAX;
int8_t x34 = 1;
volatile int64_t t9 = 13875616LL;
volatile int64_t x60 = INT64_MIN;
static volatile int32_t x61 = INT32_MAX;
volatile int64_t x63 = -1LL;
volatile int32_t x64 = -1;
volatile int32_t t15 = -177581;
volatile int8_t x69 = -1;
uint8_t x70 = UINT8_MAX;
uint8_t x72 = 7U;
static volatile int64_t t17 = -7877676156LL;
int16_t x78 = -1;
static uint64_t x82 = UINT64_MAX;
int32_t x92 = INT32_MIN;
volatile uint64_t t22 = 103LLU;
uint64_t x98 = 5992619LLU;
volatile int16_t x104 = INT16_MAX;
uint16_t x108 = UINT16_MAX;
volatile uint64_t t25 = 4456851147483993678LLU;
uint16_t x110 = 19U;
uint64_t x112 = 1918599237818536LLU;
volatile int32_t t26 = 31;
uint32_t t28 = 1390672029U;
int8_t x122 = INT8_MIN;
uint64_t x125 = 4901618619104990962LLU;
uint16_t x137 = 1U;
int16_t x138 = INT16_MIN;
uint32_t t34 = 21U;
static volatile int32_t t35 = -12;
volatile uint8_t x149 = 21U;
int8_t x154 = INT8_MAX;
uint32_t x155 = 4923U;
int32_t x167 = INT32_MIN;
static int64_t x168 = -1LL;
int32_t t43 = -242510;
volatile int64_t t45 = 14000855LL;
uint32_t x190 = UINT32_MAX;
static uint32_t x195 = UINT32_MAX;
static uint32_t x204 = 59027983U;
static volatile int64_t x210 = 2160159640762LL;
int8_t x212 = INT8_MIN;
static int32_t x217 = INT32_MIN;
int64_t x219 = -2946LL;
int32_t x220 = -47;
static int8_t x228 = INT8_MAX;
int16_t x229 = -1;
int64_t x235 = INT64_MIN;
volatile int32_t t57 = 142;
static int32_t x238 = 30304;
int32_t x240 = INT32_MIN;
int32_t t58 = -612;
static int64_t x242 = 1436842650621LL;
int8_t x244 = INT8_MAX;
int8_t x249 = INT8_MIN;
uint16_t x253 = UINT16_MAX;
int16_t x254 = -1;
volatile int32_t t62 = 23896026;
uint8_t x260 = 38U;
uint64_t x262 = UINT64_MAX;
static volatile uint32_t t64 = 1U;
uint16_t x274 = 86U;
volatile int32_t t67 = -35752;
static int32_t t68 = 39841;
static volatile int32_t t70 = 2;
volatile int16_t x292 = INT16_MIN;
volatile uint32_t t72 = 7446007U;
static int64_t x300 = -1LL;
static uint64_t x302 = UINT64_MAX;
volatile uint16_t x305 = UINT16_MAX;
uint64_t x308 = UINT64_MAX;
static volatile int8_t x309 = INT8_MAX;
volatile int32_t t76 = 98992827;
static uint16_t x321 = 3921U;
volatile int32_t t79 = 3;
int8_t x326 = INT8_MIN;
static int16_t x333 = 209;
static int32_t t82 = 59471;
uint8_t x339 = 4U;
volatile int16_t x344 = INT16_MIN;
volatile int32_t t86 = 107;
uint64_t t87 = 313173571LLU;
int16_t x367 = INT16_MAX;
int32_t t89 = 1;
int8_t x376 = -1;
int64_t x381 = INT64_MIN;
static int64_t t93 = -453905183357LL;
static volatile int8_t x389 = INT8_MIN;
uint16_t x393 = 376U;
uint32_t x395 = 24170805U;
volatile int32_t t98 = -800909743;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x3 = UINT64_MAX;
	uint8_t x4 = 13U;
	int32_t t0 = -213470887;

	t0 = (x1&(x2<=(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = -136374480798187704LL;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -264162466;

	t1 = (x5&(x6<=(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 312U;
	static uint8_t x11 = 47U;
	int64_t x12 = INT64_MAX;
	int32_t t2 = 237824;

	t2 = (x9&(x10<=(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = -5626LL;
	volatile int16_t x16 = INT16_MIN;
	int64_t t3 = 390270114616250LL;

	t3 = (x13&(x14<=(x15%x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t x18 = INT32_MIN;
	int8_t x19 = -42;
	int32_t t4 = -1123;

	t4 = (x17&(x18<=(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -66254LL;
	int32_t x22 = INT32_MIN;
	volatile int16_t x23 = INT16_MIN;
	uint16_t x24 = 171U;
	static volatile int64_t t5 = 115726996159149507LL;

	t5 = (x21&(x22<=(x23%x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = -560;
	static uint32_t x27 = 21126220U;
	int64_t x28 = 6837508042052333LL;
	int32_t t6 = -6670;

	t6 = (x25&(x26<=(x27%x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	uint32_t x30 = 256951U;
	volatile int32_t t7 = 12870397;

	t7 = (x29&(x30<=(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MAX;
	int64_t x35 = 8784173LL;
	volatile int16_t x36 = INT16_MAX;
	int64_t t8 = -622262473422LL;

	t8 = (x33&(x34<=(x35%x36)));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint64_t x38 = 230LLU;
	static uint8_t x39 = 2U;
	volatile int16_t x40 = INT16_MIN;

	t9 = (x37&(x38<=(x39%x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	uint64_t x42 = 440537314LLU;
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 121;

	t10 = (x41&(x42<=(x43%x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MAX;
	volatile int16_t x46 = 54;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = -1;
	int64_t t11 = -20643LL;

	t11 = (x45&(x46<=(x47%x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -91368;
	int64_t x51 = -1LL;
	static uint16_t x52 = 244U;
	static int32_t t12 = 3;

	t12 = (x49&(x50<=(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int64_t x54 = -1LL;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = -1;
	volatile uint64_t t13 = 6211475LLU;

	t13 = (x53&(x54<=(x55%x56)));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static int8_t x58 = -1;
	uint64_t x59 = 11895376119451523LLU;
	static volatile int64_t t14 = -38036374191736LL;

	t14 = (x57&(x58<=(x59%x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -30;

	t15 = (x61&(x62<=(x63%x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x71 = -1;
	volatile int32_t t16 = 15218284;

	t16 = (x69&(x70<=(x71%x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	static volatile int8_t x74 = -1;
	int64_t x75 = INT64_MAX;
	uint32_t x76 = 6U;

	t17 = (x73&(x74<=(x75%x76)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 30U;
	uint64_t x79 = UINT64_MAX;
	uint8_t x80 = 11U;
	int32_t t18 = -7179150;

	t18 = (x77&(x78<=(x79%x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -7;
	volatile int16_t x83 = INT16_MAX;
	int8_t x84 = 1;
	int32_t t19 = -11;

	t19 = (x81&(x82<=(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t20 = 167;

	t20 = (x85&(x86<=(x87%x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	int8_t x91 = INT8_MIN;
	int32_t t21 = -103;

	t21 = (x89&(x90<=(x91%x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 7994980LLU;
	int16_t x94 = INT16_MAX;
	static volatile int16_t x95 = INT16_MIN;
	int16_t x96 = -1;

	t22 = (x93&(x94<=(x95%x96)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = 929U;
	int8_t x99 = INT8_MAX;
	int16_t x100 = -1;
	volatile int32_t t23 = 172;

	t23 = (x97&(x98<=(x99%x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = 26U;
	uint32_t x103 = 324962U;
	volatile int32_t t24 = -7497445;

	t24 = (x101&(x102<=(x103%x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 130148900778LLU;
	volatile uint16_t x106 = UINT16_MAX;
	int64_t x107 = -1LL;

	t25 = (x105&(x106<=(x107%x108)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 0;
	int8_t x111 = 2;

	t26 = (x109&(x110<=(x111%x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MAX;
	int8_t x116 = -1;
	static int32_t t27 = -513407007;

	t27 = (x113&(x114<=(x115%x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 686916U;
	int8_t x118 = INT8_MIN;
	volatile int32_t x119 = -1;
	int32_t x120 = INT32_MAX;

	t28 = (x117&(x118<=(x119%x120)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	uint16_t x123 = 1746U;
	static int16_t x124 = INT16_MAX;
	int32_t t29 = 0;

	t29 = (x121&(x122<=(x123%x124)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = -7229;
	int64_t x127 = INT64_MIN;
	uint8_t x128 = UINT8_MAX;
	uint64_t t30 = 22152562040364LLU;

	t30 = (x125&(x126<=(x127%x128)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = INT32_MIN;
	volatile uint16_t x130 = 68U;
	int64_t x131 = -1LL;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t31 = 1;

	t31 = (x129&(x130<=(x131%x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MAX;
	static int64_t t32 = 2036884786128LL;

	t32 = (x133&(x134<=(x135%x136)));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = -1LL;
	volatile int32_t t33 = 30;

	t33 = (x137&(x138<=(x139%x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x141 = 3726U;
	volatile uint8_t x142 = 26U;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = -2;

	t34 = (x141&(x142<=(x143%x144)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = INT32_MAX;
	uint32_t x146 = 15U;
	uint64_t x147 = 30053888428LLU;
	volatile uint64_t x148 = 37583628829959LLU;

	t35 = (x145&(x146<=(x147%x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x150 = INT64_MIN;
	volatile int16_t x151 = -1;
	static uint32_t x152 = 153845534U;
	volatile int32_t t36 = -248;

	t36 = (x149&(x150<=(x151%x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	volatile uint32_t x156 = 18492U;
	volatile int64_t t37 = -26713438449409176LL;

	t37 = (x153&(x154<=(x155%x156)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -2;
	volatile int64_t x158 = 3503031906450157LL;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = 751LLU;
	static volatile int32_t t38 = -563;

	t38 = (x157&(x158<=(x159%x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = 24381869;
	static int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = 123;
	int32_t t39 = -62;

	t39 = (x161&(x162<=(x163%x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 146231461686551899LLU;
	int16_t x166 = INT16_MIN;
	volatile uint64_t t40 = 6388818238663LLU;

	t40 = (x165&(x166<=(x167%x168)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	static volatile uint64_t x170 = 18133LLU;
	static int8_t x171 = -1;
	volatile int32_t x172 = -1;
	int32_t t41 = -115673517;

	t41 = (x169&(x170<=(x171%x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = 123U;
	int32_t x174 = INT32_MIN;
	static uint64_t x175 = 648089878360367065LLU;
	uint32_t x176 = 1601412391U;
	int32_t t42 = 391095;

	t42 = (x173&(x174<=(x175%x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = 239;
	uint8_t x178 = 3U;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = 15U;

	t43 = (x177&(x178<=(x179%x180)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x181 = INT8_MIN;
	uint16_t x182 = 115U;
	uint64_t x183 = 183400980927993LLU;
	volatile int64_t x184 = -1LL;
	int32_t t44 = 117197466;

	t44 = (x181&(x182<=(x183%x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x185 = INT64_MAX;
	int32_t x186 = INT32_MIN;
	static uint64_t x187 = 40481LLU;
	volatile int64_t x188 = INT64_MIN;

	t45 = (x185&(x186<=(x187%x188)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int64_t x191 = INT64_MIN;
	uint16_t x192 = 3U;
	volatile int32_t t46 = 3683;

	t46 = (x189&(x190<=(x191%x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 1430931LLU;
	int16_t x194 = -1;
	int32_t x196 = INT32_MAX;
	volatile uint64_t t47 = 12LLU;

	t47 = (x193&(x194<=(x195%x196)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MAX;
	uint32_t x199 = 3072U;
	int8_t x200 = 7;
	static int32_t t48 = -7534;

	t48 = (x197&(x198<=(x199%x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 378U;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = 15U;
	int32_t t49 = 294;

	t49 = (x201&(x202<=(x203%x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = 3;
	int8_t x206 = -1;
	int64_t x207 = INT64_MIN;
	static int64_t x208 = 233715LL;
	volatile int32_t t50 = 24439;

	t50 = (x205&(x206<=(x207%x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MIN;
	volatile int16_t x211 = INT16_MAX;
	int32_t t51 = -79159831;

	t51 = (x209&(x210<=(x211%x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = 108;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MIN;
	static volatile uint64_t x216 = 1166485404741188LLU;
	int32_t t52 = -65;

	t52 = (x213&(x214<=(x215%x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x218 = 111537646433678027LL;
	volatile int32_t t53 = -81749;

	t53 = (x217&(x218<=(x219%x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = UINT32_MAX;
	uint64_t x222 = 1133073904447498880LLU;
	static int32_t x223 = -2495679;
	uint32_t x224 = 2U;
	volatile uint32_t t54 = 10321925U;

	t54 = (x221&(x222<=(x223%x224)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	static uint8_t x226 = 23U;
	int32_t x227 = INT32_MAX;
	int32_t t55 = -77313564;

	t55 = (x225&(x226<=(x227%x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = -1;
	static uint8_t x231 = UINT8_MAX;
	int64_t x232 = 349089687044504560LL;
	static volatile int32_t t56 = 373057;

	t56 = (x229&(x230<=(x231%x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MAX;
	static int16_t x234 = -1;
	int16_t x236 = -1;

	t57 = (x233&(x234<=(x235%x236)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 104U;
	volatile int64_t x239 = -1LL;

	t58 = (x237&(x238<=(x239%x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = INT32_MAX;
	int8_t x243 = 3;
	volatile int32_t t59 = -1156;

	t59 = (x241&(x242<=(x243%x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = UINT32_MAX;
	static uint32_t x246 = 6929907U;
	int8_t x247 = 5;
	int8_t x248 = 14;
	volatile uint32_t t60 = 763876734U;

	t60 = (x245&(x246<=(x247%x248)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x250 = 5539U;
	int64_t x251 = INT64_MAX;
	static uint32_t x252 = UINT32_MAX;
	int32_t t61 = -85140269;

	t61 = (x249&(x250<=(x251%x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;

	t62 = (x253&(x254<=(x255%x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 8053U;
	uint64_t x258 = 12533404553LLU;
	static int64_t x259 = -1LL;
	static uint32_t t63 = 384U;

	t63 = (x257&(x258<=(x259%x260)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 100650753U;
	volatile int16_t x263 = -6838;
	int16_t x264 = 6;

	t64 = (x261&(x262<=(x263%x264)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = -103;
	int64_t x266 = -1LL;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t65 = -6;

	t65 = (x265&(x266<=(x267%x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = -1;
	int16_t x270 = -2;
	volatile int32_t x271 = -1;
	int8_t x272 = -2;
	int32_t t66 = -316783;

	t66 = (x269&(x270<=(x271%x272)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x273 = INT32_MAX;
	uint16_t x275 = 6U;
	static int32_t x276 = -8;

	t67 = (x273&(x274<=(x275%x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	volatile int32_t x278 = -6766780;
	int8_t x279 = 1;
	volatile int64_t x280 = -1LL;

	t68 = (x277&(x278<=(x279%x280)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x281 = 126148LL;
	volatile int64_t x282 = INT64_MIN;
	static uint8_t x283 = 1U;
	int64_t x284 = INT64_MAX;
	volatile int64_t t69 = 5224100279840337LL;

	t69 = (x281&(x282<=(x283%x284)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = -1;
	int8_t x286 = INT8_MIN;
	volatile int32_t x287 = 35862018;
	static int16_t x288 = INT16_MIN;

	t70 = (x285&(x286<=(x287%x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 20598U;
	int16_t x290 = INT16_MAX;
	volatile int8_t x291 = INT8_MAX;
	volatile int32_t t71 = -38259;

	t71 = (x289&(x290<=(x291%x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 18134U;
	static volatile uint16_t x294 = 2071U;
	uint32_t x295 = 7581U;
	int32_t x296 = 670827;

	t72 = (x293&(x294<=(x295%x296)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = -1LL;
	volatile int16_t x298 = -135;
	static uint8_t x299 = 9U;
	volatile int64_t t73 = -57229114110275577LL;

	t73 = (x297&(x298<=(x299%x300)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x301 = INT32_MIN;
	int8_t x303 = 15;
	uint32_t x304 = 494739U;
	static volatile int32_t t74 = 60856414;

	t74 = (x301&(x302<=(x303%x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x306 = -16;
	int32_t x307 = INT32_MIN;
	int32_t t75 = -9597149;

	t75 = (x305&(x306<=(x307%x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x310 = 23;
	int64_t x311 = -1LL;
	static volatile int32_t x312 = INT32_MIN;

	t76 = (x309&(x310<=(x311%x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = -1;
	int8_t x314 = 4;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MIN;
	int32_t t77 = 493;

	t77 = (x313&(x314<=(x315%x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MAX;
	int64_t x319 = INT64_MIN;
	int16_t x320 = 2;
	int32_t t78 = 0;

	t78 = (x317&(x318<=(x319%x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x322 = 21;
	int8_t x323 = -1;
	uint16_t x324 = 2222U;

	t79 = (x321&(x322<=(x323%x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MIN;
	int16_t x327 = -1;
	int16_t x328 = 18;
	int32_t t80 = -298637208;

	t80 = (x325&(x326<=(x327%x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x329 = -5;
	uint8_t x330 = 98U;
	int8_t x331 = INT8_MAX;
	uint64_t x332 = 1964449749LLU;
	volatile int32_t t81 = -25900987;

	t81 = (x329&(x330<=(x331%x332)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x334 = 81065094U;
	uint64_t x335 = 93060045LLU;
	uint64_t x336 = UINT64_MAX;

	t82 = (x333&(x334<=(x335%x336)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -48;
	int32_t x338 = -68;
	volatile int64_t x340 = INT64_MAX;
	int32_t t83 = 0;

	t83 = (x337&(x338<=(x339%x340)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	int32_t x343 = -11348092;
	int32_t t84 = 135100;

	t84 = (x341&(x342<=(x343%x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = -249914873865316LL;
	static int8_t x347 = INT8_MAX;
	uint16_t x348 = 227U;
	volatile int32_t t85 = -46410;

	t85 = (x345&(x346<=(x347%x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MAX;
	int8_t x350 = -1;
	static int32_t x351 = 3036670;
	volatile uint32_t x352 = 1U;

	t86 = (x349&(x350<=(x351%x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = -8376043653LL;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MAX;

	t87 = (x353&(x354<=(x355%x356)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = 1970;
	static int64_t x362 = -40057084529694LL;
	uint32_t x363 = UINT32_MAX;
	int8_t x364 = 41;
	volatile int32_t t88 = -89;

	t88 = (x361&(x362<=(x363%x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = -1;
	static int8_t x366 = -3;
	uint32_t x368 = UINT32_MAX;

	t89 = (x365&(x366<=(x367%x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -519795925;
	int8_t x370 = 21;
	uint8_t x371 = 0U;
	int32_t x372 = INT32_MAX;
	volatile int32_t t90 = 11811;

	t90 = (x369&(x370<=(x371%x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x373 = INT32_MAX;
	volatile int32_t x374 = INT32_MIN;
	volatile int16_t x375 = -1;
	static int32_t t91 = -129408;

	t91 = (x373&(x374<=(x375%x376)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = 18767U;
	static uint64_t x378 = 8669750365536LLU;
	volatile int64_t x379 = 36952LL;
	int32_t x380 = 401428060;
	int32_t t92 = -50920185;

	t92 = (x377&(x378<=(x379%x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x382 = 1192U;
	uint16_t x383 = 8U;
	int16_t x384 = -3;

	t93 = (x381&(x382<=(x383%x384)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x385 = INT32_MIN;
	int8_t x386 = 0;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 4128491330LLU;
	int32_t t94 = -74;

	t94 = (x385&(x386<=(x387%x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x390 = INT32_MAX;
	int16_t x391 = INT16_MAX;
	int16_t x392 = -1;
	volatile int32_t t95 = 1569;

	t95 = (x389&(x390<=(x391%x392)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x394 = 4923;
	int32_t x396 = -82964610;
	volatile int32_t t96 = 122133;

	t96 = (x393&(x394<=(x395%x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x397 = -1;
	volatile int64_t x398 = INT64_MAX;
	static uint64_t x399 = 8146517166970LLU;
	int8_t x400 = INT8_MIN;
	volatile int32_t t97 = -3;

	t97 = (x397&(x398<=(x399%x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = 2577256;
	uint64_t x402 = UINT64_MAX;
	int64_t x403 = 17681165440587LL;
	int64_t x404 = -7LL;

	t98 = (x401&(x402<=(x403%x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = 0U;
	int64_t x406 = INT64_MIN;
	static int16_t x407 = 7;
	uint16_t x408 = 1U;
	static int32_t t99 = -126;

	t99 = (x405&(x406<=(x407%x408)));

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

