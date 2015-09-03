#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 0U;
int32_t t1 = -6002486;
int16_t x10 = 776;
static volatile int32_t t2 = 16162676;
uint32_t x15 = 398U;
static uint16_t x19 = 57U;
volatile int32_t t5 = -1967;
int32_t x36 = -401831983;
int32_t t8 = -19028;
int8_t x40 = 0;
volatile int32_t t9 = 21888;
volatile int16_t x45 = INT16_MAX;
static uint64_t x47 = 8961899887LLU;
volatile uint32_t x48 = 31606U;
volatile int32_t t13 = 5647;
uint64_t x57 = 1027281604843667346LLU;
volatile uint32_t x58 = 11986300U;
volatile int32_t x59 = -1;
volatile int32_t x65 = 1181278;
int32_t t16 = 3;
int32_t x74 = 1582;
uint32_t x82 = UINT32_MAX;
int16_t x83 = -1;
volatile int32_t t22 = 12094;
int8_t x93 = 0;
static uint16_t x95 = 18U;
int64_t x97 = INT64_MIN;
int8_t x102 = INT8_MIN;
int8_t x103 = -5;
static int32_t x112 = -10;
int64_t x114 = INT64_MAX;
static volatile int32_t t29 = -8118131;
uint32_t x122 = UINT32_MAX;
static int8_t x135 = -31;
int32_t x152 = INT32_MIN;
volatile int16_t x153 = 1;
uint64_t x162 = 1317LLU;
uint64_t x165 = 176823170668555182LLU;
int16_t x166 = -12;
int32_t x168 = INT32_MAX;
int8_t x173 = INT8_MIN;
uint8_t x176 = 2U;
static uint16_t x184 = UINT16_MAX;
static uint32_t x190 = 131U;
uint32_t x195 = UINT32_MAX;
static uint8_t x198 = 23U;
uint64_t x200 = 1301764LLU;
static int8_t x216 = INT8_MIN;
volatile int8_t x217 = -1;
volatile int32_t t54 = 16364285;
int64_t x221 = INT64_MIN;
static volatile int32_t t56 = 3;
int64_t x229 = 15954371333LL;
static int16_t x235 = INT16_MIN;
static int8_t x238 = INT8_MAX;
int16_t x240 = INT16_MIN;
int64_t x250 = 372LL;
int16_t x252 = INT16_MIN;
int32_t t62 = -3455;
uint64_t x255 = UINT64_MAX;
volatile int32_t x259 = INT32_MIN;
uint8_t x268 = 89U;
uint8_t x272 = 0U;
volatile int32_t t67 = -7781675;
int8_t x277 = -1;
int32_t t69 = 236;
static int32_t x287 = INT32_MIN;
volatile uint16_t x288 = 49U;
int32_t t73 = -1089041;
volatile int64_t x303 = INT64_MAX;
volatile int16_t x308 = 1;
int32_t t76 = -301688912;
static volatile int8_t x311 = INT8_MIN;
int16_t x313 = -124;
uint8_t x315 = 21U;
int32_t t78 = 10845;
static uint64_t x319 = 8LLU;
static uint32_t x322 = 726898U;
static int32_t x324 = -8840921;
volatile int32_t t80 = -138;
static uint32_t x326 = 453213989U;
int8_t x327 = -10;
int32_t t82 = 213527;
volatile uint32_t x334 = 643323U;
static int32_t x338 = -26;
uint16_t x341 = 18102U;
static volatile uint32_t x342 = UINT32_MAX;
uint64_t x344 = UINT64_MAX;
int32_t t86 = -8;
static int64_t x358 = -1LL;
int16_t x365 = 757;
static volatile uint16_t x366 = UINT16_MAX;
int64_t x371 = INT64_MIN;
static int64_t x374 = 186175442LL;
static int32_t t94 = -1;
volatile uint64_t x381 = 891600652352LLU;
int32_t t95 = -15734695;
int64_t x387 = 1LL;
volatile int32_t t96 = -3;
static int32_t t97 = 956;
int64_t x400 = -65616273427LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = 94U;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -10;

	t0 = (x1==(x2<=(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x6 = -1LL;
	static uint16_t x8 = 6U;

	t1 = (x5==(x6<=(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint32_t x11 = UINT32_MAX;
	int64_t x12 = INT64_MIN;

	t2 = (x9==(x10<=(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint64_t x14 = UINT64_MAX;
	int8_t x16 = -1;
	static int32_t t3 = 8326474;

	t3 = (x13==(x14<=(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 91U;
	static int16_t x18 = INT16_MAX;
	volatile int32_t x20 = 82471;
	static volatile int32_t t4 = 73759989;

	t4 = (x17==(x18<=(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	static volatile int16_t x22 = -1;
	volatile int32_t x23 = 178;
	static int32_t x24 = INT32_MIN;

	t5 = (x21==(x22<=(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int16_t x26 = 379;
	int16_t x27 = -1256;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 50760;

	t6 = (x25==(x26<=(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 1429717442003389LLU;
	volatile int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -368;

	t7 = (x29==(x30<=(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int8_t x34 = INT8_MAX;
	static int8_t x35 = INT8_MAX;

	t8 = (x33==(x34<=(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 773613797LLU;
	static volatile int32_t x38 = 21501;
	int16_t x39 = INT16_MIN;

	t9 = (x37==(x38<=(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MIN;
	volatile uint8_t x43 = 21U;
	int32_t x44 = -1;
	int32_t t10 = -308292;

	t10 = (x41==(x42<=(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 0U;
	volatile int32_t t11 = 1617;

	t11 = (x45==(x46<=(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 3U;
	uint64_t x50 = 6576421147141258392LLU;
	int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -3410263;

	t12 = (x49==(x50<=(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 36U;
	volatile int64_t x54 = 126569LL;
	int8_t x55 = -1;
	uint32_t x56 = 230U;

	t13 = (x53==(x54<=(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 28266;

	t14 = (x57==(x58<=(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int32_t x62 = -86565;
	int32_t x63 = 51714997;
	uint16_t x64 = 5652U;
	int32_t t15 = -272999479;

	t15 = (x61==(x62<=(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 2278997930334235LL;
	int8_t x67 = INT8_MIN;
	uint16_t x68 = 344U;

	t16 = (x65==(x66<=(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int64_t x70 = -352325996LL;
	static int16_t x71 = -1;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 1;

	t17 = (x69==(x70<=(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	int32_t x75 = 13844;
	volatile int16_t x76 = 127;
	static int32_t t18 = 11060;

	t18 = (x73==(x74<=(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	static volatile int32_t x79 = INT32_MIN;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 12507440;

	t19 = (x77==(x78<=(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 24U;
	uint64_t x84 = UINT64_MAX;
	int32_t t20 = 38624;

	t20 = (x81==(x82<=(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3875782197LLU;
	int16_t x86 = INT16_MAX;
	uint16_t x87 = UINT16_MAX;
	volatile uint32_t x88 = 211873576U;
	int32_t t21 = 94507152;

	t21 = (x85==(x86<=(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = 13058;
	int8_t x90 = INT8_MAX;
	uint8_t x91 = 1U;
	uint8_t x92 = UINT8_MAX;

	t22 = (x89==(x90<=(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = INT8_MIN;
	static volatile int16_t x96 = INT16_MIN;
	static int32_t t23 = 369;

	t23 = (x93==(x94<=(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x98 = UINT32_MAX;
	uint64_t x99 = UINT64_MAX;
	static int32_t x100 = INT32_MAX;
	int32_t t24 = -1;

	t24 = (x97==(x98<=(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 4U;
	int16_t x104 = 2135;
	static volatile int32_t t25 = 2062546;

	t25 = (x101==(x102<=(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 11311129211LL;
	int32_t x106 = 435948435;
	static int64_t x107 = INT64_MIN;
	uint8_t x108 = 1U;
	volatile int32_t t26 = 0;

	t26 = (x105==(x106<=(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	static volatile uint32_t x110 = 2034U;
	static uint16_t x111 = 25U;
	volatile int32_t t27 = -271850;

	t27 = (x109==(x110<=(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 3LLU;
	int32_t t28 = 1;

	t28 = (x113==(x114<=(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static uint64_t x118 = UINT64_MAX;
	volatile uint16_t x119 = 27096U;
	int64_t x120 = -1LL;

	t29 = (x117==(x118<=(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1552U;
	uint16_t x123 = 1320U;
	static uint16_t x124 = UINT16_MAX;
	int32_t t30 = -7714889;

	t30 = (x121==(x122<=(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 23U;
	uint32_t x126 = UINT32_MAX;
	static uint64_t x127 = 352LLU;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -33082344;

	t31 = (x125==(x126<=(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static uint8_t x130 = 9U;
	static volatile int64_t x131 = INT64_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t32 = -6;

	t32 = (x129==(x130<=(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -636;
	int16_t x134 = 6;
	static int16_t x136 = -1;
	int32_t t33 = -1939;

	t33 = (x133==(x134<=(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = UINT64_MAX;
	uint16_t x138 = 6940U;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 3779;

	t34 = (x137==(x138<=(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = 12496LL;
	uint8_t x144 = UINT8_MAX;
	static int32_t t35 = -6084327;

	t35 = (x141==(x142<=(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -11942;
	int64_t x146 = 444336617LL;
	int32_t x147 = INT32_MIN;
	static uint16_t x148 = 440U;
	static volatile int32_t t36 = 128;

	t36 = (x145==(x146<=(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 1733;
	int16_t x150 = INT16_MAX;
	volatile uint16_t x151 = 32069U;
	volatile int32_t t37 = 13380647;

	t37 = (x149==(x150<=(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MAX;
	int32_t x155 = 40796284;
	volatile int8_t x156 = INT8_MAX;
	int32_t t38 = -3;

	t38 = (x153==(x154<=(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint32_t x158 = 0U;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 230140142U;
	static volatile int32_t t39 = -10742169;

	t39 = (x157==(x158<=(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 28U;
	static volatile uint16_t x163 = 263U;
	volatile int64_t x164 = -134LL;
	volatile int32_t t40 = 1095513;

	t40 = (x161==(x162<=(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x167 = INT16_MAX;
	volatile int32_t t41 = -31047;

	t41 = (x165==(x166<=(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -1;

	t42 = (x169==(x170<=(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x174 = UINT64_MAX;
	static volatile int64_t x175 = -2221362703LL;
	static volatile int32_t t43 = -4;

	t43 = (x173==(x174<=(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 39;

	t44 = (x177==(x178<=(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 2541949U;
	int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	volatile int32_t t45 = -2248;

	t45 = (x181==(x182<=(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	static int16_t x186 = INT16_MAX;
	int8_t x187 = -1;
	static int8_t x188 = 1;
	volatile int32_t t46 = -333966;

	t46 = (x185==(x186<=(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -1;
	uint16_t x191 = UINT16_MAX;
	static volatile uint16_t x192 = 12U;
	static int32_t t47 = 4566285;

	t47 = (x189==(x190<=(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x194 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	int32_t t48 = 1;

	t48 = (x193==(x194<=(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 18U;
	int8_t x199 = -1;
	int32_t t49 = -681687;

	t49 = (x197==(x198<=(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -462266958;
	volatile int16_t x204 = 1557;
	static int32_t t50 = 181917784;

	t50 = (x201==(x202<=(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = 135211;
	static uint16_t x206 = 1U;
	volatile int64_t x207 = -1LL;
	static int32_t x208 = 1;
	volatile int32_t t51 = 110038;

	t51 = (x205==(x206<=(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MAX;
	static volatile int64_t x211 = -407LL;
	static int32_t x212 = -1;
	int32_t t52 = -1;

	t52 = (x209==(x210<=(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 15175545LL;
	volatile uint64_t x214 = UINT64_MAX;
	int64_t x215 = INT64_MAX;
	int32_t t53 = 328;

	t53 = (x213==(x214<=(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = 80U;
	int32_t x219 = 252265140;
	int32_t x220 = INT32_MIN;

	t54 = (x217==(x218<=(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	int8_t x223 = 0;
	uint32_t x224 = UINT32_MAX;
	static volatile int32_t t55 = -68319175;

	t55 = (x221==(x222<=(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 171581U;
	int64_t x228 = INT64_MAX;

	t56 = (x225==(x226<=(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = 1;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -37;

	t57 = (x229==(x230<=(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 57U;
	int8_t x234 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	static int32_t t58 = -9;

	t58 = (x233==(x234<=(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	uint8_t x239 = 9U;
	volatile int32_t t59 = 1263;

	t59 = (x237==(x238<=(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	uint32_t x243 = 10567016U;
	int64_t x244 = INT64_MAX;
	static volatile int32_t t60 = -122;

	t60 = (x241==(x242<=(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	static int8_t x246 = -1;
	volatile int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	int32_t t61 = 1270307;

	t61 = (x245==(x246<=(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 241869U;
	int8_t x251 = 0;

	t62 = (x249==(x250<=(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = 26;
	static int16_t x254 = INT16_MAX;
	uint32_t x256 = 9470515U;
	volatile int32_t t63 = -30;

	t63 = (x253==(x254<=(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = -1LL;
	static int32_t x258 = 1003466396;
	static int16_t x260 = INT16_MAX;
	static int32_t t64 = -49891695;

	t64 = (x257==(x258<=(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 0U;
	int64_t x262 = INT64_MIN;
	int64_t x263 = 31092568800LL;
	int64_t x264 = INT64_MIN;
	int32_t t65 = -38764775;

	t65 = (x261==(x262<=(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -3;
	static volatile int16_t x266 = -238;
	static uint8_t x267 = UINT8_MAX;
	volatile int32_t t66 = -9372971;

	t66 = (x265==(x266<=(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = UINT64_MAX;
	uint8_t x270 = UINT8_MAX;
	uint8_t x271 = UINT8_MAX;

	t67 = (x269==(x270<=(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 7;
	volatile uint32_t x274 = 79934834U;
	volatile int64_t x275 = -1LL;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t68 = 94124467;

	t68 = (x273==(x274<=(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = UINT16_MAX;
	int64_t x279 = -1LL;
	uint8_t x280 = 4U;

	t69 = (x277==(x278<=(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static uint8_t x282 = 3U;
	static int64_t x283 = 59986548701017LL;
	int8_t x284 = -1;
	int32_t t70 = -96858;

	t70 = (x281==(x282<=(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static volatile uint16_t x286 = 6399U;
	volatile int32_t t71 = 3;

	t71 = (x285==(x286<=(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x289 = 240;
	uint32_t x290 = 158U;
	int8_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 57;

	t72 = (x289==(x290<=(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	static uint8_t x294 = 2U;
	uint64_t x295 = 71LLU;
	uint8_t x296 = 16U;

	t73 = (x293==(x294<=(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 112U;
	volatile int16_t x298 = 98;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = 3U;
	int32_t t74 = -151220103;

	t74 = (x297==(x298<=(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x301 = INT16_MIN;
	int32_t x302 = 6871163;
	int32_t x304 = INT32_MAX;
	static int32_t t75 = -1;

	t75 = (x301==(x302<=(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	volatile int8_t x306 = -4;
	static uint32_t x307 = 14U;

	t76 = (x305==(x306<=(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 3423498871513393LLU;
	uint8_t x310 = 38U;
	uint32_t x312 = 81536684U;
	int32_t t77 = -323;

	t77 = (x309==(x310<=(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x314 = 6;
	static int16_t x316 = 5;

	t78 = (x313==(x314<=(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	static volatile int64_t x318 = -3089LL;
	int8_t x320 = -1;
	int32_t t79 = -1;

	t79 = (x317==(x318<=(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 41U;
	int16_t x323 = INT16_MIN;

	t80 = (x321==(x322<=(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int32_t x328 = -1;
	static int32_t t81 = -19935331;

	t81 = (x325==(x326<=(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = -537491397713573LL;
	volatile int8_t x331 = -17;
	int16_t x332 = 1;

	t82 = (x329==(x330<=(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 2U;
	int16_t x335 = -1272;
	int32_t x336 = 18082;
	int32_t t83 = -42156423;

	t83 = (x333==(x334<=(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = UINT64_MAX;
	int32_t x339 = 168;
	int32_t x340 = -13;
	volatile int32_t t84 = 3152;

	t84 = (x337==(x338<=(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x343 = INT8_MIN;
	static volatile int32_t t85 = -13697;

	t85 = (x341==(x342<=(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	uint16_t x346 = 13U;
	volatile int16_t x347 = -40;
	volatile int32_t x348 = INT32_MAX;

	t86 = (x345==(x346<=(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 12510U;
	uint64_t x350 = UINT64_MAX;
	uint64_t x351 = UINT64_MAX;
	volatile int64_t x352 = 21858661626905090LL;
	static volatile int32_t t87 = -61227590;

	t87 = (x349==(x350<=(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = -26731;
	int16_t x355 = INT16_MIN;
	volatile int32_t x356 = INT32_MAX;
	static int32_t t88 = -15394;

	t88 = (x353==(x354<=(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = -14;
	volatile int32_t t89 = -5;

	t89 = (x357==(x358<=(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	volatile int16_t x362 = -5110;
	int8_t x363 = -5;
	int16_t x364 = INT16_MIN;
	static int32_t t90 = 1950;

	t90 = (x361==(x362<=(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MAX;
	int32_t t91 = -4762058;

	t91 = (x365==(x366<=(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	uint64_t x370 = 8539804031LLU;
	volatile uint64_t x372 = UINT64_MAX;
	int32_t t92 = 8983;

	t92 = (x369==(x370<=(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x375 = 3U;
	int32_t x376 = 43;
	volatile int32_t t93 = -385;

	t93 = (x373==(x374<=(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -1;
	int8_t x378 = 20;
	static int64_t x379 = INT64_MIN;
	volatile int16_t x380 = 1;

	t94 = (x377==(x378<=(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -42;
	volatile uint8_t x383 = UINT8_MAX;
	uint32_t x384 = 37U;

	t95 = (x381==(x382<=(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	static volatile int64_t x386 = INT64_MIN;
	int16_t x388 = INT16_MIN;

	t96 = (x385==(x386<=(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	uint8_t x390 = 1U;
	static int64_t x391 = -1844LL;
	volatile uint8_t x392 = 1U;

	t97 = (x389==(x390<=(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 1305944024U;
	int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -435;

	t98 = (x393==(x394<=(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 0;
	int16_t x398 = -1;
	int32_t x399 = INT32_MIN;
	static volatile int32_t t99 = -1;

	t99 = (x397==(x398<=(x399==x400)));

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

