#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 315633790285LL;
volatile int8_t x8 = -19;
static int32_t x11 = 1155;
volatile int64_t t2 = -264751960349LL;
static uint8_t x19 = 16U;
int32_t t4 = -172941522;
int32_t t5 = -878;
int64_t x28 = INT64_MIN;
int32_t t6 = 199;
int64_t x32 = -1LL;
volatile uint32_t t7 = 217491194U;
int8_t x38 = INT8_MAX;
int16_t x39 = INT16_MAX;
int64_t x41 = INT64_MAX;
int8_t x49 = 14;
volatile int64_t x53 = INT64_MIN;
int64_t x56 = -1LL;
uint8_t x57 = 7U;
int8_t x58 = INT8_MIN;
uint16_t x62 = 75U;
int8_t x63 = INT8_MAX;
uint64_t x64 = UINT64_MAX;
int32_t t16 = 68280332;
int32_t x69 = INT32_MAX;
volatile int64_t x78 = 4519570LL;
volatile int32_t x81 = INT32_MAX;
int32_t x88 = -1;
volatile uint16_t x89 = UINT16_MAX;
static volatile int32_t t23 = 51;
int16_t x102 = -2;
uint64_t x104 = 0LLU;
volatile int64_t t25 = 154848238964961951LL;
int64_t x105 = 12069974187156LL;
int16_t x107 = 11423;
uint64_t x117 = 1522LLU;
uint32_t x121 = 154U;
static volatile int32_t x127 = -1;
int16_t x133 = INT16_MIN;
static int8_t x136 = -26;
int8_t x137 = -8;
uint32_t x143 = 3740U;
uint16_t x144 = 1U;
int64_t x145 = INT64_MIN;
volatile int32_t x146 = INT32_MIN;
int8_t x153 = 3;
int16_t x154 = INT16_MAX;
int8_t x158 = INT8_MIN;
volatile int16_t x159 = -1;
int32_t t39 = 22959927;
int32_t x165 = -61429;
static uint8_t x173 = UINT8_MAX;
int16_t x178 = INT16_MAX;
int32_t x184 = -1;
volatile int32_t t46 = -58876;
volatile int32_t x193 = INT32_MAX;
uint64_t x195 = UINT64_MAX;
volatile int32_t t48 = 309;
static int64_t x202 = -1172429976873380LL;
int32_t x208 = -1;
int64_t t51 = -79259LL;
uint32_t x209 = 227880643U;
volatile uint32_t x217 = 27124U;
int32_t x221 = -1;
uint32_t x222 = UINT32_MAX;
int64_t x234 = -5504603675163LL;
volatile int64_t x235 = -3073LL;
int64_t x236 = INT64_MIN;
int8_t x239 = INT8_MAX;
volatile int16_t x241 = INT16_MAX;
volatile int16_t x242 = INT16_MIN;
int32_t x245 = -1;
int32_t x246 = INT32_MAX;
static uint16_t x254 = UINT16_MAX;
int16_t x261 = -3987;
uint16_t x270 = UINT16_MAX;
int16_t x280 = -1;
static int32_t x289 = INT32_MIN;
static uint8_t x291 = 23U;
int8_t x295 = INT8_MIN;
int8_t x297 = -1;
volatile uint64_t x298 = UINT64_MAX;
volatile int64_t x301 = -1LL;
uint16_t x305 = 6U;
int32_t x306 = INT32_MIN;
volatile uint8_t x307 = 63U;
uint32_t x313 = 97U;
int16_t x314 = INT16_MAX;
int32_t x324 = INT32_MIN;
int16_t x340 = -1;
uint64_t x341 = 14338LLU;
static uint64_t x346 = 91318572LLU;
int32_t x350 = -14216;
int8_t x353 = INT8_MAX;
uint32_t x360 = 39U;
int32_t t90 = -31;
int8_t x376 = -50;
int8_t x380 = -1;
uint8_t x382 = 2U;
volatile int32_t t96 = -107533;
int8_t x395 = 0;
volatile int64_t x398 = -1LL;
static volatile uint64_t t99 = 1038935571LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	volatile uint8_t x3 = UINT8_MAX;
	int32_t t0 = -138;

	t0 = (x1&(x2<=(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x6 = INT64_MAX;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 3745935;

	t1 = (x5&(x6<=(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile int32_t x10 = -12172002;
	int8_t x12 = -1;

	t2 = (x9&(x10<=(x11<x12)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	uint64_t x14 = 40633760LLU;
	uint16_t x15 = 2U;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -5129;

	t3 = (x13&(x14<=(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 3;
	int16_t x18 = -1;
	uint64_t x20 = 59778298LLU;

	t4 = (x17&(x18<=(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	volatile uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 372U;
	volatile int32_t x24 = INT32_MIN;

	t5 = (x21&(x22<=(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int32_t x26 = -4;
	int16_t x27 = -56;

	t6 = (x25&(x26<=(x27<x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 93U;
	int16_t x30 = INT16_MAX;
	static int8_t x31 = INT8_MAX;

	t7 = (x29&(x30<=(x31<x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint64_t x34 = 13222356784LLU;
	static volatile int8_t x35 = INT8_MIN;
	static uint8_t x36 = UINT8_MAX;
	int32_t t8 = 7936;

	t8 = (x33&(x34<=(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 72152068;

	t9 = (x37&(x38<=(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = 1818;
	int16_t x43 = -3417;
	volatile int64_t x44 = INT64_MIN;
	static int64_t t10 = 677924158LL;

	t10 = (x41&(x42<=(x43<x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -493;
	int64_t x46 = INT64_MIN;
	volatile int16_t x47 = INT16_MIN;
	static int16_t x48 = -1;
	int32_t t11 = 388125649;

	t11 = (x45&(x46<=(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MAX;
	uint32_t x52 = 39815465U;
	static int32_t t12 = 2;

	t12 = (x49&(x50<=(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	uint64_t x55 = UINT64_MAX;
	volatile int64_t t13 = 149601LL;

	t13 = (x53&(x54<=(x55<x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x59 = INT64_MIN;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = 245;

	t14 = (x57&(x58<=(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 62;
	static int32_t t15 = -247;

	t15 = (x61&(x62<=(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 3U;
	int16_t x66 = -16;
	int32_t x67 = INT32_MIN;
	int32_t x68 = -268754865;

	t16 = (x65&(x66<=(x67<x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x70 = -1;
	volatile int32_t x71 = INT32_MIN;
	uint16_t x72 = 1U;
	volatile int32_t t17 = -83581;

	t17 = (x69&(x70<=(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 591;
	uint64_t x74 = UINT64_MAX;
	volatile int16_t x75 = -1;
	int32_t x76 = -1;
	int32_t t18 = -249123943;

	t18 = (x73&(x74<=(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 3132U;
	static volatile int64_t x79 = -1021LL;
	int32_t x80 = -129152662;
	static int32_t t19 = 751009;

	t19 = (x77&(x78<=(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 1347U;
	uint32_t x83 = 2557U;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -31634;

	t20 = (x81&(x82<=(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile uint64_t x86 = UINT64_MAX;
	int16_t x87 = -1;
	uint64_t t21 = 25761200LLU;

	t21 = (x85&(x86<=(x87<x88)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = 4713;
	static uint8_t x91 = UINT8_MAX;
	static int64_t x92 = -18554440396LL;
	int32_t t22 = 3;

	t22 = (x89&(x90<=(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MAX;
	uint16_t x95 = 2U;
	volatile uint16_t x96 = UINT16_MAX;

	t23 = (x93&(x94<=(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = 161726573406483LL;
	int8_t x98 = 9;
	static int32_t x99 = 41766;
	static int32_t x100 = -1;
	int64_t t24 = 615560240949511LL;

	t24 = (x97&(x98<=(x99<x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 4557750LL;
	uint64_t x103 = 375521274562774LLU;

	t25 = (x101&(x102<=(x103<x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 7U;
	uint32_t x108 = 893595U;
	volatile int64_t t26 = 84173158351896769LL;

	t26 = (x105&(x106<=(x107<x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = INT64_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -11735;

	t27 = (x109&(x110<=(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 102U;
	static int16_t x114 = -1;
	volatile uint32_t x115 = 2183U;
	static uint8_t x116 = 12U;
	volatile int32_t t28 = -761;

	t28 = (x113&(x114<=(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x118 = UINT8_MAX;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	uint64_t t29 = 2654388364003103092LLU;

	t29 = (x117&(x118<=(x119<x120)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	static uint32_t x123 = 18U;
	uint8_t x124 = 3U;
	uint32_t t30 = 1U;

	t30 = (x121&(x122<=(x123<x124)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 847011364425LL;
	uint32_t x126 = UINT32_MAX;
	int8_t x128 = 35;
	int64_t t31 = -404124856LL;

	t31 = (x125&(x126<=(x127<x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -7211118813LL;
	int16_t x130 = INT16_MIN;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = -35;
	volatile int64_t t32 = -197333845056LL;

	t32 = (x129&(x130<=(x131<x132)));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	int64_t x135 = 273460073LL;
	volatile int32_t t33 = 125808169;

	t33 = (x133&(x134<=(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = UINT64_MAX;
	volatile uint16_t x139 = 1U;
	volatile int32_t x140 = INT32_MIN;
	int32_t t34 = -3132;

	t34 = (x137&(x138<=(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1663119876926466625LL;
	int8_t x142 = INT8_MAX;
	int64_t t35 = -46540501415682028LL;

	t35 = (x141&(x142<=(x143<x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x147 = -1;
	volatile int16_t x148 = 0;
	volatile int64_t t36 = 18313825675702452LL;

	t36 = (x145&(x146<=(x147<x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = -40LL;
	static uint64_t x150 = 1592LLU;
	int64_t x151 = -1LL;
	int8_t x152 = 52;
	volatile int64_t t37 = 1LL;

	t37 = (x149&(x150<=(x151<x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x155 = 2972591262994LL;
	uint64_t x156 = 627270875LLU;
	int32_t t38 = 4403;

	t38 = (x153&(x154<=(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 28U;
	int8_t x160 = -1;

	t39 = (x157&(x158<=(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = -1;
	int8_t x162 = -1;
	static uint64_t x163 = 6101393571244931133LLU;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = -7;

	t40 = (x161&(x162<=(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = -199;
	int32_t t41 = -7;

	t41 = (x165&(x166<=(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint8_t x170 = 37U;
	volatile int32_t x171 = -13;
	int64_t x172 = INT64_MIN;
	int32_t t42 = -17;

	t42 = (x169&(x170<=(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MAX;
	uint16_t x176 = 481U;
	int32_t t43 = 218178865;

	t43 = (x173&(x174<=(x175<x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	static uint16_t x179 = UINT16_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t44 = -3;

	t44 = (x177&(x178<=(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 4;
	int32_t x182 = INT32_MIN;
	uint64_t x183 = 1390997671798172105LLU;
	int32_t t45 = -3;

	t45 = (x181&(x182<=(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -23;
	static int64_t x186 = INT64_MIN;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MAX;

	t46 = (x185&(x186<=(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -2873492;
	static uint32_t x190 = 2U;
	uint64_t x191 = 1LLU;
	uint32_t x192 = 46U;
	volatile int32_t t47 = 0;

	t47 = (x189&(x190<=(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x194 = UINT64_MAX;
	static uint8_t x196 = 6U;

	t48 = (x193&(x194<=(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 229327410163829LLU;
	int8_t x198 = INT8_MAX;
	static volatile uint32_t x199 = 88081U;
	int16_t x200 = -153;
	volatile uint64_t t49 = 318731677129LLU;

	t49 = (x197&(x198<=(x199<x200)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = -1;
	int32_t t50 = 64483685;

	t50 = (x201&(x202<=(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -17403309400236LL;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MAX;

	t51 = (x205&(x206<=(x207<x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x210 = 199U;
	int16_t x211 = -1;
	int16_t x212 = INT16_MIN;
	uint32_t t52 = 337U;

	t52 = (x209&(x210<=(x211<x212)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 10425696U;
	static int64_t x214 = 1LL;
	uint16_t x215 = UINT16_MAX;
	volatile int16_t x216 = INT16_MIN;
	static uint32_t t53 = 15197686U;

	t53 = (x213&(x214<=(x215<x216)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile uint32_t t54 = 10696U;

	t54 = (x217&(x218<=(x219<x220)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x223 = 634263572U;
	volatile uint8_t x224 = 3U;
	volatile int32_t t55 = 22;

	t55 = (x221&(x222<=(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 3547;
	volatile int16_t x226 = INT16_MIN;
	static uint8_t x227 = 24U;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = 7183;

	t56 = (x225&(x226<=(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = 1;
	int64_t x231 = INT64_MAX;
	volatile int16_t x232 = -1;
	int32_t t57 = -387;

	t57 = (x229&(x230<=(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = 2;
	volatile int32_t t58 = 1413;

	t58 = (x233&(x234<=(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	static volatile int32_t x240 = 3981;
	static int32_t t59 = -3075496;

	t59 = (x237&(x238<=(x239<x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x243 = UINT64_MAX;
	volatile int64_t x244 = INT64_MIN;
	static int32_t t60 = -271379098;

	t60 = (x241&(x242<=(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x247 = 8118U;
	int64_t x248 = INT64_MAX;
	int32_t t61 = -49782725;

	t61 = (x245&(x246<=(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = 15U;
	volatile int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;
	int32_t t62 = 73776;

	t62 = (x249&(x250<=(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile uint64_t x255 = 461326LLU;
	uint32_t x256 = 689598030U;
	volatile int32_t t63 = 6125;

	t63 = (x253&(x254<=(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 19974346395528007LL;
	static volatile int32_t x258 = -30037410;
	volatile int32_t x259 = INT32_MAX;
	int8_t x260 = 1;
	int64_t t64 = -66613869866LL;

	t64 = (x257&(x258<=(x259<x260)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	uint16_t x264 = 1423U;
	int32_t t65 = -9;

	t65 = (x261&(x262<=(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 359LL;
	int32_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = -101718172;
	volatile int64_t t66 = -10834648776LL;

	t66 = (x265&(x266<=(x267<x268)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -14;
	int32_t x271 = INT32_MAX;
	int32_t x272 = INT32_MAX;
	static int32_t t67 = -13825408;

	t67 = (x269&(x270<=(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 85U;
	static volatile int64_t x274 = INT64_MIN;
	uint32_t x275 = 6241032U;
	static volatile uint16_t x276 = 1U;
	volatile uint32_t t68 = 514126U;

	t68 = (x273&(x274<=(x275<x276)));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MAX;
	int64_t x279 = 4200942224239777150LL;
	static volatile int32_t t69 = 1;

	t69 = (x277&(x278<=(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -11;
	int64_t x282 = -1LL;
	uint32_t x283 = 7289999U;
	uint32_t x284 = 1728U;
	int32_t t70 = 271504017;

	t70 = (x281&(x282<=(x283<x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static volatile int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = 0;

	t71 = (x285&(x286<=(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x290 = 1U;
	int16_t x292 = 178;
	int32_t t72 = 314066;

	t72 = (x289&(x290<=(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = 7224278;

	t73 = (x293&(x294<=(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x299 = UINT64_MAX;
	int16_t x300 = 1;
	static volatile int32_t t74 = 2387;

	t74 = (x297&(x298<=(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	uint64_t x304 = UINT64_MAX;
	int64_t t75 = -371150162LL;

	t75 = (x301&(x302<=(x303<x304)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x308 = -5;
	volatile int32_t t76 = -27224364;

	t76 = (x305&(x306<=(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	volatile int16_t x310 = 1359;
	uint8_t x311 = UINT8_MAX;
	static uint32_t x312 = 15438232U;
	volatile int32_t t77 = -94;

	t77 = (x309&(x310<=(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x315 = 20U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = 1746840U;

	t78 = (x313&(x314<=(x315<x316)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = 1024191532LL;
	volatile int8_t x319 = INT8_MIN;
	static int32_t x320 = -1;
	static volatile int32_t t79 = 210773856;

	t79 = (x317&(x318<=(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -15;
	volatile int64_t x322 = INT64_MAX;
	int64_t x323 = INT64_MIN;
	static int32_t t80 = 4819;

	t80 = (x321&(x322<=(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static uint64_t x326 = 115085314877LLU;
	volatile int8_t x327 = -11;
	uint32_t x328 = 368524U;
	volatile int64_t t81 = -1520826628800928945LL;

	t81 = (x325&(x326<=(x327<x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -360LL;
	uint16_t x330 = 12U;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	int64_t t82 = 2546LL;

	t82 = (x329&(x330<=(x331<x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 2U;
	static uint32_t x334 = 1633U;
	static volatile int32_t x335 = INT32_MAX;
	int16_t x336 = -759;
	static volatile int32_t t83 = -3;

	t83 = (x333&(x334<=(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	uint8_t x338 = 0U;
	static int64_t x339 = -1LL;
	int32_t t84 = 379;

	t84 = (x337&(x338<=(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MAX;
	int32_t x343 = INT32_MAX;
	int64_t x344 = -1LL;
	uint64_t t85 = 27366319LLU;

	t85 = (x341&(x342<=(x343<x344)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	int16_t x347 = INT16_MIN;
	static int64_t x348 = INT64_MIN;
	int32_t t86 = 282;

	t86 = (x345&(x346<=(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 22212694LLU;
	static int64_t x351 = -10LL;
	uint8_t x352 = 1U;
	static volatile uint64_t t87 = 4122865LLU;

	t87 = (x349&(x350<=(x351<x352)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = -10;
	int32_t t88 = 43010;

	t88 = (x353&(x354<=(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = INT32_MIN;
	static uint8_t x358 = 27U;
	int64_t x359 = -1LL;
	static int32_t t89 = 2705897;

	t89 = (x357&(x358<=(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 141335;
	uint8_t x362 = 0U;
	int64_t x363 = 31464709286LL;
	int16_t x364 = INT16_MIN;

	t90 = (x361&(x362<=(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 25U;
	uint64_t x366 = 139176LLU;
	int64_t x367 = INT64_MAX;
	static uint8_t x368 = UINT8_MAX;
	static volatile uint32_t t91 = 1U;

	t91 = (x365&(x366<=(x367<x368)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 6335419934778566197LLU;
	static int32_t x370 = -5729297;
	volatile uint8_t x371 = UINT8_MAX;
	uint32_t x372 = 8U;
	volatile uint64_t t92 = 426LLU;

	t92 = (x369&(x370<=(x371<x372)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 12U;
	uint8_t x374 = UINT8_MAX;
	static int64_t x375 = 1LL;
	static volatile uint32_t t93 = 30773032U;

	t93 = (x373&(x374<=(x375<x376)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MAX;
	uint64_t x378 = 3754747448287LLU;
	int16_t x379 = -1;
	volatile int32_t t94 = 2157;

	t94 = (x377&(x378<=(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	volatile int16_t x383 = 2837;
	int64_t x384 = -1LL;
	volatile int32_t t95 = 1543090;

	t95 = (x381&(x382<=(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = 0;
	int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MIN;
	volatile int64_t x388 = INT64_MAX;

	t96 = (x385&(x386<=(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 1U;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 23927839;

	t97 = (x389&(x390<=(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 124897998895029836LLU;
	int8_t x394 = INT8_MAX;
	int16_t x396 = -3010;
	static volatile uint64_t t98 = 579LLU;

	t98 = (x393&(x394<=(x395<x396)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 1710LLU;
	static int16_t x399 = -1;
	int8_t x400 = 47;

	t99 = (x397&(x398<=(x399<x400)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

