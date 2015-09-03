#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 64706756895639LLU;
uint16_t x8 = 1U;
static int64_t x9 = INT64_MIN;
static int8_t x11 = INT8_MIN;
int64_t t2 = 105078111413LL;
int64_t x19 = -280145LL;
int8_t x23 = 20;
int16_t x37 = -1;
int32_t x47 = 279012908;
int32_t x64 = -1;
uint32_t x70 = 1610U;
int64_t x71 = INT64_MAX;
int8_t x74 = INT8_MAX;
static int64_t x77 = INT64_MIN;
uint8_t x78 = 4U;
int8_t x80 = 2;
volatile int64_t t19 = INT64_MIN;
int64_t x84 = INT64_MIN;
volatile int8_t x88 = INT8_MIN;
int64_t x91 = INT64_MAX;
static int32_t x95 = INT32_MIN;
uint16_t x96 = 2U;
int32_t t23 = -16007807;
int8_t x117 = -1;
volatile int64_t x119 = -1LL;
static int32_t t29 = -26668;
int8_t x122 = -1;
int32_t t31 = -1126159;
int32_t t32 = 905306173;
volatile int64_t x137 = INT64_MAX;
volatile int32_t t35 = -301939;
int32_t x150 = -1;
static volatile int64_t x151 = INT64_MIN;
static int64_t x154 = INT64_MAX;
int64_t x157 = INT64_MIN;
uint16_t x158 = 44U;
volatile int64_t t40 = 1414132433995LL;
int32_t x166 = INT32_MIN;
static volatile int16_t x168 = INT16_MIN;
volatile int32_t t42 = 1;
volatile int8_t x174 = 1;
static uint16_t x175 = 1U;
int64_t x176 = INT64_MAX;
volatile int32_t x180 = 51126;
volatile int64_t t46 = 9071700LL;
static volatile int16_t x193 = 8850;
int32_t x200 = -1;
int32_t x202 = -364;
static volatile int32_t t50 = -67;
int64_t x211 = INT64_MAX;
volatile int8_t x212 = -8;
int32_t t53 = -8;
uint16_t x217 = UINT16_MAX;
uint32_t x218 = UINT32_MAX;
int32_t x223 = -12073820;
uint8_t x228 = UINT8_MAX;
int8_t x230 = -21;
static uint64_t x235 = 227672LLU;
int16_t x236 = 4;
uint8_t x238 = 0U;
volatile uint16_t x248 = 0U;
volatile int16_t x254 = -7726;
int32_t t63 = -656017;
uint16_t x262 = 3U;
int8_t x265 = INT8_MIN;
int32_t x269 = INT32_MAX;
int32_t x273 = INT32_MAX;
uint16_t x274 = 37U;
uint8_t x275 = 1U;
static uint8_t x278 = 119U;
uint16_t x286 = 1143U;
int16_t x293 = INT16_MIN;
volatile int32_t x304 = 2;
static int8_t x315 = -1;
int8_t x316 = INT8_MAX;
int32_t x324 = INT32_MAX;
volatile int32_t t80 = -12;
int32_t t81 = 74414;
int32_t x330 = -1;
int32_t x343 = INT32_MIN;
uint32_t x348 = UINT32_MAX;
uint64_t x350 = 452551226952LLU;
uint16_t x354 = 1U;
volatile int32_t t88 = 104471;
int32_t x358 = 396;
volatile int16_t x359 = INT16_MIN;
uint32_t t90 = 148U;
static volatile int32_t t91 = -264270338;
int64_t x371 = -15119043075LL;
int32_t t92 = 3011;
volatile uint32_t x374 = 275294205U;
uint8_t x383 = UINT8_MAX;
int32_t x387 = -1;
int8_t x392 = 38;
volatile int32_t x400 = 680771420;
static int32_t t99 = 575885640;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int32_t x3 = INT32_MIN;
	uint8_t x4 = 116U;
	int64_t t0 = INT64_MAX;

	t0 = (x1^(x2<(x3<x4)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 125160021LL;
	static volatile int16_t x6 = 6;
	int16_t x7 = -1;
	int64_t t1 = 352905091689906LL;

	t1 = (x5^(x6<(x7<x8)));

	if (t1 != 125160021LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -1;
	static int8_t x12 = INT8_MIN;

	t2 = (x9^(x10<(x11<x12)));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 58U;
	int8_t x14 = INT8_MIN;
	static int16_t x15 = 15;
	static uint8_t x16 = UINT8_MAX;
	int32_t t3 = -4269471;

	t3 = (x13^(x14<(x15<x16)));

	if (t3 != 59) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	volatile uint32_t x18 = 7U;
	static volatile uint8_t x20 = 13U;
	uint32_t t4 = UINT32_MAX;

	t4 = (x17^(x18<(x19<x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint8_t x22 = 0U;
	volatile uint16_t x24 = 0U;
	static volatile int32_t t5 = INT32_MAX;

	t5 = (x21^(x22<(x23<x24)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int64_t x26 = INT64_MIN;
	volatile uint8_t x27 = UINT8_MAX;
	int64_t x28 = -1LL;
	int32_t t6 = -42346405;

	t6 = (x25^(x26<(x27<x28)));

	if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	volatile int16_t x30 = -1;
	int8_t x31 = -63;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -189678348;

	t7 = (x29^(x30<(x31<x32)));

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static volatile uint64_t x34 = UINT64_MAX;
	int16_t x35 = -5688;
	int8_t x36 = -1;
	int32_t t8 = -2956442;

	t8 = (x33^(x34<(x35<x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MAX;
	uint32_t x39 = 677021U;
	volatile int8_t x40 = INT8_MIN;
	int32_t t9 = 1;

	t9 = (x37^(x38<(x39<x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	static int64_t x43 = INT64_MIN;
	int8_t x44 = 4;
	static volatile int32_t t10 = INT32_MIN;

	t10 = (x41^(x42<(x43<x44)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = 2;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 2020;

	t11 = (x45^(x46<(x47<x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -260155969;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = UINT16_MAX;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = -288171603;

	t12 = (x49^(x50<(x51<x52)));

	if (t12 != -260155970) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = -1;
	volatile int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile int64_t t13 = 1LL;

	t13 = (x53^(x54<(x55<x56)));

	if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	uint32_t x58 = 62434U;
	int16_t x59 = -348;
	static volatile int64_t x60 = -1LL;
	int32_t t14 = 1;

	t14 = (x57^(x58<(x59<x60)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile int16_t x62 = -7487;
	uint8_t x63 = UINT8_MAX;
	int32_t t15 = 175526;

	t15 = (x61^(x62<(x63<x64)));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	volatile int64_t x66 = -48LL;
	volatile int32_t x67 = INT32_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -1956369;

	t16 = (x65^(x66<(x67<x68)));

	if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x72 = 0;
	volatile int32_t t17 = 456;

	t17 = (x69^(x70<(x71<x72)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int16_t x75 = -4273;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -1;

	t18 = (x73^(x74<(x75<x76)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x79 = UINT64_MAX;

	t19 = (x77^(x78<(x79<x80)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 3;
	int16_t x82 = INT16_MAX;
	int64_t x83 = -662169LL;
	int32_t t20 = -309;

	t20 = (x81^(x82<(x83<x84)));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	static int16_t x86 = -1;
	static volatile int16_t x87 = INT16_MIN;
	volatile int64_t t21 = 4002LL;

	t21 = (x85^(x86<(x87<x88)));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 74281231;
	int64_t x90 = -1LL;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -36426477;

	t22 = (x89^(x90<(x91<x92)));

	if (t22 != 74281230) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int64_t x94 = 872937810108909985LL;

	t23 = (x93^(x94<(x95<x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	uint64_t x98 = 32550019LLU;
	int8_t x99 = -3;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 6626095;

	t24 = (x97^(x98<(x99<x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	volatile int64_t x102 = INT64_MIN;
	int64_t x103 = 65932900LL;
	int8_t x104 = 2;
	static volatile int32_t t25 = 268;

	t25 = (x101^(x102<(x103<x104)));

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	volatile int16_t x106 = INT16_MIN;
	uint8_t x107 = 56U;
	int64_t x108 = INT64_MAX;
	static int32_t t26 = 1104;

	t26 = (x105^(x106<(x107<x108)));

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MAX;
	volatile int16_t x112 = -1;
	int64_t t27 = -1959197187LL;

	t27 = (x109^(x110<(x111<x112)));

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MIN;
	volatile int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = 188584076;

	t28 = (x113^(x114<(x115<x116)));

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -242;
	volatile uint8_t x120 = 2U;

	t29 = (x117^(x118<(x119<x120)));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int64_t x123 = -1LL;
	int64_t x124 = 627990LL;
	int32_t t30 = 39133535;

	t30 = (x121^(x122<(x123<x124)));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 116107;
	volatile int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;

	t31 = (x125^(x126<(x127<x128)));

	if (t31 != 116106) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	uint64_t x130 = 659714487732LLU;
	int32_t x131 = -1;
	volatile uint8_t x132 = 2U;

	t32 = (x129^(x130<(x131<x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	uint64_t x134 = 473644008LLU;
	int8_t x135 = INT8_MAX;
	uint8_t x136 = 82U;
	volatile int32_t t33 = -1780;

	t33 = (x133^(x134<(x135<x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = UINT16_MAX;
	static int16_t x140 = INT16_MAX;
	static volatile int64_t t34 = INT64_MAX;

	t34 = (x137^(x138<(x139<x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	static uint8_t x143 = UINT8_MAX;
	int64_t x144 = -382299408899LL;

	t35 = (x141^(x142<(x143<x144)));

	if (t35 != 32766) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 481143;
	int32_t x146 = -780469789;
	volatile int64_t x147 = INT64_MIN;
	static uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -194;

	t36 = (x145^(x146<(x147<x148)));

	if (t36 != 481142) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 824013828008LLU;
	uint32_t x152 = 1868721215U;
	static volatile uint64_t t37 = 8706812188LLU;

	t37 = (x149^(x150<(x151<x152)));

	if (t37 != 824013828009LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	volatile int64_t x155 = -1405LL;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 9892003;

	t38 = (x153^(x154<(x155<x156)));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x159 = -1;
	uint8_t x160 = 2U;
	static int64_t t39 = INT64_MIN;

	t39 = (x157^(x158<(x159<x160)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = -1LL;
	static volatile int64_t x162 = INT64_MAX;
	uint64_t x163 = 5822846646198907LLU;
	uint64_t x164 = 210LLU;

	t40 = (x161^(x162<(x163<x164)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 3U;
	int8_t x167 = 39;
	volatile int32_t t41 = -193752;

	t41 = (x165^(x166<(x167<x168)));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	volatile int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	volatile uint32_t x172 = 620U;

	t42 = (x169^(x170<(x171<x172)));

	if (t42 != 2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	static int32_t t43 = 11821;

	t43 = (x173^(x174<(x175<x176)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 3U;
	int32_t x178 = INT32_MIN;
	static int64_t x179 = -7076414501444LL;
	int32_t t44 = 8;

	t44 = (x177^(x178<(x179<x180)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 6926U;
	int32_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = 58;

	t45 = (x181^(x182<(x183<x184)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -17882LL;
	int8_t x186 = INT8_MAX;
	uint64_t x187 = 104809LLU;
	int32_t x188 = INT32_MIN;

	t46 = (x185^(x186<(x187<x188)));

	if (t46 != -17882LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	int16_t x191 = -8;
	int32_t x192 = 15;
	volatile int32_t t47 = -26763;

	t47 = (x189^(x190<(x191<x192)));

	if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = 779814908;

	t48 = (x193^(x194<(x195<x196)));

	if (t48 != 8850) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	volatile int16_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t t49 = -56937;

	t49 = (x197^(x198<(x199<x200)));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = 3197450595505431LLU;

	t50 = (x201^(x202<(x203<x204)));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 18U;
	int64_t x206 = INT64_MAX;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -1;

	t51 = (x205^(x206<(x207<x208)));

	if (t51 != 18) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	static uint8_t x210 = 5U;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x209^(x210<(x211<x212)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 277U;
	volatile int8_t x214 = -41;
	int64_t x215 = 1237917LL;
	volatile uint8_t x216 = 1U;

	t53 = (x213^(x214<(x215<x216)));

	if (t53 != 276) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = 17804862784904165LL;
	uint32_t x220 = 429221U;
	volatile int32_t t54 = 415450652;

	t54 = (x217^(x218<(x219<x220)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = 5144U;
	static volatile int8_t x222 = -27;
	int8_t x224 = INT8_MIN;
	int32_t t55 = -1308113;

	t55 = (x221^(x222<(x223<x224)));

	if (t55 != 5145) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int16_t x226 = INT16_MAX;
	int64_t x227 = 11011721LL;
	int32_t t56 = -3565336;

	t56 = (x225^(x226<(x227<x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -4695LL;
	volatile int8_t x231 = -1;
	int16_t x232 = INT16_MIN;
	static int64_t t57 = -11881LL;

	t57 = (x229^(x230<(x231<x232)));

	if (t57 != -4696LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int32_t x234 = INT32_MIN;
	int32_t t58 = -742;

	t58 = (x233^(x234<(x235<x236)));

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int8_t x239 = 1;
	int64_t x240 = -2313LL;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x237^(x238<(x239<x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 1665U;
	uint32_t x242 = UINT32_MAX;
	static volatile uint64_t x243 = 8279499362785939LLU;
	uint16_t x244 = 13750U;
	int32_t t60 = -1193;

	t60 = (x241^(x242<(x243<x244)));

	if (t60 != 1665) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 15252392;
	volatile uint8_t x246 = UINT8_MAX;
	static volatile int8_t x247 = INT8_MIN;
	volatile int32_t t61 = -70;

	t61 = (x245^(x246<(x247<x248)));

	if (t61 != 15252392) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 1430LL;
	int16_t x250 = -1;
	static int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	static volatile int64_t t62 = 3215957LL;

	t62 = (x249^(x250<(x251<x252)));

	if (t62 != 1431LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x255 = -1;
	int8_t x256 = -1;

	t63 = (x253^(x254<(x255<x256)));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 0;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -69390546;

	t64 = (x257^(x258<(x259<x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 8204989546944397LLU;
	uint8_t x263 = 103U;
	int32_t x264 = INT32_MAX;
	uint64_t t65 = 1282920878LLU;

	t65 = (x261^(x262<(x263<x264)));

	if (t65 != 8204989546944397LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	uint64_t x267 = 12365127884684723LLU;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = -483118;

	t66 = (x265^(x266<(x267<x268)));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MIN;
	int32_t x271 = 8207301;
	int8_t x272 = 0;
	static volatile int32_t t67 = 9;

	t67 = (x269^(x270<(x271<x272)));

	if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x276 = -22;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x273^(x274<(x275<x276)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	volatile int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 4026067;

	t69 = (x277^(x278<(x279<x280)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x282 = INT8_MIN;
	static volatile int32_t x283 = -1;
	static int32_t x284 = -1;
	volatile uint64_t t70 = 64701822721462417LLU;

	t70 = (x281^(x282<(x283<x284)));

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int64_t x287 = 1LL;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -6;

	t71 = (x285^(x286<(x287<x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile int16_t x290 = 13553;
	uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 339764565784414LLU;
	int32_t t72 = -42;

	t72 = (x289^(x290<(x291<x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MAX;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -21761101;

	t73 = (x293^(x294<(x295<x296)));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MAX;
	int32_t x299 = 78;
	uint16_t x300 = 16856U;
	volatile int32_t t74 = 1916;

	t74 = (x297^(x298<(x299<x300)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	uint8_t x302 = 6U;
	static uint32_t x303 = 51U;
	int64_t t75 = 1LL;

	t75 = (x301^(x302<(x303<x304)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	static uint32_t x306 = 3U;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = 7U;
	int32_t t76 = 29188;

	t76 = (x305^(x306<(x307<x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = -410;

	t77 = (x309^(x310<(x311<x312)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	volatile int32_t x314 = -40;
	volatile uint64_t t78 = 6442LLU;

	t78 = (x313^(x314<(x315<x316)));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	volatile int32_t x318 = -2;
	uint64_t x319 = 263328500798289747LLU;
	volatile uint64_t x320 = 374044708LLU;
	uint32_t t79 = 1370791820U;

	t79 = (x317^(x318<(x319<x320)));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint16_t x322 = 93U;
	uint16_t x323 = 8U;

	t80 = (x321^(x322<(x323<x324)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	static int32_t x326 = INT32_MIN;
	volatile int32_t x327 = INT32_MIN;
	int32_t x328 = -1;

	t81 = (x325^(x326<(x327<x328)));

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	static int32_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	uint32_t t82 = 2054988U;

	t82 = (x329^(x330<(x331<x332)));

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -915;
	int64_t x334 = 3025373938LL;
	int16_t x335 = -15;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 399;

	t83 = (x333^(x334<(x335<x336)));

	if (t83 != -915) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MIN;
	static int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	int64_t t84 = -200359293535LL;

	t84 = (x337^(x338<(x339<x340)));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	volatile int8_t x342 = 0;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -32;

	t85 = (x341^(x342<(x343<x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	uint16_t x346 = 29593U;
	uint32_t x347 = 3U;
	volatile int32_t t86 = -7382031;

	t86 = (x345^(x346<(x347<x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -357477LL;
	static int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;
	int64_t t87 = 27779LL;

	t87 = (x349^(x350<(x351<x352)));

	if (t87 != -357477LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -9;
	uint16_t x355 = 17193U;
	uint16_t x356 = 12U;

	t88 = (x353^(x354<(x355<x356)));

	if (t88 != -9) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 133U;
	volatile int16_t x360 = 68;
	static volatile uint32_t t89 = 248623087U;

	t89 = (x357^(x358<(x359<x360)));

	if (t89 != 133U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 212U;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = INT32_MAX;

	t90 = (x361^(x362<(x363<x364)));

	if (t90 != 213U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 30;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MAX;

	t91 = (x365^(x366<(x367<x368)));

	if (t91 != 31) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = INT8_MIN;
	static uint16_t x370 = 22391U;
	volatile int8_t x372 = INT8_MAX;

	t92 = (x369^(x370<(x371<x372)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int32_t x375 = INT32_MAX;
	uint16_t x376 = 3U;
	int64_t t93 = INT64_MAX;

	t93 = (x373^(x374<(x375<x376)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MAX;
	static uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	int64_t t94 = INT64_MAX;

	t94 = (x377^(x378<(x379<x380)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint8_t x382 = 113U;
	int8_t x384 = INT8_MIN;
	static int32_t t95 = -5209967;

	t95 = (x381^(x382<(x383<x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 749448U;
	static volatile int64_t x386 = INT64_MIN;
	static int32_t x388 = INT32_MIN;
	uint32_t t96 = 175053722U;

	t96 = (x385^(x386<(x387<x388)));

	if (t96 != 749449U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	volatile uint8_t x390 = 3U;
	int8_t x391 = -1;
	int32_t t97 = -268122;

	t97 = (x389^(x390<(x391<x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	static uint32_t x394 = 0U;
	int64_t x395 = -1LL;
	int64_t x396 = 26931213244LL;
	int32_t t98 = 15927;

	t98 = (x393^(x394<(x395<x396)));

	if (t98 != 2147483646) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;

	t99 = (x397^(x398<(x399<x400)));

	if (t99 != -32767) { NG(); } else { ; }
	
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

